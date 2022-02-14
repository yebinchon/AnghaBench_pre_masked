
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_channel_settings {int dummy; } ;
struct v4l2_input {int status; int name; int std; int type; int index; } ;
struct file {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int name; int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct v4l2_input*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 struct vino_channel_settings* FUNC_4 (struct file*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (struct vino_channel_settings*,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_8, void *VAR_9,
          struct v4l2_input *VAR_10)
{
 struct vino_channel_settings *VAR_11 = FUNC_4(VAR_8);
 __u32 VAR_12 = VAR_10->index;
 int VAR_13;
 FUNC_1("requested index = %d\n", VAR_12);

 VAR_13 = FUNC_5(VAR_11, VAR_12);
 if (VAR_13 == VAR_3)
  return -VAR_0;

 FUNC_2(VAR_10, 0, sizeof(struct v4l2_input));

 VAR_10->index = VAR_12;
 VAR_10->type = VAR_1;
 VAR_10->std = VAR_7[VAR_13].std;
 FUNC_3(VAR_10->name, VAR_7[VAR_13].name);

 if (VAR_13 == VAR_2 || VAR_13 == VAR_4)
  FUNC_0(VAR_6, VAR_5, &VAR_10->status);
 return 0;
}
