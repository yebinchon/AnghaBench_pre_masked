
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int** max_level; int** max_run; scalar_t__** table_vlc; } ;
typedef TYPE_1__ RLTable ;
typedef int MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_1(MpegEncContext * VAR_1, RLTable *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6){
    int VAR_7=0;
    int VAR_8;
    int VAR_9= VAR_6 ? 0 : 1;

    VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
    VAR_7+= VAR_2->table_vlc[VAR_8][1];
    if (VAR_8 == VAR_2->n) {
        int VAR_10, VAR_11;

        VAR_10 = VAR_5 - VAR_2->max_level[VAR_3][VAR_4];
        if (VAR_10 < 1)
            goto esc2;
        VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_10);
        if (VAR_8 == VAR_2->n) {
            esc2:
            VAR_7++;
            if (VAR_5 > VAR_0)
                goto esc3;
            VAR_11 = VAR_4 - VAR_2->max_run[VAR_3][VAR_5] - VAR_9;
            if (VAR_11 < 0)
                goto esc3;
            VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_11, VAR_5);
            if (VAR_8 == VAR_2->n) {
            esc3:

                VAR_7+=1+1+6+8;
            } else {

                VAR_7+= 1+1+ VAR_2->table_vlc[VAR_8][1];
            }
        } else {

            VAR_7+= 1+1+ VAR_2->table_vlc[VAR_8][1];
        }
    } else {
        VAR_7++;
    }
    return VAR_7;
}
