
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int buffers; int * buf_len; int * buf_start; int fd; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct video_data *VAR_2)
{
    enum v4l2_buf_type VAR_3;
    int VAR_4;

    VAR_3 = VAR_0;



    FUNC_1(VAR_2->fd, VAR_1, &VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_2->buffers; VAR_4++) {
        FUNC_2(VAR_2->buf_start[VAR_4], VAR_2->buf_len[VAR_4]);
    }
    FUNC_0(&VAR_2->buf_start);
    FUNC_0(&VAR_2->buf_len);
}
