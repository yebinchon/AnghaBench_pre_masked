
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {char* s_options; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;

void FUNC_3(struct super_block *VAR_0, char *VAR_1)
{
 char *VAR_2 = VAR_0->s_options;
 FUNC_1(VAR_0->s_options, VAR_1);
 if (VAR_2) {
  FUNC_2();
  FUNC_0(VAR_2);
 }
}
