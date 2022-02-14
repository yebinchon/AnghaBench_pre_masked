
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int name; int debug; int release; int * v4l2_dev; } ;
struct TYPE_3__ {size_t type; int v4l2_dev; } ;
struct bttv {int id; int revision; TYPE_1__ c; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,int,char*,int,char*,char const*,int ) ;
 struct video_device* FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct video_device*,struct bttv*) ;

__attribute__((used)) static struct video_device *FUNC_3(struct bttv *VAR_3,
          const struct video_device *VAR_4,
          const char *VAR_5)
{
 struct video_device *VAR_6;

 VAR_6 = FUNC_1();
 if (((void*)0) == VAR_6)
  return ((void*)0);
 *VAR_6 = *VAR_4;
 VAR_6->v4l2_dev = &VAR_3->c.v4l2_dev;
 VAR_6->release = VAR_2;
 VAR_6->debug = VAR_0;
 FUNC_2(VAR_6, VAR_3);
 FUNC_0(VAR_6->name, sizeof(VAR_6->name), "BT%d%s %s (%s)",
   VAR_3->id, (VAR_3->id==848 && VAR_3->revision==0x12) ? "A" : "",
   VAR_5, VAR_1[VAR_3->c.type].name);
 return VAR_6;
}
