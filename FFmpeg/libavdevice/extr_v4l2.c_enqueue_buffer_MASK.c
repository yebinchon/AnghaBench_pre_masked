
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int buffers_queued; int fd; } ;
struct v4l2_buffer {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_5(struct video_data *VAR_3, struct v4l2_buffer *VAR_4)
{
    int VAR_5 = 0;

    if (FUNC_4(VAR_3->fd, VAR_1, VAR_4) < 0) {
        VAR_5 = FUNC_0(VAR_2);
        FUNC_3(((void*)0), VAR_0, "ioctl(VIDIOC_QBUF): %s\n", FUNC_2(VAR_5));
    } else {
        FUNC_1(&VAR_3->buffers_queued, 1);
    }

    return VAR_5;
}
