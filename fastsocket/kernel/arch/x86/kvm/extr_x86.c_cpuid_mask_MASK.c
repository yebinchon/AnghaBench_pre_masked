
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int * x86_capability; } ;
struct TYPE_3__ {int * x86_capability; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_0(u32 *VAR_3, int VAR_4)
{
 if (VAR_4 < VAR_0)
  *VAR_3 &= VAR_1.x86_capability[VAR_4];
 else
  *VAR_3 &= VAR_2.x86_capability[VAR_4 - VAR_0];
}
