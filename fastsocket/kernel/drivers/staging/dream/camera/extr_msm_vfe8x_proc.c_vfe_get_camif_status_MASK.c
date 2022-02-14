
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_msg_camif_status {int pixelCount; int lineCount; scalar_t__ camifHalt; scalar_t__ camifState; } ;
struct vfe_irq_thread_msg {int camifStatus; } ;
struct vfe_camif_stats {int pixelCount; int lineCount; scalar_t__ camifHalt; scalar_t__ camifState; } ;
typedef int rc ;
typedef int camifStatusTemp ;
typedef scalar_t__ boolean ;


 int FUNC_0 (struct vfe_msg_camif_status*,int ,int) ;

__attribute__((used)) static struct vfe_msg_camif_status
FUNC_1(struct vfe_irq_thread_msg *VAR_0)
{
 struct vfe_camif_stats VAR_1;
 struct vfe_msg_camif_status VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 VAR_1 =
  *((struct vfe_camif_stats *)(&(VAR_0->camifStatus)));

 VAR_2.camifState = (boolean)VAR_1.camifHalt;
 VAR_2.lineCount = VAR_1.lineCount;
 VAR_2.pixelCount = VAR_1.pixelCount;

 return VAR_2;
}
