
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct video_data {int dummy; } ;
struct v4l2_buffer {int index; int memory; int type; int member_0; } ;
struct buff_data {int index; struct video_data* s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buff_data*) ;
 int FUNC_1 (struct video_data*,struct v4l2_buffer*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, uint8_t *VAR_3)
{
    struct v4l2_buffer VAR_4 = { 0 };
    struct buff_data *VAR_5 = VAR_2;
    struct video_data *VAR_6 = VAR_5->s;

    VAR_4.type = VAR_0;
    VAR_4.memory = VAR_1;
    VAR_4.index = VAR_5->index;
    FUNC_0(VAR_5);

    FUNC_1(VAR_6, &VAR_4);
}
