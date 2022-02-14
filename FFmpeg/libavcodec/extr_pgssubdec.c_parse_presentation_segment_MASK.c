
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_13__ {int err_recognition; int width; int height; TYPE_3__* priv_data; } ;
struct TYPE_11__ {int palette_id; int object_count; TYPE_1__* objects; void* id_number; int pts; } ;
struct TYPE_12__ {TYPE_2__ presentation; } ;
struct TYPE_10__ {int window_id; int composition_flag; int x; int y; void* crop_h; void* crop_w; void* crop_y; void* crop_x; void* id; } ;
typedef TYPE_3__ PGSSubContext ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 void* FUNC_1 (int const**) ;
 int FUNC_2 (int const**) ;
 int FUNC_3 (TYPE_4__*,char*,int,int) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_4,
                                      const uint8_t *VAR_5, int VAR_6,
                                      int64_t VAR_7)
{
    PGSSubContext *VAR_8 = VAR_4->priv_data;
    int VAR_9, VAR_10, VAR_11;
    const uint8_t *VAR_12 = VAR_5 + VAR_6;


    int VAR_13 = FUNC_1(&VAR_5);
    int VAR_14 = FUNC_1(&VAR_5);

    VAR_8->presentation.pts = VAR_7;

    FUNC_3(VAR_4, "Video Dimensions %dx%d\n",
            VAR_13, VAR_14);
    VAR_11 = FUNC_4(VAR_4, VAR_13, VAR_14);
    if (VAR_11 < 0)
        return VAR_11;


    VAR_5++;


    VAR_8->presentation.id_number = FUNC_1(&VAR_5);
    VAR_10 = FUNC_2(&VAR_5) >> 6;
    if (VAR_10 != 0) {
        FUNC_5(VAR_4);
    }




    VAR_5 += 1;
    VAR_8->presentation.palette_id = FUNC_2(&VAR_5);
    VAR_8->presentation.object_count = FUNC_2(&VAR_5);
    if (VAR_8->presentation.object_count > VAR_3) {
        FUNC_0(VAR_4, VAR_2,
               "Invalid number of presentation objects %d\n",
               VAR_8->presentation.object_count);
        VAR_8->presentation.object_count = 2;
        if (VAR_4->err_recognition & VAR_1) {
            return VAR_0;
        }
    }


    for (VAR_9 = 0; VAR_9 < VAR_8->presentation.object_count; VAR_9++)
    {

        if (VAR_12 - VAR_5 < 8) {
            FUNC_0(VAR_4, VAR_2, "Insufficent space for object\n");
            VAR_8->presentation.object_count = VAR_9;
            return VAR_0;
        }

        VAR_8->presentation.objects[VAR_9].id = FUNC_1(&VAR_5);
        VAR_8->presentation.objects[VAR_9].window_id = FUNC_2(&VAR_5);
        VAR_8->presentation.objects[VAR_9].composition_flag = FUNC_2(&VAR_5);

        VAR_8->presentation.objects[VAR_9].x = FUNC_1(&VAR_5);
        VAR_8->presentation.objects[VAR_9].y = FUNC_1(&VAR_5);


        if (VAR_8->presentation.objects[VAR_9].composition_flag & 0x80) {
            VAR_8->presentation.objects[VAR_9].crop_x = FUNC_1(&VAR_5);
            VAR_8->presentation.objects[VAR_9].crop_y = FUNC_1(&VAR_5);
            VAR_8->presentation.objects[VAR_9].crop_w = FUNC_1(&VAR_5);
            VAR_8->presentation.objects[VAR_9].crop_h = FUNC_1(&VAR_5);
        }

        FUNC_3(VAR_4, "Subtitle Placement x=%d, y=%d\n",
                VAR_8->presentation.objects[VAR_9].x, VAR_8->presentation.objects[VAR_9].y);

        if (VAR_8->presentation.objects[VAR_9].x > VAR_4->width ||
            VAR_8->presentation.objects[VAR_9].y > VAR_4->height) {
            FUNC_0(VAR_4, VAR_2, "Subtitle out of video bounds. x = %d, y = %d, video width = %d, video height = %d.\n",
                   VAR_8->presentation.objects[VAR_9].x,
                   VAR_8->presentation.objects[VAR_9].y,
                    VAR_4->width, VAR_4->height);
            VAR_8->presentation.objects[VAR_9].x = 0;
            VAR_8->presentation.objects[VAR_9].y = 0;
            if (VAR_4->err_recognition & VAR_1) {
                return VAR_0;
            }
        }
    }

    return 0;
}
