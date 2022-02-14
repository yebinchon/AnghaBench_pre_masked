
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t test_num; scalar_t__* time; int statistics; } ;


 int FUNC_0 (int ,char*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
    uint32_t VAR_4, VAR_5;
    uint32_t VAR_6 = 0;

    FUNC_2(VAR_1, VAR_2);

    for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_3.test_num; VAR_4++) {
        if (VAR_3.time[VAR_4] != 0) {
            VAR_6 += VAR_3.time[VAR_4];
            VAR_5 += 1;
        } else {
            continue;
        }

        if (VAR_5 == VAR_3.test_num - 1) {
            break;
        }
    }

    FUNC_0(VAR_0, "VendorModel:Statistics,%d,%d\n",
             VAR_3.statistics, (VAR_6 / (VAR_5 + 1)));

    FUNC_1(VAR_1);
}
