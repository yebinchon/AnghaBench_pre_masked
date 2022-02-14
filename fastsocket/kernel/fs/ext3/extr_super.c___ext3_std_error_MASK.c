
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct super_block*,int,char*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ,char*,char const*,char const*) ;
 int * FUNC_3 () ;

void FUNC_4 (struct super_block * VAR_3, const char * VAR_4,
         int VAR_5)
{
 char VAR_6[16];
 const char *VAR_7;




 if (VAR_5 == -VAR_0 && FUNC_3() == ((void*)0) &&
     (VAR_3->s_flags & VAR_2))
  return;

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6);
 FUNC_2(VAR_3, VAR_1, "error in %s: %s", VAR_4, VAR_7);

 FUNC_1(VAR_3);
}
