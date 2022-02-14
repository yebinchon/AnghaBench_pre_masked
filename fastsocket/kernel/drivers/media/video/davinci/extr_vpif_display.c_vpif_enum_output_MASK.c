
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_display_config {size_t output_count; int * output; } ;
struct v4l2_output {size_t index; int std; int type; int name; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct vpif_display_config* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,char*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
    struct v4l2_output *VAR_7)
{

 struct vpif_display_config *VAR_8 = VAR_4->platform_data;

 if (VAR_7->index >= VAR_8->output_count) {
  FUNC_1(1, VAR_3, "Invalid output index\n");
  return -VAR_1;
 }

 FUNC_0(VAR_7->name, VAR_8->output[VAR_7->index]);
 VAR_7->type = VAR_2;
 VAR_7->std = VAR_0;

 return 0;
}
