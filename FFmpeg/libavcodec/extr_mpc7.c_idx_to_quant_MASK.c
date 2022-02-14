
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int rnd; } ;
typedef TYPE_1__ MPCContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int ,int,int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 void** VAR_6 ;
 TYPE_2__** VAR_7 ;

__attribute__((used)) static inline void FUNC_4(MPCContext *VAR_8, GetBitContext *VAR_9, int VAR_10, int *VAR_11)
{
    int VAR_12, VAR_13, VAR_14;
    switch(VAR_10){
    case -1:
        for(VAR_12 = 0; VAR_12 < VAR_0; VAR_12++){
            *VAR_11++ = (FUNC_0(&VAR_8->rnd) & 0x3FC) - 510;
        }
        break;
    case 1:
        VAR_13 = FUNC_2(VAR_9);
        for(VAR_12 = 0; VAR_12 < VAR_0/3; VAR_12++){
            VAR_14 = FUNC_3(VAR_9, VAR_7[0][VAR_13].table, 9, 2);
            *VAR_11++ = VAR_1[VAR_14];
            *VAR_11++ = VAR_2[VAR_14];
            *VAR_11++ = VAR_3[VAR_14];
        }
        break;
    case 2:
        VAR_13 = FUNC_2(VAR_9);
        for(VAR_12 = 0; VAR_12 < VAR_0/2; VAR_12++){
            VAR_14 = FUNC_3(VAR_9, VAR_7[1][VAR_13].table, 9, 2);
            *VAR_11++ = VAR_4[VAR_14];
            *VAR_11++ = VAR_5[VAR_14];
        }
        break;
    case 3: case 4: case 5: case 6: case 7:
        VAR_13 = FUNC_2(VAR_9);
        for(VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
            *VAR_11++ = FUNC_3(VAR_9, VAR_7[VAR_10-1][VAR_13].table, 9, 2) - VAR_6[VAR_10-1];
        break;
    case 8: case 9: case 10: case 11: case 12:
    case 13: case 14: case 15: case 16: case 17:
        VAR_14 = (1 << (VAR_10 - 2)) - 1;
        for(VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
            *VAR_11++ = FUNC_1(VAR_9, VAR_10 - 1) - VAR_14;
        break;
    default:
        return;
    }
}
