
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int name; int release; int * parent; int * v4l2_dev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {char* name; } ;
struct cx88_core {char* name; TYPE_1__ board; int v4l2_dev; } ;


 int FUNC_0 (int ,int,char*,char*,char*,char*) ;
 struct video_device* FUNC_1 () ;
 int VAR_0 ;

struct video_device *FUNC_2(struct cx88_core *VAR_1,
        struct pci_dev *VAR_2,
        struct video_device *VAR_3,
        char *VAR_4)
{
 struct video_device *VAR_5;

 VAR_5 = FUNC_1();
 if (((void*)0) == VAR_5)
  return ((void*)0);
 *VAR_5 = *VAR_3;
 VAR_5->v4l2_dev = &VAR_1->v4l2_dev;
 VAR_5->parent = &VAR_2->dev;
 VAR_5->release = VAR_0;
 FUNC_0(VAR_5->name, sizeof(VAR_5->name), "%s %s (%s)",
   VAR_1->name, VAR_4, VAR_1->board.name);
 return VAR_5;
}
