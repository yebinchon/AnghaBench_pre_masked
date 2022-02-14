
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int esp_err_t ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;

esp_err_t FUNC_4()
{

    for (int VAR_7 = 1; VAR_7 < VAR_0; VAR_7++) {
        if (FUNC_2(VAR_7) == VAR_1) {
            for (uint32_t VAR_8 = VAR_6[VAR_7].start; VAR_8 <= VAR_6[VAR_7].end; VAR_8 += 4) {
                if (FUNC_1(VAR_8)) {
                    int VAR_9 = 0;
                    for (uint32_t VAR_10 = VAR_5[VAR_7].start; VAR_10 <= VAR_5[VAR_7].end; VAR_10 += 4, ++VAR_9) {
                        if (FUNC_3(VAR_7, VAR_9)) {
                         FUNC_0(VAR_4, "Bits are not empty. Write operation is forbidden.");
                            return VAR_2;
                        }
                    }
                    break;
                }
            }
        }
    }
    return VAR_3;
}
