
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int nb_ch; int format; } ;
typedef TYPE_1__ TestStruct ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void FUNC_4(const TestStruct *VAR_1, void **VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    int VAR_7 = FUNC_0(VAR_1->format);
    int VAR_8 = FUNC_1(VAR_1->format)
                                         ? VAR_1->nb_ch : 1;
    int VAR_9 = (VAR_8 > 1) ? VAR_3 * VAR_7
                                         : VAR_3 * VAR_7 * VAR_1->nb_ch;
    for (VAR_4 = 0; VAR_4 < VAR_8; ++VAR_4){
        for(VAR_5 = 0; VAR_5 < VAR_9; VAR_5+=VAR_7){
            for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++){
                int VAR_10 = !VAR_0 ? (VAR_7 - VAR_6 - 1) : VAR_6;
                FUNC_2("%02x", *((uint8_t*)VAR_2[VAR_4] + VAR_5 + VAR_10));
            }
            FUNC_3(' ');
        }
        FUNC_3('\n');
    }
}
