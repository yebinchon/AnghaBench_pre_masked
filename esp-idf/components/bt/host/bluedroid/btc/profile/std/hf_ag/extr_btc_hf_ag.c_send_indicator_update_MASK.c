
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* value; void* type; } ;
struct TYPE_6__ {TYPE_1__ ind; } ;
typedef TYPE_2__ tBTA_AG_RES_DATA ;
typedef void* UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(UINT16 VAR_2, UINT16 VAR_3)
{
    tBTA_AG_RES_DATA VAR_4;
    FUNC_1(&VAR_4, 0, sizeof(tBTA_AG_RES_DATA));
    VAR_4.ind.type = VAR_2;
    VAR_4.ind.value = VAR_3;
    FUNC_0(VAR_0, VAR_1, &VAR_4);
}
