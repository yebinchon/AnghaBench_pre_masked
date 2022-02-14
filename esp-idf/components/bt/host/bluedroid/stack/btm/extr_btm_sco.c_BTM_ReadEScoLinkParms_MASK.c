
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_ESCO_DATA ;
typedef size_t UINT8 ;
typedef size_t UINT16 ;
struct TYPE_6__ {TYPE_3__* sco_db; } ;
struct TYPE_8__ {TYPE_2__ sco_cb; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_7__ {scalar_t__ state; TYPE_1__ esco; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_1 (int *,int ,int) ;

tBTM_STATUS FUNC_2 (UINT16 VAR_6, tBTM_ESCO_DATA *VAR_7)
{
    FUNC_0("BTM_ReadEScoLinkParms cannot find the SCO index!");
    FUNC_1(VAR_7, 0, sizeof(tBTM_ESCO_DATA));
    return (VAR_3);
}
