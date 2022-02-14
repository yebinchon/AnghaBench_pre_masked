
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int height; void* coded_height; int width; void* coded_width; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int texdsp; } ;
typedef TYPE_1__ DXVContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1)
{
    DXVContext *VAR_2 = VAR_1->priv_data;
    int VAR_3 = FUNC_1(VAR_1->width, VAR_1->height, 0, VAR_1);

    if (VAR_3 < 0) {
        FUNC_2(VAR_1, VAR_0, "Invalid image size %dx%d.\n",
               VAR_1->width, VAR_1->height);
        return VAR_3;
    }


    VAR_1->coded_width = FUNC_0(VAR_1->width, 16);
    VAR_1->coded_height = FUNC_0(VAR_1->height, 16);

    FUNC_3(&VAR_2->texdsp);

    return 0;
}
