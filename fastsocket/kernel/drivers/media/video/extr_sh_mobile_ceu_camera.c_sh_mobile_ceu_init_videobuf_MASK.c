
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {int dummy; } ;
struct soc_camera_host {struct sh_mobile_ceu_dev* priv; } ;
struct TYPE_2__ {int parent; } ;
struct soc_camera_device {TYPE_1__ dev; } ;
struct sh_mobile_ceu_dev {scalar_t__ is_interlaced; int lock; } ;
struct sh_mobile_ceu_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct soc_camera_host* FUNC_0 (int ) ;
 int FUNC_1 (struct videobuf_queue*,int *,int ,int *,int ,int ,int,struct soc_camera_device*) ;

__attribute__((used)) static void FUNC_2(struct videobuf_queue *VAR_4,
     struct soc_camera_device *VAR_5)
{
 struct soc_camera_host *VAR_6 = FUNC_0(VAR_5->dev.parent);
 struct sh_mobile_ceu_dev *VAR_7 = VAR_6->priv;

 FUNC_1(VAR_4,
           &VAR_3,
           VAR_5->dev.parent, &VAR_7->lock,
           VAR_0,
           VAR_7->is_interlaced ?
           VAR_1 : VAR_2,
           sizeof(struct sh_mobile_ceu_buffer),
           VAR_5);
}
