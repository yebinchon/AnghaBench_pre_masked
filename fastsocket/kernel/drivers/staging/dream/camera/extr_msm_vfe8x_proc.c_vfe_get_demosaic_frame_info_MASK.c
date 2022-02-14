
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_irq_thread_msg {int demosaicStatus; } ;
struct vfe_frame_bpc_info {int RedBlueBadPixelCount; int redBlueDefectPixelCount; int greenBadPixelCount; int greenDefectPixelCount; } ;
struct vfe_bps_info {int RedBlueBadPixelCount; int redBlueDefectPixelCount; int greenBadPixelCount; int greenDefectPixelCount; } ;
typedef int rc ;
typedef int bpcInfoTemp ;


 int FUNC_0 (struct vfe_frame_bpc_info*,int ,int) ;

__attribute__((used)) static struct vfe_frame_bpc_info
FUNC_1(struct vfe_irq_thread_msg *VAR_0)
{
 struct vfe_bps_info VAR_1;
 struct vfe_frame_bpc_info VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 VAR_1 =
  *((struct vfe_bps_info *)(&(VAR_0->demosaicStatus)));

 VAR_2.greenDefectPixelCount =
  VAR_1.greenBadPixelCount;

 VAR_2.redBlueDefectPixelCount =
  VAR_1.RedBlueBadPixelCount;

 return VAR_2;
}
