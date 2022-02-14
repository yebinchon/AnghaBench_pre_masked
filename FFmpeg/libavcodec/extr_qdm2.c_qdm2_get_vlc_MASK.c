
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int table; } ;
typedef TYPE_1__ VLC ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_2, const VLC *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;

    VAR_6 = FUNC_2(VAR_2, VAR_3->table, VAR_3->bits, VAR_5);


    if (VAR_6-- == 0)
        VAR_6 = FUNC_1(VAR_2, FUNC_1(VAR_2, 3) + 1);


    if (VAR_4) {
        int VAR_7;

        if (VAR_6 >= 60) {
            FUNC_0(((void*)0), VAR_0, "value %d in qdm2_get_vlc too large\n", VAR_6);
            return 0;
        }

        VAR_7= VAR_1[VAR_6];

        if ((VAR_6 & ~3) > 0)
            VAR_7 += FUNC_1(VAR_2, (VAR_6 >> 2));
        VAR_6 = VAR_7;
    }

    return VAR_6;
}
