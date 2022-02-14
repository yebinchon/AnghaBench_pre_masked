
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct operand {int flags; } ;
struct insn {char* name; size_t format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (unsigned char*,struct operand const*) ;
 struct insn* FUNC_1 (unsigned char*) ;
 unsigned char** VAR_9 ;
 char** VAR_10 ;
 struct operand* VAR_11 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(char *VAR_12, unsigned char *VAR_13, unsigned long VAR_14)
{
 struct insn *VAR_15;
 const unsigned char *VAR_16;
 const struct operand *VAR_17;
 unsigned int VAR_18;
 char VAR_19;
 char *VAR_20;
 int VAR_21;

 VAR_20 = VAR_12;
 VAR_15 = FUNC_1(VAR_13);
 if (VAR_15) {
  if (VAR_15->name[0] == '\0')
   VAR_20 += FUNC_2(VAR_20, "%s\t",
           VAR_10[(int) VAR_15->name[1]]);
  else
   VAR_20 += FUNC_2(VAR_20, "%.5s\t", VAR_15->name);

  VAR_19 = 0;
  for (VAR_16 = VAR_9[VAR_15->format] + 1, VAR_21 = 0;
       *VAR_16 != 0 && VAR_21 < 6; VAR_16++, VAR_21++) {
   VAR_17 = VAR_11 + *VAR_16;
   VAR_18 = FUNC_0(VAR_13, VAR_17);
   if ((VAR_17->flags & VAR_6) && VAR_18 == 0)
    continue;
   if ((VAR_17->flags & VAR_1) &&
       VAR_18 == 0 && VAR_19 == '(') {
    VAR_19 = ',';
    continue;
   }
   if (VAR_19)
    VAR_20 += FUNC_2(VAR_20, "%c", VAR_19);
   if (VAR_17->flags & VAR_5)
    VAR_20 += FUNC_2(VAR_20, "%%r%i", VAR_18);
   else if (VAR_17->flags & VAR_4)
    VAR_20 += FUNC_2(VAR_20, "%%f%i", VAR_18);
   else if (VAR_17->flags & VAR_0)
    VAR_20 += FUNC_2(VAR_20, "%%a%i", VAR_18);
   else if (VAR_17->flags & VAR_2)
    VAR_20 += FUNC_2(VAR_20, "%%c%i", VAR_18);
   else if (VAR_17->flags & VAR_7)
    VAR_20 += FUNC_2(VAR_20, "%lx", (signed int) VAR_18
              + VAR_14);
   else if (VAR_17->flags & VAR_8)
    VAR_20 += FUNC_2(VAR_20, "%i", VAR_18);
   else
    VAR_20 += FUNC_2(VAR_20, "%u", VAR_18);
   if (VAR_17->flags & VAR_3)
    VAR_19 = '(';
   else if (VAR_17->flags & VAR_1) {
    VAR_20 += FUNC_2(VAR_20, ")");
    VAR_19 = ',';
   } else
    VAR_19 = ',';
  }
 } else
  VAR_20 += FUNC_2(VAR_20, "unknown");
 return (int) (VAR_20 - VAR_12);
}
