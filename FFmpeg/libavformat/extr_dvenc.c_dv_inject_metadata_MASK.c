
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* sys; } ;
struct TYPE_5__ {int frame_size; long difseg_size; long n_difchan; } ;
typedef TYPE_2__ DVMuxContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_1(DVMuxContext *VAR_3, uint8_t* VAR_4)
{
    int VAR_5, VAR_6;
    uint8_t* VAR_7;

    for (VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_3->sys->frame_size; VAR_7 += 150 * 80) {

        for (VAR_5 = 80; VAR_5 < 80 * 3; VAR_5 += 80) {
            for (VAR_6 = 6; VAR_6 < 6 * 8; VAR_6 += 8)
                FUNC_0(VAR_0, VAR_3, &VAR_7[VAR_5+VAR_6]);

            if (((long)(VAR_7-VAR_4)/(VAR_3->sys->frame_size/(VAR_3->sys->difseg_size*VAR_3->sys->n_difchan))%VAR_3->sys->difseg_size) > 5) {
                FUNC_0(VAR_1, VAR_3, &VAR_7[VAR_5+14]);
                FUNC_0(VAR_2, VAR_3, &VAR_7[VAR_5+22]);
                FUNC_0(VAR_1, VAR_3, &VAR_7[VAR_5+38]);
                FUNC_0(VAR_2, VAR_3, &VAR_7[VAR_5+46]);
            }
        }


        for (VAR_5 = 80*3 + 3; VAR_5 < 80*6; VAR_5 += 80) {
            FUNC_0(VAR_1, VAR_3, &VAR_7[VAR_5+5*2]);
            FUNC_0(VAR_2, VAR_3, &VAR_7[VAR_5+5*3]);
            FUNC_0(VAR_1, VAR_3, &VAR_7[VAR_5+5*11]);
            FUNC_0(VAR_2, VAR_3, &VAR_7[VAR_5+5*12]);
        }
    }
}
