
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int call_ind; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef size_t tBTA_AG_RES ;
typedef int UINT8 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

void FUNC_1(tBTA_AG_SCB *VAR_10, tBTA_AG_RES VAR_11)
{
    UINT8 VAR_12 = VAR_10->call_ind;
    UINT8 VAR_13;

    VAR_13 = VAR_9[VAR_11];

    if (VAR_11 == VAR_2) {
        VAR_12 = VAR_1;
    } else if (VAR_11 == VAR_5 || VAR_11 == VAR_7
             || VAR_11 == VAR_6) {
        VAR_12 = VAR_0;
    } else {
        VAR_12 = VAR_10->call_ind;
    }

    FUNC_0(VAR_10, VAR_3, VAR_12, VAR_8);
    FUNC_0(VAR_10, VAR_4, VAR_13, VAR_8);
}
