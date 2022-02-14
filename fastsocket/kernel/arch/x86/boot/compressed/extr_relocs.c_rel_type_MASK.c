
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const**) ;
 char const* FUNC_1 (int ) ;
__attribute__((used)) static const char *FUNC_2(unsigned VAR_0)
{
 static const char *VAR_1[] = {

  [131] = "R_386_NONE",
  [138] = "R_386_32",
  [130] = "R_386_PC32",
  [135] = "R_386_GOT32",
  [129] = "R_386_PLT32",
  [137] = "R_386_COPY",
  [136] = "R_386_GLOB_DAT",
  [132] = "R_386_JMP_SLOT",
  [128] = "R_386_RELATIVE",
  [134] = "R_386_GOTOFF",
  [133] = "R_386_GOTPC",

 };
 const char *VAR_2 = "unknown type rel type name";
 if (VAR_0 < FUNC_0(VAR_1)) {
  VAR_2 = VAR_1[VAR_0];
 }
 return VAR_2;
}
