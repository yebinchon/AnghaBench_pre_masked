
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ base_addr; } ;
struct TYPE_4__ {TYPE_1__ cyy; } ;
struct cyclades_port {TYPE_2__ u; struct cyclades_card* card; } ;
struct cyclades_card {int bus_index; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct cyclades_port *VAR_0, u32 VAR_1)
{
 struct cyclades_card *VAR_2 = VAR_0->card;

 return FUNC_0(VAR_0->u.cyy.base_addr + (VAR_1 << VAR_2->bus_index));
}
