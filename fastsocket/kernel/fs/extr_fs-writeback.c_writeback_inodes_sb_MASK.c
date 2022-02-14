
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_unused; scalar_t__ nr_inodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 void FUNC_1 (struct super_block*,scalar_t__) ;

void FUNC_2(struct super_block *VAR_3)
{
 return FUNC_1(VAR_3, FUNC_0(VAR_0) +
         FUNC_0(VAR_1) +
         (VAR_2.nr_inodes - VAR_2.nr_unused));
}
