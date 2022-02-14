
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_hw_descr {int dmac_cmd_status; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct spider_net_hw_descr *VAR_1)
{
 return VAR_1->dmac_cmd_status & VAR_0;
}
