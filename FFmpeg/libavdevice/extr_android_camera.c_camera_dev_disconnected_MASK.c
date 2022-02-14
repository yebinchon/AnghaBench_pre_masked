
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int exit; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef TYPE_2__ AVFormatContext ;
typedef int ACameraDevice ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, ACameraDevice *VAR_2)
{
    AVFormatContext *VAR_3 = VAR_1;
    AndroidCameraCtx *VAR_4 = VAR_3->priv_data;
    FUNC_1(&VAR_4->exit, 1);
    FUNC_2(VAR_3, VAR_0, "Camera with id %s disconnected.\n",
           FUNC_0(VAR_2));
}
