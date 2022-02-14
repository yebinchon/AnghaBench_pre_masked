
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_port {int crq_work; int dma_dev; } ;
struct srp_target {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct vio_port* FUNC_1 (struct srp_target*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct srp_target *VAR_4 = VAR_3;
 struct vio_port *VAR_5 = FUNC_1(VAR_4);

 FUNC_2(VAR_5->dma_dev);
 FUNC_0(VAR_1, &VAR_5->crq_work);

 return VAR_0;
}
