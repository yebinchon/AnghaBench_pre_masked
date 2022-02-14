
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,...) ;
 char* FUNC_1 (unsigned char,unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

void
FUNC_3(unsigned char VAR_0, unsigned char VAR_1)
{
        const char *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2) {
  if (FUNC_2(VAR_2, "%x")) {
   FUNC_0("Add. Sense: ");
   FUNC_0(VAR_2, VAR_1);
  } else
   FUNC_0("Add. Sense: %s", VAR_2);
 } else {
  if (VAR_0 >= 0x80)
   FUNC_0("<<vendor>> ASC=0x%x ASCQ=0x%x", VAR_0,
          VAR_1);
  if (VAR_1 >= 0x80)
   FUNC_0("ASC=0x%x <<vendor>> ASCQ=0x%x", VAR_0,
          VAR_1);
  else
   FUNC_0("ASC=0x%x ASCQ=0x%x", VAR_0, VAR_1);
 }

 FUNC_0("\n");
}
