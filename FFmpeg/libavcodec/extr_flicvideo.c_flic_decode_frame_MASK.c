
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ pix_fmt; } ;
struct TYPE_9__ {int size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,void*,int*,int const*,int) ;
 int FUNC_2 (TYPE_2__*,void*,int*,int const*,int) ;
 int FUNC_3 (TYPE_2__*,void*,int*,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_6,
                             void *VAR_7, int *VAR_8,
                             AVPacket *VAR_9)
{
    const uint8_t *VAR_10 = VAR_9->data;
    int VAR_11 = VAR_9->size;
    if (VAR_6->pix_fmt == VAR_3) {
        return FUNC_3(VAR_6, VAR_7, VAR_8,
                                      VAR_10, VAR_11);
    } else if ((VAR_6->pix_fmt == VAR_4) ||
               (VAR_6->pix_fmt == VAR_5)) {
        return FUNC_1(VAR_6, VAR_7, VAR_8,
                                          VAR_10, VAR_11);
    } else if (VAR_6->pix_fmt == VAR_2) {
        return FUNC_2(VAR_6, VAR_7, VAR_8,
                                       VAR_10, VAR_11);
    }





    FUNC_0(VAR_6, VAR_1, "Unknown FLC format, my science cannot explain how this happened.\n");
    return VAR_0;
}
