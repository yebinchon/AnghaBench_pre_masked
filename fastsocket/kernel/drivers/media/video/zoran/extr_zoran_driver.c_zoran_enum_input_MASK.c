
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zoran_fh {struct zoran* zr; } ;
struct TYPE_4__ {int inputs; TYPE_1__* input; } ;
struct zoran {int resource_lock; TYPE_2__ card; } ;
struct v4l2_input {int index; int status; int std; int type; int name; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zoran*,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (struct v4l2_input*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
     struct v4l2_input *VAR_7)
{
 struct zoran_fh *VAR_8 = VAR_6;
 struct zoran *VAR_9 = VAR_8->zr;

 if (VAR_7->index < 0 || VAR_7->index >= VAR_9->card.inputs)
  return -VAR_0;
 else {
  int VAR_10 = VAR_7->index;
  FUNC_1(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->index = VAR_10;
 }

 FUNC_4(VAR_7->name, VAR_9->card.input[VAR_7->index].name,
  sizeof(VAR_7->name) - 1);
 VAR_7->type = VAR_1;
 VAR_7->std = VAR_2;


 FUNC_2(&VAR_9->resource_lock);
 FUNC_0(VAR_9, VAR_4, VAR_3, &VAR_7->status);
 FUNC_3(&VAR_9->resource_lock);
 return 0;
}
