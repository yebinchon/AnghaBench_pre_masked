
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_dirt; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct super_block *VAR_1)
{
 FUNC_1(VAR_0, &FUNC_0(VAR_1)->flags);
 VAR_1->s_dirt = 1;
}
