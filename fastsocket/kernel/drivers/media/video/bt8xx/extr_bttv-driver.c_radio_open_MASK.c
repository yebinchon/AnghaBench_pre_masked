
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct file {struct bttv_fh* private_data; } ;
struct bttv_fh {int prio; } ;
struct TYPE_2__ {int nr; } ;
struct bttv {int radio_user; int prio; struct bttv_fh init; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bttv*,int ) ;
 int FUNC_1 (struct bttv*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 struct bttv_fh* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 struct video_device* FUNC_6 (struct file*) ;
 int FUNC_7 (struct video_device*) ;
 struct bttv* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_5)
{
 struct video_device *VAR_6 = FUNC_6(VAR_5);
 struct bttv *VAR_7 = FUNC_8(VAR_5);
 struct bttv_fh *VAR_8;

 FUNC_2("bttv: open dev=%s\n", FUNC_7(VAR_6));

 FUNC_2("bttv%d: open called (radio)\n",VAR_7->c.nr);


 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (FUNC_4(!VAR_8))
  return -VAR_0;
 VAR_5->private_data = VAR_8;
 *VAR_8 = VAR_7->init;

 FUNC_5(&VAR_7->prio, &VAR_8->prio);

 VAR_7->radio_user++;

 FUNC_1(VAR_7, VAR_4, VAR_3);
 FUNC_0(VAR_7,VAR_2);

 return 0;
}
