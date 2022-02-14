
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int toupper_t ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int s_flags; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline toupper_t
FUNC_1(struct super_block *VAR_3)
{
 return FUNC_0(VAR_3)->s_flags & VAR_0 ? VAR_1 : VAR_2;
}
