
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ioc3_port {TYPE_1__* ip_card; int ip_idd; int ip_is; } ;
struct TYPE_2__ {int ic_enable; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ioc3_port *VAR_0, uint32_t VAR_1)
{
 if (VAR_0->ip_card->ic_enable & VAR_1) {
  FUNC_0(VAR_0->ip_is, VAR_0->ip_idd, VAR_1);
  VAR_0->ip_card->ic_enable &= ~VAR_1;
 }
}
