
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VC_RECT_T ;
typedef int VC_IMAGE_TYPE_T ;
struct TYPE_6__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_1__ VC_DISPMANX_ALPHA_T ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_7__ {int image; int resource; int update; int display; int element; TYPE_4__ info; int vc_image_ptr; } ;
typedef TYPE_2__ RECT_VARS_T ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int,int,int,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 TYPE_2__ VAR_7 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int ,int,int *,int,int *,int ,TYPE_1__*,int *,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int,int,int,int) ;
 int FUNC_13 (int ,int,int,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int ,int,int,int *) ;
 void* FUNC_16 (int) ;
 int FUNC_17 (int) ;

int FUNC_18(void)
{
    RECT_VARS_T *VAR_8;
    uint32_t VAR_9 = 0;
    int VAR_10;
    VC_RECT_T VAR_11;
    VC_RECT_T VAR_12;
    VC_IMAGE_TYPE_T VAR_13 = VAR_4;
    int VAR_14 = VAR_6, VAR_15 = VAR_3;
    int VAR_16 = FUNC_0(VAR_14*2, 32);
    int VAR_17 = FUNC_0(VAR_15, 16);
    VC_DISPMANX_ALPHA_T VAR_18 = { VAR_1 | VAR_0,
                             120,
                             0 };

    VAR_8 = &VAR_7;

    FUNC_3();

    FUNC_5("Open display[%i]...\n", VAR_9 );
    VAR_8->display = FUNC_9( VAR_9 );

    VAR_10 = FUNC_8( VAR_8->display, &VAR_8->info);
    FUNC_2(VAR_10 == 0);
    FUNC_5( "Display is %d x %d\n", VAR_8->info.width, VAR_8->info.height );

    VAR_8->image = FUNC_4( 1, VAR_16 * VAR_15 );
    FUNC_2(VAR_8->image);

    FUNC_1( VAR_13, VAR_8->image, VAR_16, VAR_17, 0, 0, VAR_14, VAR_15, 0xFFFF );
    FUNC_1( VAR_13, VAR_8->image, VAR_16, VAR_17, 0, 0, VAR_14, VAR_15, 0xF800 );
    FUNC_1( VAR_13, VAR_8->image, VAR_16, VAR_17, 20, 20, VAR_14 - 40, VAR_15 - 40, 0x07E0 );
    FUNC_1( VAR_13, VAR_8->image, VAR_16, VAR_17, 40, 40, VAR_14 - 80, VAR_15 - 80, 0x001F );

    VAR_8->resource = FUNC_13( VAR_13,
                                                  VAR_14,
                                                  VAR_15,
                                                  &VAR_8->vc_image_ptr );
    FUNC_2( VAR_8->resource );
    FUNC_12( &VAR_12, 0, 0, VAR_14, VAR_15);
    VAR_10 = FUNC_15( VAR_8->resource,
                                            VAR_13,
                                            VAR_16,
                                            VAR_8->image,
                                            &VAR_12 );
    FUNC_2( VAR_10 == 0 );
    VAR_8->update = FUNC_16( 10 );
    FUNC_2( VAR_8->update );

    FUNC_12( &VAR_11, 0, 0, VAR_14 << 16, VAR_15 << 16 );

    FUNC_12( &VAR_12, ( VAR_8->info.width - VAR_14 ) / 2,
                                     ( VAR_8->info.height - VAR_15 ) / 2,
                                     VAR_14,
                                     VAR_15 );

    VAR_8->element = FUNC_10( VAR_8->update,
                                                VAR_8->display,
                                                2000,
                                                &VAR_12,
                                                VAR_8->resource,
                                                &VAR_11,
                                                VAR_2,
                                                &VAR_18,
                                                ((void*)0),
                                                VAR_5 );

    VAR_10 = FUNC_17( VAR_8->update );
    FUNC_2( VAR_10 == 0 );

    FUNC_5( "Sleeping for 10 seconds...\n" );
    FUNC_6( 10 );

    VAR_8->update = FUNC_16( 10 );
    FUNC_2( VAR_8->update );
    VAR_10 = FUNC_11( VAR_8->update, VAR_8->element );
    FUNC_2( VAR_10 == 0 );
    VAR_10 = FUNC_17( VAR_8->update );
    FUNC_2( VAR_10 == 0 );
    VAR_10 = FUNC_14( VAR_8->resource );
    FUNC_2( VAR_10 == 0 );
    VAR_10 = FUNC_7( VAR_8->display );
    FUNC_2( VAR_10 == 0 );

    return 0;
}
