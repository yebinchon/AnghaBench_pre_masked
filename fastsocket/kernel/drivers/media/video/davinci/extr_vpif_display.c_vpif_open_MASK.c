
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {int initialized; int prio; scalar_t__* io_allowed; struct channel_obj* channel; } ;
struct video_device {int dummy; } ;
struct file {struct vpif_fh* private_data; } ;
struct channel_obj {int initialized; int prio; int usrs; int vpifparams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 struct vpif_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *) ;
 struct video_device* FUNC_4 (struct file*) ;
 struct channel_obj* FUNC_5 (struct video_device*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4)
{
 struct video_device *VAR_5 = FUNC_4(VAR_4);
 struct channel_obj *VAR_6 = ((void*)0);
 struct vpif_fh *VAR_7 = ((void*)0);

 VAR_6 = FUNC_5(VAR_5);

 VAR_7 = FUNC_1(sizeof(struct vpif_fh), VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_6("unable to allocate memory for file handle object\n");
  return -VAR_0;
 }


 VAR_4->private_data = VAR_7;
 VAR_7->channel = VAR_6;
 VAR_7->initialized = 0;
 if (!VAR_6->initialized) {
  VAR_7->initialized = 1;
  VAR_6->initialized = 1;
  FUNC_2(&VAR_6->vpifparams, 0, sizeof(VAR_6->vpifparams));
 }


 FUNC_0(&VAR_6->usrs);

 VAR_7->io_allowed[VAR_3] = 0;

 VAR_7->prio = VAR_2;
 FUNC_3(&VAR_6->prio, &VAR_7->prio);

 return 0;
}
