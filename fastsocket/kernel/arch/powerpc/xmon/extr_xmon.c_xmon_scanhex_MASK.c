
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regname ;


 int EOF ;
 int N_PTREGS ;
 int bus_error_jmp ;
 int catch_memory_errors ;
 int hexdigit (int) ;
 int inchar () ;
 int isalnum (int) ;
 scalar_t__ isspace (int) ;
 unsigned long kallsyms_lookup_name (char*) ;
 int printf (char*,...) ;
 int * regnames ;
 scalar_t__ setjmp (int ) ;
 int skipbl () ;
 scalar_t__ strcmp (int ,char*) ;
 int sync () ;
 int termch ;
 char* tmpstr ;
 int * xmon_regs ;

int
scanhex(unsigned long *vp)
{
 int c, d;
 unsigned long v;

 c = skipbl();
 if (c == '%') {

  char regname[8];
  int i;

  for (i = 0; i < sizeof(regname) - 1; ++i) {
   c = inchar();
   if (!isalnum(c)) {
    termch = c;
    break;
   }
   regname[i] = c;
  }
  regname[i] = 0;
  for (i = 0; i < N_PTREGS; ++i) {
   if (strcmp(regnames[i], regname) == 0) {
    if (xmon_regs == ((void*)0)) {
     printf("regs not available\n");
     return 0;
    }
    *vp = ((unsigned long *)xmon_regs)[i];
    return 1;
   }
  }
  printf("invalid register name '%%%s'\n", regname);
  return 0;
 }



 if (c == '0') {
  c = inchar();
  if (c == 'x') {
   c = inchar();
  } else {
   d = hexdigit(c);
   if (d == EOF) {
    termch = c;
    *vp = 0;
    return 1;
   }
  }
 } else if (c == '$') {
  int i;
  for (i=0; i<63; i++) {
   c = inchar();
   if (isspace(c)) {
    termch = c;
    break;
   }
   tmpstr[i] = c;
  }
  tmpstr[i++] = 0;
  *vp = 0;
  if (setjmp(bus_error_jmp) == 0) {
   catch_memory_errors = 1;
   sync();
   *vp = kallsyms_lookup_name(tmpstr);
   sync();
  }
  catch_memory_errors = 0;
  if (!(*vp)) {
   printf("unknown symbol '%s'\n", tmpstr);
   return 0;
  }
  return 1;
 }

 d = hexdigit(c);
 if (d == EOF) {
  termch = c;
  return 0;
 }
 v = 0;
 do {
  v = (v << 4) + d;
  c = inchar();
  d = hexdigit(c);
 } while (d != EOF);
 termch = c;
 *vp = v;
 return 1;
}
