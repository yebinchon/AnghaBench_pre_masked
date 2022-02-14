
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int groups_count; scalar_t__* groups; } ;
typedef TYPE_1__ m68k_info ;
typedef scalar_t__ m68k_group_type ;



__attribute__((used)) static void FUNC_0(m68k_info *VAR_0, m68k_group_type VAR_1)
{
 VAR_0->groups[VAR_0->groups_count++] = (uint8_t)VAR_1;
}
