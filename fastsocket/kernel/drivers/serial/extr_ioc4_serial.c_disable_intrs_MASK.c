
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ioc4_port {int ip_ienb; int ip_ioc4_soft; struct hooks* ip_hooks; } ;
struct hooks {int intr_dma_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ioc4_port *VAR_3, uint32_t VAR_4)
{
 struct hooks *VAR_5 = VAR_3->ip_hooks;

 if (VAR_3->ip_ienb & VAR_4) {
  FUNC_0(VAR_3->ip_ioc4_soft, VAR_4, VAR_2,
     VAR_1);
  VAR_3->ip_ienb &= ~VAR_4;
 }

 if (!VAR_3->ip_ienb)
  FUNC_0(VAR_3->ip_ioc4_soft, VAR_5->intr_dma_error,
    VAR_2, VAR_0);
}
