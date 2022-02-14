
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_irq_thread_msg {int asfMaxEdge; } ;
struct vfe_frame_asf_info {int maxEdge; int asfMaxEdge; int HBICount; int asfHbiCount; } ;
struct vfe_asf_info {int maxEdge; int asfMaxEdge; int HBICount; int asfHbiCount; } ;
typedef int rc ;
typedef int asfInfoTemp ;


 int FUNC_0 (struct vfe_frame_asf_info*,int ,int) ;

__attribute__((used)) static struct vfe_frame_asf_info
FUNC_1(struct vfe_irq_thread_msg *VAR_0)
{
 struct vfe_asf_info VAR_1;
 struct vfe_frame_asf_info VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 VAR_1 =
  *((struct vfe_asf_info *)(&(VAR_0->asfMaxEdge)));

 VAR_2.asfHbiCount = VAR_1.HBICount;
 VAR_2.asfMaxEdge = VAR_1.maxEdge;

 return VAR_2;
}
