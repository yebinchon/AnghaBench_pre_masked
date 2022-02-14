
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int addr; } ;
struct TYPE_12__ {scalar_t__ CMDGRDA; } ;
struct TYPE_11__ {void* value; } ;
struct TYPE_10__ {void* value; } ;
struct TYPE_9__ {void* value; } ;
struct TYPE_8__ {void* value; } ;


 void* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 TYPE_6__* VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_7;

  FUNC_1(&VAR_2, VAR_1->addr, VAR_0);

 VAR_7 = (((unsigned int)VAR_2.CMDGRDA) << 3);

 VAR_3.value = FUNC_0(VAR_0,VAR_7);
 VAR_4.value = FUNC_0(VAR_0,VAR_7+2);
 VAR_5.value = FUNC_0(VAR_0,VAR_7+4);
 VAR_6.value = FUNC_0(VAR_0,VAR_7+6);
}
