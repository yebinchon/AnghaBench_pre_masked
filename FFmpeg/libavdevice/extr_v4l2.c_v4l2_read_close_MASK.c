
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct video_data {scalar_t__ buffers; int fd; int buffers_queued; } ;
struct TYPE_4__ {struct video_data* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (struct video_data*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1)
{
    struct video_data *VAR_2 = VAR_1->priv_data;

    if (FUNC_0(&VAR_2->buffers_queued) != VAR_2->buffers)
        FUNC_1(VAR_1, VAR_0, "Some buffers are still owned by the caller on "
               "close.\n");

    FUNC_2(VAR_2);

    FUNC_3(VAR_2->fd);
    return 0;
}
