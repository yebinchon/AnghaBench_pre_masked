
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct video_data {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(const struct video_data *VAR_2)
{
    int VAR_3;
    v4l2_std_id VAR_4;

    VAR_3 = FUNC_0(VAR_2->fd, VAR_1, &VAR_4);
    if (VAR_3 < 0)
        return 0;
    if (VAR_4 & VAR_0)
        return 0;

    return 1;
}
