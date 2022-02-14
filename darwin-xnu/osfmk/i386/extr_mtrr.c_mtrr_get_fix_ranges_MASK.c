
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* types; } ;
typedef TYPE_1__ mtrr_fix_range_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(mtrr_fix_range_t * VAR_4)
{
 int VAR_5;


 VAR_4[0].types = FUNC_0(VAR_3);
 VAR_4[1].types = FUNC_0(VAR_0);
 VAR_4[2].types = FUNC_0(VAR_1);
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  VAR_4[3 + VAR_5].types = FUNC_0(VAR_2 + VAR_5);
}
