
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_buscmd {scalar_t__ statsPingpongReload; scalar_t__ busPingpongReload; scalar_t__ stripeReload; } ;
struct vfe_bus_cmd_data {scalar_t__ stripeReload; scalar_t__ statsPingpongReload; scalar_t__ busPingpongReload; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct vfe_buscmd*,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vfe_bus_cmd_data *VAR_2)
{
 struct vfe_buscmd VAR_3;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.stripeReload = VAR_2->stripeReload;
 VAR_3.busPingpongReload = VAR_2->busPingpongReload;
 VAR_3.statsPingpongReload = VAR_2->statsPingpongReload;

 FUNC_2(*((uint32_t *)&VAR_3), VAR_1->vfebase + VAR_0);

 FUNC_0("bus command = 0x%x\n", (*((uint32_t *)&VAR_3)));



 VAR_2->busPingpongReload = 0;
 VAR_2->statsPingpongReload = 0;
 VAR_2->stripeReload = 0;
}
