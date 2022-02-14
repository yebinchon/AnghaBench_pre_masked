
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ pin; scalar_t__ previous; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_1 ;

void FUNC_4(uint8_t VAR_2, uint8_t VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
        if (VAR_1[VAR_4].pin != VAR_2) {
            continue;
        }
        if (VAR_3 == VAR_1[VAR_4].previous) {
            FUNC_2(VAR_0, "led %s is already %s",
                VAR_1[VAR_4].name, (VAR_3 ? "on" : "off"));
            return;
        }
        FUNC_3(VAR_2, VAR_3);
        VAR_1[VAR_4].previous = VAR_3;
        return;
    }
    FUNC_1(VAR_0, "LED is not found!");
}
