
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(uint32_t VAR_8)
{


    bool VAR_9 = FUNC_1(0) != VAR_0;

    if (FUNC_2(VAR_8)) {
        return 0;
    }

    if (VAR_8 < 0x10000000) {




        return 0;
    }

    if (!VAR_9) {
        if (VAR_8 >= VAR_6 && VAR_8 < VAR_5) {
            FUNC_0(VAR_7, "Skipping RTC fast memory segment at 0x%08x", VAR_8);
            return 0;
        }
        if (VAR_8 >= VAR_4 && VAR_8 < VAR_3) {
            FUNC_0(VAR_7, "Skipping RTC fast memory segment at 0x%08x", VAR_8);
            return 0;
        }
        if (VAR_8 >= VAR_2 && VAR_8 < VAR_1) {
            FUNC_0(VAR_7, "Skipping RTC slow memory segment at 0x%08x", VAR_8);
            return 0;
        }
    }

    return 1;
}
