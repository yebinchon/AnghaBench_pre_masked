
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx2341x_handler {int is_50hz; TYPE_1__* video_gop_size; } ;
struct TYPE_2__ {int default_value; } ;



void FUNC_0(struct cx2341x_handler *VAR_0, int VAR_1)
{
 VAR_0->is_50hz = VAR_1;
 VAR_0->video_gop_size->default_value = VAR_0->is_50hz ? 12 : 15;
}
