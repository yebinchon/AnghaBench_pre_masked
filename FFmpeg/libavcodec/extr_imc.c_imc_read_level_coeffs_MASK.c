
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
struct TYPE_6__ {int gb; } ;
typedef TYPE_2__ IMCContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,int) ;
 TYPE_1__** VAR_1 ;
 size_t** VAR_2 ;

__attribute__((used)) static void FUNC_2(IMCContext *VAR_3, int VAR_4,
                                  int *VAR_5)
{
    int VAR_6;
    VLC *VAR_7[4];
    int VAR_8 = 0;
    const uint8_t *VAR_9;
    int VAR_10;

    VAR_10 = VAR_4 >> 1;
    VAR_7[0] = &VAR_1[VAR_10][0];
    VAR_7[1] = &VAR_1[VAR_10][1];
    VAR_7[2] = &VAR_1[VAR_10][2];
    VAR_7[3] = &VAR_1[VAR_10][3];
    VAR_9 = VAR_2[VAR_10];

    if (VAR_4 & 4)
        VAR_8 = 1;
    if (VAR_8)
        VAR_5[0] = FUNC_0(&VAR_3->gb, 7);
    for (VAR_6 = VAR_8; VAR_6 < VAR_0; VAR_6++) {
        VAR_5[VAR_6] = FUNC_1(&VAR_3->gb, VAR_7[VAR_9[VAR_6]]->table,
                                 VAR_7[VAR_9[VAR_6]]->bits, 2);
        if (VAR_5[VAR_6] == 17)
            VAR_5[VAR_6] += FUNC_0(&VAR_3->gb, 4);
    }
}
