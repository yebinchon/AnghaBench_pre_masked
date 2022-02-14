
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int table; } ;
typedef TYPE_1__ VLC ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int) ;

__attribute__((used)) static inline void FUNC_3(int16_t *VAR_0, int VAR_1, int VAR_2, GetBitContext *VAR_3, VLC* VAR_4, int VAR_5)
{
    if(VAR_1){
        if(VAR_1 == VAR_2){
            VAR_1 = FUNC_2(VAR_3, VAR_4->table, 9, 2);
            if(VAR_1 > 23){
                VAR_1 -= 23;
                VAR_1 = 22 + ((1 << VAR_1) | FUNC_0(VAR_3, VAR_1));
            }
            VAR_1 += VAR_2;
        }
        if(FUNC_1(VAR_3))
            VAR_1 = -VAR_1;
        *VAR_0 = (VAR_1*VAR_5 + 8) >> 4;
    }
}
