
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_12__ {float full_width; float full_height; int x; int y; float width; float height; } ;
struct TYPE_10__ {float o_width; float o_height; TYPE_5__ vp; int keep_aspect; scalar_t__ o_size; } ;
typedef TYPE_3__ switch_video_t ;
struct TYPE_9__ {scalar_t__ video_aspect_ratio_idx; } ;
struct TYPE_8__ {scalar_t__ video_scale_integer; } ;
struct TYPE_11__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 float FUNC_1 (float) ;
 int FUNC_2 (char*,float) ;
 scalar_t__ FUNC_3 (float) ;
 float FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,float,float,float,int ) ;

__attribute__((used)) static void FUNC_6(switch_video_t *VAR_1,
            video_frame_info_t *VAR_2)
{
    settings_t *VAR_3 = FUNC_0();
    int VAR_4 = 0;
    int VAR_5 = 0;
    float VAR_6 = 0.0f;
    float VAR_7 = VAR_1->vp.full_width;
    float VAR_8 = VAR_1->vp.full_height;

    if (VAR_1->o_size)
    {
        VAR_7 = VAR_1->o_width;
        VAR_8 = VAR_1->o_height;
        VAR_1->vp.x = (int)(((float)VAR_1->vp.full_width - VAR_7)) / 2;
        VAR_1->vp.y = (int)(((float)VAR_1->vp.full_height - VAR_8)) / 2;

        VAR_1->vp.width = VAR_7;
        VAR_1->vp.height = VAR_8;

        return;
    }

    VAR_6 = FUNC_4();


    FUNC_2("[Video] Aspect: %f\n", VAR_6);






    if (VAR_3->bools.video_scale_integer)
    {
        FUNC_5(&VAR_1->vp, VAR_1->vp.full_width, VAR_1->vp.full_height, VAR_6, VAR_1->keep_aspect);
    }
    else if (VAR_1->keep_aspect)
    {
        {
            float VAR_9;
            float VAR_10 = ((float)VAR_1->vp.full_width) / VAR_1->vp.full_height;

            if (FUNC_1(VAR_10 - VAR_6) < 0.0001f)
            {





            }
            else if (VAR_10 > VAR_6)
            {
                VAR_9 = (VAR_6 / VAR_10 - 1.0f) / 2.0f + 0.5f;
                VAR_4 = (int)FUNC_3(VAR_7 * (0.5f - VAR_9));
                VAR_7 = (unsigned)FUNC_3(2.0f * VAR_7 * VAR_9);
            }
            else
            {
                VAR_9 = (VAR_10 / VAR_6 - 1.0f) / 2.0f + 0.5f;
                VAR_5 = (int)FUNC_3(VAR_8 * (0.5f - VAR_9));
                VAR_8 = (unsigned)FUNC_3(2.0f * VAR_8 * VAR_9);
            }
        }

        VAR_1->vp.x = VAR_4;
        VAR_1->vp.y = VAR_5;

        VAR_1->vp.width = VAR_7;
        VAR_1->vp.height = VAR_8;
    }
    else
    {
        VAR_1->vp.x = VAR_1->vp.y = 0;
        VAR_1->vp.width = VAR_7;
        VAR_1->vp.height = VAR_8;
    }
}
