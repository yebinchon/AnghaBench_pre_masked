
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_count; } ;


 int FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0)
{
 int VAR_1 = 0;

 if (!--VAR_0->s_count) {
  FUNC_0(VAR_0);
  VAR_1 = 1;
 }
 return VAR_1;
}
