
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va_format {int * va; int fmt; } ;
struct printf_spec {int field_width; int base; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (char*,char*,void*,struct printf_spec,char const*) ;
 char* FUNC_6 (char*,char*,void*,struct printf_spec,char const*) ;
 int VAR_4 ;
 char* FUNC_7 (char*,char*,void*,struct printf_spec,char const*) ;
 char* FUNC_8 (char*,char*,unsigned long,struct printf_spec) ;
 char* FUNC_9 (char*,char*,void*,struct printf_spec,char const*) ;
 char* FUNC_10 (char*,char*,char*,struct printf_spec) ;
 char* FUNC_11 (char*,char*,void*,struct printf_spec,char const) ;
 char* FUNC_12 (char*,char*,void*,struct printf_spec,char const*) ;
 int FUNC_13 (char*,int,int ,int ) ;

__attribute__((used)) static char *FUNC_14(const char *VAR_5, char *VAR_6, char *VAR_7, void *VAR_8,
   struct printf_spec VAR_9)
{
 if (!VAR_8 && *VAR_5 != 'K')
  return FUNC_10(VAR_6, VAR_7, "(null)", VAR_9);

 switch (*VAR_5) {
 case 'F':
 case 'f':
  VAR_8 = FUNC_0(VAR_8);

 case 'S':
 case 's':
  return FUNC_11(VAR_6, VAR_7, VAR_8, VAR_9, *VAR_5);
 case 'R':
 case 'r':
  return FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
 case 'M':
 case 'm':
  return FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
 case 'I':




 case 'i':



  switch (VAR_5[1]) {
  case '6':
   return FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
  case '4':
   return FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
  }
  break;
 case 'K':




  if (FUNC_2() || FUNC_4() || FUNC_3()) {
   if (VAR_9.field_width == -1)
    VAR_9.field_width = 2 * sizeof(void *);
   return FUNC_10(VAR_6, VAR_7, "pK-error", VAR_9);
  } else if ((VAR_4 == 0) ||
    (VAR_4 == 1 &&
     FUNC_1(VAR_3, VAR_0)))
   break;

  if (VAR_9.field_width == -1) {
   VAR_9.field_width = 2 * sizeof(void *);
   VAR_9.flags |= VAR_2;
  }
  return FUNC_8(VAR_6, VAR_7, 0, VAR_9);
 case 'U':
  return FUNC_12(VAR_6, VAR_7, VAR_8, VAR_9, VAR_5);
 case 'V':
  return VAR_6 + FUNC_13(VAR_6, VAR_7 - VAR_6,
           ((struct va_format *)VAR_8)->fmt,
           *(((struct va_format *)VAR_8)->va));
 }
 VAR_9.flags |= VAR_1;
 if (VAR_9.field_width == -1) {
  VAR_9.field_width = 2*sizeof(void *);
  VAR_9.flags |= VAR_2;
 }
 VAR_9.base = 16;

 return FUNC_8(VAR_6, VAR_7, (unsigned long) VAR_8, VAR_9);
}
