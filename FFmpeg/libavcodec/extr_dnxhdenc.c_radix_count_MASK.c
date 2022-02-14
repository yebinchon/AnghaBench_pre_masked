
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buckets ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ RCCMPEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int ) ;
 int FUNC_2 (int**,int ,int) ;

__attribute__((used)) static void FUNC_3(const RCCMPEntry *VAR_3, int VAR_4,
                        int VAR_5[VAR_2][VAR_1])
{
    int VAR_6, VAR_7;
    FUNC_2(VAR_5, 0, sizeof(VAR_5[0][0]) * VAR_2 * VAR_1);
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        int VAR_8 = VAR_3[VAR_6].value;
        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
            VAR_5[VAR_7][FUNC_1(VAR_8, 0)]++;
            VAR_8 >>= VAR_0;
        }
        FUNC_0(!VAR_8);
    }
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        int VAR_9 = VAR_4;
        for (VAR_6 = VAR_1 - 1; VAR_6 >= 0; VAR_6--)
            VAR_5[VAR_7][VAR_6] = VAR_9 -= VAR_5[VAR_7][VAR_6];
        FUNC_0(!VAR_5[VAR_7][0]);
    }
}
