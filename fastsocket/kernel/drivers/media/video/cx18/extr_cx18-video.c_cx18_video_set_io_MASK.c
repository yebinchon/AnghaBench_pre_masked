
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx18 {int active_input; TYPE_2__* card; int sd_av; } ;
struct TYPE_4__ {TYPE_1__* video_inputs; } ;
struct TYPE_3__ {int video_input; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

void FUNC_1(struct cx18 *VAR_2)
{
 int VAR_3 = VAR_2->active_input;

 FUNC_0(VAR_2->sd_av, VAR_1, VAR_0,
   VAR_2->card->video_inputs[VAR_3].video_input, 0, 0);
}
