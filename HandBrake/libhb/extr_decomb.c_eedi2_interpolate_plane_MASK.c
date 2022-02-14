
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int* cx2; int* cy2; int* cxy; int* tmpc; int post_processing; int tff; int noise_threshold; int maximum_search_distance; int erosion_threshold; int dilation_threshold; int laplacian_threshold; int variance_threshold; int magnitude_threshold; TYPE_4__** eedi_half; TYPE_2__** eedi_full; } ;
typedef TYPE_5__ hb_filter_private_t ;
struct TYPE_10__ {TYPE_3__* plane; } ;
struct TYPE_9__ {int height; int * data; } ;
struct TYPE_8__ {TYPE_1__* plane; } ;
struct TYPE_7__ {int stride; int height; int width; int * data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *,int,int *,int,int,int) ;
 int FUNC_1 (int *,int,int *,int,int ,int ,int ,int,int) ;
 int FUNC_2 (int *,int,int,int,int*,int*,int*) ;
 int FUNC_3 (int,int *,int,int *,int,int *,int,int ,int ,int,int) ;
 int FUNC_4 (int *,int,int *,int,int ,int,int) ;
 int FUNC_5 (int *,int,int *,int,int ,int,int) ;
 int FUNC_6 (int *,int,int *,int,int *,int,int,int) ;
 int FUNC_7 (int *,int,int *,int,int *,int,int ,int,int) ;
 int FUNC_8 (int *,int,int *,int,int *,int,int ,int,int) ;
 int FUNC_9 (int *,int,int *,int,int *,int,int,int) ;
 int FUNC_10 (int *,int,int *,int,int *,int,int ,int,int) ;
 int FUNC_11 (int *,int,int *,int,int *,int,int,int) ;
 int FUNC_12 (int *,int,int *,int,int *,int,int,int) ;
 int FUNC_13 (int*,int*,int*,int,int,int) ;
 int FUNC_14 (int,int *,int,int *,int,int *,int,int ,int ,int,int) ;
 int FUNC_15 (int *,int,int *,int,int *,int,int ,int,int) ;
 int FUNC_16 (int *,int,int *,int,int *,int,int ,int,int) ;
 int FUNC_17 (int*,int*,int*,int,int *,int,int *,int,int,int,int ) ;
 int FUNC_18 (int *,int,int *,int,int,int) ;
 int FUNC_19 (int *,int *,int,int) ;

__attribute__((used)) static void FUNC_20( hb_filter_private_t * VAR_9, int VAR_10 )
{



    uint8_t * VAR_11 = VAR_9->eedi_half[VAR_4]->plane[VAR_10].data;
    uint8_t * VAR_12 = VAR_9->eedi_half[VAR_5]->plane[VAR_10].data;
    uint8_t * VAR_13 = VAR_9->eedi_half[VAR_8]->plane[VAR_10].data;
    uint8_t * VAR_14 = VAR_9->eedi_half[VAR_2]->plane[VAR_10].data;
    uint8_t * VAR_15 = VAR_9->eedi_full[VAR_1]->plane[VAR_10].data;
    uint8_t * VAR_16 = VAR_9->eedi_full[VAR_7]->plane[VAR_10].data;
    uint8_t * VAR_17 = VAR_9->eedi_full[VAR_3]->plane[VAR_10].data;
    uint8_t * VAR_18 = VAR_9->eedi_full[VAR_6]->plane[VAR_10].data;
    uint8_t * VAR_19 = VAR_9->eedi_full[VAR_0]->plane[VAR_10].data;
    int * VAR_20 = VAR_9->cx2;
    int * VAR_21 = VAR_9->cy2;
    int * VAR_22 = VAR_9->cxy;
    int * VAR_23 = VAR_9->tmpc;

    int VAR_24 = VAR_9->eedi_full[0]->plane[VAR_10].stride;
    int VAR_25 = VAR_9->eedi_full[0]->plane[VAR_10].height;
    int VAR_26 = VAR_9->eedi_full[0]->plane[VAR_10].width;
    int VAR_27 = VAR_9->eedi_half[0]->plane[VAR_10].height;


    FUNC_1( VAR_11, VAR_24, VAR_12, VAR_24,
                     VAR_9->magnitude_threshold, VAR_9->variance_threshold, VAR_9->laplacian_threshold,
                     VAR_27, VAR_26 );
    FUNC_5( VAR_11, VAR_24, VAR_13, VAR_24, VAR_9->erosion_threshold, VAR_27, VAR_26 );
    FUNC_4( VAR_13, VAR_24, VAR_11, VAR_24, VAR_9->dilation_threshold, VAR_27, VAR_26 );
    FUNC_5( VAR_11, VAR_24, VAR_13, VAR_24, VAR_9->erosion_threshold, VAR_27, VAR_26 );
    FUNC_18( VAR_13, VAR_24, VAR_11, VAR_24, VAR_27, VAR_26 );


    FUNC_3( VAR_10, VAR_11, VAR_24, VAR_12, VAR_24, VAR_13, VAR_24,
                     VAR_9->maximum_search_distance, VAR_9->noise_threshold,
                     VAR_27, VAR_26 );
    FUNC_9( VAR_11, VAR_24, VAR_13, VAR_24, VAR_14, VAR_24, VAR_27, VAR_26 );
    FUNC_6( VAR_11, VAR_24, VAR_14, VAR_24, VAR_13, VAR_24, VAR_27, VAR_26 );
    FUNC_11( VAR_11, VAR_24, VAR_13, VAR_24, VAR_14, VAR_24, VAR_27, VAR_26 );


    FUNC_19( VAR_12, VAR_15, VAR_27, VAR_24 );
    FUNC_19( VAR_14, VAR_16, VAR_27, VAR_24 );
    FUNC_19( VAR_11, VAR_17, VAR_27, VAR_24 );


    FUNC_15( VAR_17, VAR_24, VAR_16, VAR_24, VAR_18, VAR_24, VAR_9->tff, VAR_25, VAR_26 );
    FUNC_10( VAR_17, VAR_24, VAR_18, VAR_24, VAR_19, VAR_24, VAR_9->tff, VAR_25, VAR_26 );
    FUNC_7( VAR_17, VAR_24, VAR_19, VAR_24, VAR_18, VAR_24, VAR_9->tff, VAR_25, VAR_26 );
    FUNC_8( VAR_17, VAR_24, VAR_18, VAR_24, VAR_19, VAR_24, VAR_9->tff, VAR_25, VAR_26 );
    FUNC_8( VAR_17, VAR_24, VAR_19, VAR_24, VAR_18, VAR_24, VAR_9->tff, VAR_25, VAR_26 );


    FUNC_14( VAR_10, VAR_18, VAR_24, VAR_15, VAR_24, VAR_16, VAR_24, VAR_9->tff,
                         VAR_9->noise_threshold, VAR_25, VAR_26 );

    if( VAR_9->post_processing == 1 || VAR_9->post_processing == 3 )
    {

        FUNC_0( VAR_16, VAR_24, VAR_18, VAR_24, VAR_26, VAR_25 );
        FUNC_10( VAR_17, VAR_24, VAR_18, VAR_24, VAR_19, VAR_24, VAR_9->tff, VAR_25, VAR_26 );
        FUNC_7( VAR_17, VAR_24, VAR_19, VAR_24, VAR_18, VAR_24, VAR_9->tff, VAR_25, VAR_26 );
        FUNC_16( VAR_18, VAR_24, VAR_16, VAR_24, VAR_15, VAR_24, VAR_9->tff, VAR_25, VAR_26 );
    }
    if( VAR_9->post_processing == 2 || VAR_9->post_processing == 3 )
    {

        FUNC_12( VAR_12, VAR_24, VAR_13, VAR_24, VAR_12, VAR_24, VAR_27, VAR_26 );
        FUNC_2( VAR_12, VAR_24, VAR_27, VAR_26, VAR_20, VAR_21, VAR_22 );
        FUNC_13( VAR_20, VAR_23, VAR_20, VAR_24, VAR_27, VAR_26);
        FUNC_13( VAR_21, VAR_23, VAR_21, VAR_24, VAR_27, VAR_26);
        FUNC_13( VAR_22, VAR_23, VAR_22, VAR_24, VAR_27, VAR_26);
        FUNC_17( VAR_20, VAR_21, VAR_22, VAR_24, VAR_16, VAR_24, VAR_15, VAR_24, VAR_25, VAR_26, VAR_9->tff );
    }
}
