
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_11__ {int width; int height; scalar_t__ mv_ptr; scalar_t__ tree; scalar_t__ ypos; scalar_t__ xpos; } ;
struct TYPE_10__ {unsigned int num_vectors; int const* last_byte; scalar_t__ need_resync; scalar_t__ skip_bits; int gb; int const* mc_vectors; int avctx; } ;
struct TYPE_9__ {int width; int height; } ;
typedef TYPE_1__ Plane ;
typedef TYPE_2__ Indeo3DecodeContext ;
typedef TYPE_3__ Cell ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int const**) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (TYPE_2__*,int *,TYPE_1__*,int ,TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_4(Indeo3DecodeContext *VAR_4, AVCodecContext *VAR_5,
                        Plane *VAR_6, const uint8_t *VAR_7, int32_t VAR_8,
                        int32_t VAR_9)
{
    Cell VAR_10;
    unsigned VAR_11;



    VAR_11 = FUNC_1(&VAR_7); VAR_8 -= 4;
    if (VAR_11 > 256) {
        FUNC_0(VAR_4->avctx, VAR_1,
               "Read invalid number of motion vectors %d\n", VAR_11);
        return VAR_0;
    }
    if (VAR_11 * 2 > VAR_8)
        return VAR_0;

    VAR_4->num_vectors = VAR_11;
    VAR_4->mc_vectors = VAR_11 ? VAR_7 : 0;


    FUNC_2(&VAR_4->gb, &VAR_7[VAR_11 * 2], (VAR_8 - VAR_11 * 2) << 3);
    VAR_4->skip_bits = 0;
    VAR_4->need_resync = 0;

    VAR_4->last_byte = VAR_7 + VAR_8;


    VAR_10.xpos = VAR_10.ypos = 0;
    VAR_10.width = VAR_6->width >> 2;
    VAR_10.height = VAR_6->height >> 2;
    VAR_10.tree = 0;
    VAR_10.mv_ptr = 0;

    return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_3, &VAR_10, VAR_2, VAR_9);
}
