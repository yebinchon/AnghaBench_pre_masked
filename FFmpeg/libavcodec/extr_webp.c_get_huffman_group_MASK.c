
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* image; } ;
typedef TYPE_1__ WebPContext ;
struct TYPE_6__ {int size_reduction; int * huffman_groups; int frame; } ;
typedef TYPE_2__ ImageContext ;
typedef int HuffReader ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static HuffReader *FUNC_1(WebPContext *VAR_2, ImageContext *VAR_3,
                                     int VAR_4, int VAR_5)
{
    ImageContext *VAR_6 = &VAR_2->image[VAR_1];
    int VAR_7 = 0;

    if (VAR_6->size_reduction > 0) {
        int VAR_8 = VAR_4 >> VAR_6->size_reduction;
        int VAR_9 = VAR_5 >> VAR_6->size_reduction;
        int VAR_10 = FUNC_0(VAR_6->frame, VAR_8, VAR_9, 1);
        int VAR_11 = FUNC_0(VAR_6->frame, VAR_8, VAR_9, 2);
        VAR_7 = VAR_10 << 8 | VAR_11;
    }

    return &VAR_3->huffman_groups[VAR_7 * VAR_0];
}
