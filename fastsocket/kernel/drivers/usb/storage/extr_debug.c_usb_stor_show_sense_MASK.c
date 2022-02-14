
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,...) ;
 char* FUNC_2 (unsigned char,unsigned char) ;
 char* FUNC_3 (unsigned char) ;

void FUNC_4(
  unsigned char VAR_0,
  unsigned char VAR_1,
  unsigned char VAR_2) {

 const char *VAR_3, *VAR_4;

 VAR_4 = FUNC_3(VAR_0);
 VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (VAR_4 == ((void*)0))
  VAR_4 = "(Unknown Key)";
 if (VAR_3 == ((void*)0))
  VAR_3 = "(unknown ASC/ASCQ)";

 FUNC_0("%s: ", VAR_4);
 FUNC_1(VAR_3, VAR_2);
 FUNC_1("\n");
}
