
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sort; } ;
typedef TYPE_1__ drawSurf_t ;
struct TYPE_6__ {int (* Error ) (int ,char*) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3 (
    void *VAR_3,
    unsigned VAR_4,
    unsigned VAR_5
    )
{
    char *VAR_6, *VAR_7;
    char *VAR_8;
    char *VAR_9, *VAR_10;
    unsigned VAR_11;
    char *VAR_12[30], *VAR_13[30];
    int VAR_14;
 int VAR_15;

 if ( sizeof(drawSurf_t) != 8 ) {
  VAR_2.Error( VAR_1, "change SWAP_DRAW_SURF macro" );
 }




    if (VAR_4 < 2 || VAR_5 == 0)
        return;

    VAR_14 = 0;

    VAR_6 = VAR_3;
    VAR_7 = (char *)VAR_3 + VAR_5 * (VAR_4-1);




recurse:

    VAR_11 = (VAR_7 - VAR_6) / VAR_5 + 1;


    if (VAR_11 <= VAR_0) {
         FUNC_1((drawSurf_t *)VAR_6, (drawSurf_t *)VAR_7);
    }
    else {
        VAR_8 = VAR_6 + (VAR_11 / 2) * VAR_5;
        FUNC_0(VAR_8, VAR_6);







        VAR_9 = VAR_6;
        VAR_10 = VAR_7 + VAR_5;



        for (;;) {




            do {
                VAR_9 += VAR_5;
            } while (VAR_9 <= VAR_7 &&
    ( ((drawSurf_t *)VAR_9)->sort <= ((drawSurf_t *)VAR_6)->sort ) );




            do {
                VAR_10 -= VAR_5;
            } while (VAR_10 > VAR_6 &&
    ( ((drawSurf_t *)VAR_10)->sort >= ((drawSurf_t *)VAR_6)->sort ) );




            if (VAR_10 < VAR_9)
                break;





            FUNC_0(VAR_9, VAR_10);



        }
        FUNC_0(VAR_6, VAR_10);
        if ( VAR_10 - 1 - VAR_6 >= VAR_7 - VAR_9 ) {
            if (VAR_6 + VAR_5 < VAR_10) {
                VAR_12[VAR_14] = VAR_6;
                VAR_13[VAR_14] = VAR_10 - VAR_5;
                ++VAR_14;
            }

            if (VAR_9 < VAR_7) {
                VAR_6 = VAR_9;
                goto recurse;
            }
        }
        else {
            if (VAR_9 < VAR_7) {
                VAR_12[VAR_14] = VAR_9;
                VAR_13[VAR_14] = VAR_7;
                ++VAR_14;
            }

            if (VAR_6 + VAR_5 < VAR_10) {
                VAR_7 = VAR_10 - VAR_5;
                goto recurse;
            }
        }
    }




    --VAR_14;
    if (VAR_14 >= 0) {
        VAR_6 = VAR_12[VAR_14];
        VAR_7 = VAR_13[VAR_14];
        goto recurse;
    }
    else
        return;
}
