
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct go7007_file {struct go7007* go; } ;
struct go7007 {unsigned int input; TYPE_2__* board_info; int i2c_adapter; scalar_t__ i2c_adapter_online; scalar_t__ streaming; } ;
struct file {int dummy; } ;
struct TYPE_4__ {unsigned int num_inputs; TYPE_1__* inputs; } ;
struct TYPE_3__ {int audio_input; int video_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct go7007 *VAR_7 = ((struct go7007_file *) VAR_5)->go;

 if (VAR_6 >= VAR_7->board_info->num_inputs)
  return -VAR_1;
 if (VAR_7->streaming)
  return -VAR_0;

 VAR_7->input = VAR_6;
 if (VAR_7->i2c_adapter_online) {
  FUNC_0(&VAR_7->i2c_adapter, VAR_3,
   &VAR_7->board_info->inputs[VAR_6].video_input);
  FUNC_0(&VAR_7->i2c_adapter, VAR_2,
   &VAR_7->board_info->inputs[VAR_6].audio_input);
 }

 return 0;
}
