
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {size_t index; scalar_t__ status; int std; scalar_t__ tuner; scalar_t__ audioset; int type; int name; } ;
struct front_face {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct front_face*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, struct v4l2_input *VAR_7)
{
 struct front_face *VAR_8 = VAR_6;

 if (VAR_7->index < 0 || VAR_7->index >= VAR_1)
  return -VAR_0;
 FUNC_1(VAR_7->name, VAR_4[VAR_7->index].name);
 VAR_7->type = VAR_2;





 VAR_7->audioset = 0;
 VAR_7->tuner = 0;
 VAR_7->std = VAR_3;
 VAR_7->status = 0;
 FUNC_0(VAR_8);
 return 0;
}
