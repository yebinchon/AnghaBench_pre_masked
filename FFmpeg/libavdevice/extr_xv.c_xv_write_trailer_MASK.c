
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ display; scalar_t__ gc; TYPE_4__* yuv_image; int yuv_shminfo; } ;
typedef TYPE_1__ XVContext ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0)
{
    XVContext *VAR_1 = VAR_0->priv_data;
    if (VAR_1->display) {
        FUNC_3(VAR_1->display, &VAR_1->yuv_shminfo);
        if (VAR_1->yuv_image)
            FUNC_4(VAR_1->yuv_image->data);
        FUNC_1(VAR_1->yuv_image);
        if (VAR_1->gc)
            FUNC_2(VAR_1->display, VAR_1->gc);
        FUNC_0(VAR_1->display);
    }
    return 0;
}
