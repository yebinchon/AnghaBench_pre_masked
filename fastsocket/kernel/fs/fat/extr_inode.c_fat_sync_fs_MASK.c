
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_dirt; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->s_dirt) {
  FUNC_1(VAR_0);
  VAR_0->s_dirt = 0;
  VAR_2 = FUNC_0(VAR_0);
  FUNC_2(VAR_0);
 }

 return VAR_2;
}
