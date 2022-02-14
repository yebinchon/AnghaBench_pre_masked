
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_4__ {scalar_t__ env_counter; scalar_t__ ssctl; } ;
typedef TYPE_1__ SlotState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static u32 FUNC_3(SlotState *VAR_3, s32 *VAR_4, s16 *VAR_5, u32 VAR_6)
{
   s32 *VAR_7, *VAR_8;

   VAR_7 = VAR_4;
   VAR_8 = VAR_4+VAR_6;
   VAR_1 = VAR_7;
   VAR_2 = VAR_8;

   if (VAR_3->env_counter >= VAR_0)
      return 0;

   if (VAR_3->ssctl)
      return 0;

   FUNC_2(VAR_7, 0, sizeof(u32) * VAR_6);
   FUNC_2(VAR_8, 0, sizeof(u32) * VAR_6);
   FUNC_1(VAR_3, VAR_6);
   FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6);
   return VAR_6;
}
