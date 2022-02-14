
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct SwsContext {int dummy; } ;
typedef int Uint32 ;
struct TYPE_3__ {int* data; int* linesize; int height; int width; int format; } ;
typedef int SDL_Texture ;
typedef int SDL_BlendMode ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,void**,int*) ;
 int VAR_3 ;


 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int) ;
 int FUNC_4 (int *,int *,int,int,int,int,int,int) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int ,int*,int *) ;
 scalar_t__ FUNC_7 (int **,int,int ,int ,int ,int ) ;
 int VAR_4 ;
 struct SwsContext* FUNC_8 (struct SwsContext*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_9 (struct SwsContext*,int const* const*,int*,int ,int ,int **,int*) ;

__attribute__((used)) static int FUNC_10(SDL_Texture **VAR_5, AVFrame *VAR_6, struct SwsContext **VAR_7) {
    int VAR_8 = 0;
    Uint32 VAR_9;
    SDL_BlendMode VAR_10;
    FUNC_6(VAR_6->format, &VAR_9, &VAR_10);
    if (FUNC_7(VAR_5, VAR_9 == 128 ? VAR_3 : VAR_9, VAR_6->width, VAR_6->height, VAR_10, 0) < 0)
        return -1;
    switch (VAR_9) {
        case 128:

            *VAR_7 = FUNC_8(*VAR_7,
                VAR_6->width, VAR_6->height, VAR_6->format, VAR_6->width, VAR_6->height,
                VAR_2, VAR_4, ((void*)0), ((void*)0), ((void*)0));
            if (*VAR_7 != ((void*)0)) {
                uint8_t *VAR_11[4];
                int VAR_12[4];
                if (!FUNC_1(*VAR_5, ((void*)0), (void **)VAR_11, VAR_12)) {
                    FUNC_9(*VAR_7, (const uint8_t * const *)VAR_6->data, VAR_6->linesize,
                              0, VAR_6->height, VAR_11, VAR_12);
                    FUNC_2(*VAR_5);
                }
            } else {
                FUNC_5(((void*)0), VAR_1, "Cannot initialize the conversion context\n");
                VAR_8 = -1;
            }
            break;
        case 129:
            if (VAR_6->linesize[0] > 0 && VAR_6->linesize[1] > 0 && VAR_6->linesize[2] > 0) {
                VAR_8 = FUNC_4(*VAR_5, ((void*)0), VAR_6->data[0], VAR_6->linesize[0],
                                                       VAR_6->data[1], VAR_6->linesize[1],
                                                       VAR_6->data[2], VAR_6->linesize[2]);
            } else if (VAR_6->linesize[0] < 0 && VAR_6->linesize[1] < 0 && VAR_6->linesize[2] < 0) {
                VAR_8 = FUNC_4(*VAR_5, ((void*)0), VAR_6->data[0] + VAR_6->linesize[0] * (VAR_6->height - 1), -VAR_6->linesize[0],
                                                       VAR_6->data[1] + VAR_6->linesize[1] * (FUNC_0(VAR_6->height, 1) - 1), -VAR_6->linesize[1],
                                                       VAR_6->data[2] + VAR_6->linesize[2] * (FUNC_0(VAR_6->height, 1) - 1), -VAR_6->linesize[2]);
            } else {
                FUNC_5(((void*)0), VAR_0, "Mixed negative and positive linesizes are not supported.\n");
                return -1;
            }
            break;
        default:
            if (VAR_6->linesize[0] < 0) {
                VAR_8 = FUNC_3(*VAR_5, ((void*)0), VAR_6->data[0] + VAR_6->linesize[0] * (VAR_6->height - 1), -VAR_6->linesize[0]);
            } else {
                VAR_8 = FUNC_3(*VAR_5, ((void*)0), VAR_6->data[0], VAR_6->linesize[0]);
            }
            break;
    }
    return VAR_8;
}
