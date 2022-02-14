
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {int dummy; } ;
struct soc_camera_host {struct pxa_camera_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {int video_lock; TYPE_1__ dev; } ;
struct pxa_camera_dev {int lock; } ;
struct pxa_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct soc_camera_host* FUNC_0 (int ) ;
 int FUNC_1 (struct videobuf_queue*,int *,int *,int *,int ,int ,int,struct soc_camera_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct videobuf_queue *VAR_3,
         struct soc_camera_device *VAR_4)
{
 struct soc_camera_host *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct pxa_camera_dev *VAR_6 = VAR_5->priv;





 FUNC_1(VAR_3, &VAR_2, ((void*)0), &VAR_6->lock,
    VAR_0, VAR_1,
    sizeof(struct pxa_buffer), VAR_4, &VAR_4->video_lock);
}
