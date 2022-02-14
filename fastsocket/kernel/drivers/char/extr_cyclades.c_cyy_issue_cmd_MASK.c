
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int base_addr; } ;
struct TYPE_5__ {TYPE_1__ cyy; } ;
struct cyclades_port {TYPE_3__* card; TYPE_2__ u; } ;
struct TYPE_6__ {int bus_index; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct cyclades_port *VAR_0, u8 VAR_1)
{
 return FUNC_0(VAR_0->u.cyy.base_addr, VAR_1,
   VAR_0->card->bus_index);
}
