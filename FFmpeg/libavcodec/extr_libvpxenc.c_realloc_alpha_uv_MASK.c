
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpx_image {unsigned char** planes; int* stride; scalar_t__ d_h; scalar_t__ d_w; } ;
struct TYPE_4__ {struct vpx_image rawimg_alpha; } ;
typedef TYPE_1__ VPxContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (unsigned char**) ;
 unsigned char* FUNC_2 (int,int) ;
 int FUNC_3 (unsigned char*,int,int) ;
 int FUNC_4 (struct vpx_image*,int ,int,int,int,unsigned char*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_4, int VAR_5, int VAR_6)
{
    VPxContext *VAR_7 = VAR_4->priv_data;
    struct vpx_image *VAR_8 = &VAR_7->rawimg_alpha;
    unsigned char **VAR_9 = VAR_8->planes;
    int *VAR_10 = VAR_8->stride;

    if (!VAR_9[VAR_2] ||
        !VAR_9[VAR_3] ||
        VAR_5 != (int)VAR_8->d_w ||
        VAR_6 != (int)VAR_8->d_h) {
        FUNC_1(&VAR_9[VAR_2]);
        FUNC_1(&VAR_9[VAR_3]);

        FUNC_4(VAR_8, VAR_1, VAR_5, VAR_6, 1,
                     (unsigned char*)1);
        VAR_9[VAR_2] = FUNC_2(VAR_10[VAR_2], VAR_6);
        VAR_9[VAR_3] = FUNC_2(VAR_10[VAR_3], VAR_6);
        if (!VAR_9[VAR_2] || !VAR_9[VAR_3])
            return FUNC_0(VAR_0);

        FUNC_3(VAR_9[VAR_2], 0x80, VAR_10[VAR_2] * VAR_6);
        FUNC_3(VAR_9[VAR_3], 0x80, VAR_10[VAR_3] * VAR_6);
    }

    return 0;
}
