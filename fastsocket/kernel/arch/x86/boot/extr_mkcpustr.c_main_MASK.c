
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char** VAR_1 ;

int FUNC_1(void)
{
 int VAR_2, VAR_3;
 const char *VAR_4;

 FUNC_0("static const char x86_cap_strs[] =\n");

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
   VAR_4 = VAR_1[VAR_2*32+VAR_3];

   if (VAR_2 == VAR_0-1 && VAR_3 == 31) {



    if (!VAR_4)
     VAR_4 = "";
    FUNC_0("\t\"\\x%02x\\x%02x\"\"%s\"\n",
           VAR_2, VAR_3, VAR_4);
   } else if (VAR_4) {
    FUNC_0("#if REQUIRED_MASK%d & (1 << %d)\n"
           "\t\"\\x%02x\\x%02x\"\"%s\\0\"\n"
           "#endif\n",
           VAR_2, VAR_3, VAR_2, VAR_3, VAR_4);
   }
  }
 }
 FUNC_0("\t;\n");
 return 0;
}
