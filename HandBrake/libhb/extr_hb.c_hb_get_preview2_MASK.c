
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct SwsContext {int dummy; } ;
struct TYPE_11__ {int width; int height; } ;
struct TYPE_12__ {TYPE_3__ geometry; int color_matrix; } ;
typedef TYPE_4__ hb_title_t ;
typedef int hb_image_t ;
typedef int hb_handle_t ;
struct TYPE_9__ {int num; int den; } ;
struct TYPE_10__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_13__ {scalar_t__* crop; TYPE_2__ geometry; } ;
typedef TYPE_5__ hb_geometry_settings_t ;
typedef int hb_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int) ;
 TYPE_4__* FUNC_6 (int *,int) ;
 int * FUNC_7 (int ,int,int) ;
 int * FUNC_8 (int ,int,int) ;
 int FUNC_9 (int **,int*,int *,scalar_t__,scalar_t__) ;
 int FUNC_10 (int **,int*,int *) ;
 int * FUNC_11 (int *,TYPE_4__*,int) ;
 int FUNC_12 (int ) ;
 struct SwsContext* FUNC_13 (scalar_t__,scalar_t__,int ,int,int,int ,int,int) ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (struct SwsContext*) ;
 int FUNC_16 (struct SwsContext*,int const* const*,int*,int ,scalar_t__,int **,int*) ;

hb_image_t* FUNC_17(hb_handle_t * VAR_8, int VAR_9, int VAR_10,
                            hb_geometry_settings_t *VAR_11, int VAR_12)
{
    char VAR_13[1024];
    hb_buffer_t * VAR_14 = ((void*)0), * VAR_15 = ((void*)0);
    hb_buffer_t * VAR_16 = ((void*)0);
    uint32_t VAR_17;
    uint8_t * VAR_18[4], * VAR_19[4];
    int VAR_20[4], VAR_21[4];
    struct SwsContext * VAR_22;

    int VAR_23 = VAR_11->geometry.width *
                VAR_11->geometry.par.num / VAR_11->geometry.par.den;
    int VAR_24 = VAR_11->geometry.height;





    int VAR_25 = VAR_23, VAR_26 = VAR_24;
    VAR_23 = FUNC_1(FUNC_0(VAR_23, VAR_5), VAR_3);
    VAR_24 = FUNC_1(FUNC_0(VAR_24 * VAR_23 / VAR_25, VAR_4), VAR_2);
    VAR_23 = FUNC_1(FUNC_0(VAR_23 * VAR_24 / VAR_26, VAR_5), VAR_3);

    VAR_17 = VAR_7 | VAR_6;

    VAR_16 = FUNC_7(VAR_0, VAR_23, VAR_24);

    FUNC_10( VAR_18, VAR_20, VAR_16 );


    FUNC_14( VAR_13, 0, 1024 );

    hb_title_t * VAR_27;
    VAR_27 = FUNC_6(VAR_8, VAR_9);
    if (VAR_27 == ((void*)0))
    {
        FUNC_5( "hb_get_preview2: invalid title (%d)", VAR_9 );
        goto fail;
    }

    VAR_14 = FUNC_11( VAR_8, VAR_27, VAR_10 );
    if ( VAR_14 == ((void*)0) )
    {
        goto fail;
    }

    if (VAR_12)
    {

        VAR_15 = FUNC_7( VAR_1,
                              VAR_27->geometry.width, VAR_27->geometry.height );
        FUNC_4(VAR_15, VAR_14);
        FUNC_9(VAR_19, VAR_21, VAR_15,
                        VAR_11->crop[0], VAR_11->crop[2] );
    }
    else
    {

        FUNC_9(VAR_19, VAR_21, VAR_14,
                        VAR_11->crop[0], VAR_11->crop[2] );
    }

    int VAR_28 = FUNC_12(VAR_27->color_matrix);


    VAR_22 = FUNC_13(
                VAR_27->geometry.width - (VAR_11->crop[2] + VAR_11->crop[3]),
                VAR_27->geometry.height - (VAR_11->crop[0] + VAR_11->crop[1]),
                VAR_1, VAR_23, VAR_24, VAR_0, VAR_17, VAR_28);

    if (VAR_22 == ((void*)0))
    {

        goto fail;
    }


    FUNC_16(VAR_22,
              (const uint8_t * const *)VAR_19, VAR_21,
              0, VAR_27->geometry.height - (VAR_11->crop[0] + VAR_11->crop[1]),
              VAR_18, VAR_20);


    FUNC_15( VAR_22 );

    hb_image_t *VAR_29 = FUNC_3(VAR_16);


    FUNC_2( &VAR_14 );
    FUNC_2( &VAR_15 );
    FUNC_2( &VAR_16 );

    return VAR_29;

fail:

    FUNC_2( &VAR_14 );
    FUNC_2( &VAR_15 );
    FUNC_2( &VAR_16 );

    VAR_29 = FUNC_8(VAR_0, VAR_23, VAR_24);
    return VAR_29;
}
