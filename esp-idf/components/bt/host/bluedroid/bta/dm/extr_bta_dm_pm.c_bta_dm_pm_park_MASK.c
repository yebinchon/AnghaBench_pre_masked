
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tBTM_PM_MODE ;
struct TYPE_2__ {int pm_id; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static BOOLEAN FUNC_2(BD_ADDR VAR_6)
{

    tBTM_PM_MODE VAR_7 = VAR_2;


    FUNC_0(VAR_6, &VAR_7);

    if (VAR_7 != VAR_1) {
        FUNC_1 (VAR_4.pm_id, VAR_6, &VAR_5[VAR_0]);
    }
    return VAR_3;

}
