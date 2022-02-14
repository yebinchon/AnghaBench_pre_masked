
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct super_block* s_options; struct super_block* s_subtype; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static inline void FUNC_3(struct super_block *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->s_subtype);
 FUNC_1(VAR_0->s_options);
 FUNC_1(VAR_0);
}
