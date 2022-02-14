
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uiGeo ;
struct TYPE_19__ {int par; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_17__ {int video_decode_support; int metadata; int list_attachment; int color_range; int color_matrix; int color_transfer; int color_prim; int vrate; int crop; TYPE_6__ geometry; int list_chapter; } ;
typedef TYPE_4__ hb_title_t ;
struct TYPE_15__ {scalar_t__ is_init_done; } ;
struct TYPE_16__ {int decode; int async_depth; TYPE_2__ enc_info; } ;
struct TYPE_18__ {int chapter_start; int vbitrate; TYPE_3__ qsv; int metadata; int list_attachment; void* list_filter; void* list_subtitle; void* list_audio; int mux; int color_matrix_override; int color_transfer_override; int color_prim_override; int color_range; int color_matrix; int color_transfer; int color_prim; int pix_fmt; int vrate; int pass_id; scalar_t__ twopass; int vquality; int vcodec; int par; scalar_t__ height; scalar_t__ width; scalar_t__* crop; int list_chapter; int chapter_end; TYPE_4__* title; } ;
typedef TYPE_5__ hb_job_t ;
typedef TYPE_6__ hb_geometry_t ;
struct TYPE_14__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_20__ {int keep; int mode; scalar_t__* crop; TYPE_1__ geometry; } ;
typedef TYPE_7__ hb_geometry_settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_7__*,TYPE_6__*) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;

__attribute__((used)) static void FUNC_8(hb_job_t * VAR_12, hb_title_t * VAR_13)
{
    if ( VAR_12 == ((void*)0) || VAR_13 == ((void*)0) )
        return;

    VAR_12->title = VAR_13;


    VAR_12->chapter_start = 1;
    VAR_12->chapter_end = FUNC_2( VAR_13->list_chapter );
    VAR_12->list_chapter = FUNC_1( VAR_13->list_chapter );


    FUNC_6( VAR_12->crop, VAR_13->crop, 4 * sizeof( int ) );


    hb_geometry_t VAR_14, VAR_15;
    hb_geometry_settings_t VAR_16;

    VAR_15 = VAR_13->geometry;

    FUNC_7(&VAR_16, 0, sizeof(VAR_16));
    FUNC_6(VAR_16.crop, VAR_13->crop, 4 * sizeof( int ));
    VAR_16.geometry.width = VAR_15.width - VAR_16.crop[2] - VAR_16.crop[3];
    VAR_16.geometry.height = VAR_15.height - VAR_16.crop[0] - VAR_16.crop[1];
    VAR_16.mode = VAR_1;
    VAR_16.keep = VAR_7;

    FUNC_5(&VAR_15, &VAR_16, &VAR_14);
    VAR_12->width = VAR_14.width;
    VAR_12->height = VAR_14.height;
    VAR_12->par = VAR_14.par;

    VAR_12->vcodec = VAR_11;
    VAR_12->vquality = VAR_6;
    VAR_12->vbitrate = 1000;
    VAR_12->twopass = 0;
    VAR_12->pass_id = VAR_9;
    VAR_12->vrate = VAR_13->vrate;

    VAR_12->pix_fmt = VAR_0;
    VAR_12->color_prim = VAR_13->color_prim;
    VAR_12->color_transfer = VAR_13->color_transfer;
    VAR_12->color_matrix = VAR_13->color_matrix;
    VAR_12->color_range = VAR_13->color_range;
    VAR_12->color_prim_override = VAR_3;
    VAR_12->color_transfer_override = VAR_4;
    VAR_12->color_matrix_override = VAR_2;

    VAR_12->mux = VAR_8;

    VAR_12->list_audio = FUNC_3();
    VAR_12->list_subtitle = FUNC_3();
    VAR_12->list_filter = FUNC_3();

    VAR_12->list_attachment = FUNC_0( VAR_13->list_attachment );
    VAR_12->metadata = FUNC_4( VAR_13->metadata );







}
