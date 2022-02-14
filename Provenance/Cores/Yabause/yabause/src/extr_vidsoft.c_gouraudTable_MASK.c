
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ CMDGRDA; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef int Vdp1 ;
struct TYPE_11__ {void* value; } ;
struct TYPE_10__ {void* value; } ;
struct TYPE_9__ {void* value; } ;
struct TYPE_8__ {void* value; } ;


 void* FUNC_0 (int *,int) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static void FUNC_1(u8* VAR_4, Vdp1* VAR_5, vdp1cmd_struct * VAR_6)
{
 int VAR_7;



 VAR_7 = (((unsigned int)VAR_6->CMDGRDA) << 3);

   VAR_0.value = FUNC_0(VAR_4, VAR_7);
   VAR_1.value = FUNC_0(VAR_4, VAR_7 + 2);
   VAR_2.value = FUNC_0(VAR_4, VAR_7 + 4);
   VAR_3.value = FUNC_0(VAR_4, VAR_7 + 6);
}
