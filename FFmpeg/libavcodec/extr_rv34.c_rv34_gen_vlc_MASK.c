
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {size_t table_allocated; int * table; } ;
typedef TYPE_1__ VLC ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int,int*,int,int,int*,int,int,int*,int,int,int ) ;
 int * VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_4, int VAR_5, VLC *VAR_6, const uint8_t *VAR_7,
                         const int VAR_8)
{
    int VAR_9;
    int VAR_10[17] = {0}, VAR_11[17];
    uint16_t VAR_12[VAR_1], VAR_13[VAR_1];
    uint8_t VAR_14[VAR_1];
    int VAR_15 = 0, VAR_16 = 0;

    for(VAR_9 = 0; VAR_9 < VAR_5; VAR_9++){
        if(VAR_4[VAR_9]){
            VAR_14[VAR_16] = VAR_4[VAR_9];
            VAR_13[VAR_16] = VAR_7 ? VAR_7[VAR_9] : VAR_9;
            VAR_16++;
            VAR_15 = FUNC_0(VAR_15, VAR_4[VAR_9]);
            VAR_10[VAR_4[VAR_9]]++;
        }
    }

    VAR_11[0] = 0;
    for(VAR_9 = 0; VAR_9 < 16; VAR_9++)
        VAR_11[VAR_9+1] = (VAR_11[VAR_9] + VAR_10[VAR_9]) << 1;
    for(VAR_9 = 0; VAR_9 < VAR_16; VAR_9++)
        VAR_12[VAR_9] = VAR_11[VAR_14[VAR_9]]++;

    VAR_6->table = &VAR_2[VAR_3[VAR_8]];
    VAR_6->table_allocated = VAR_3[VAR_8 + 1] - VAR_3[VAR_8];
    FUNC_2(VAR_6, FUNC_1(VAR_15, 9), VAR_16,
                       VAR_14, 1, 1,
                       VAR_12, 2, 2,
                       VAR_13, 2, 2, VAR_0);
}
