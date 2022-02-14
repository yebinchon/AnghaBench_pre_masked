
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ips_scb_t ;
struct TYPE_7__ {TYPE_3__* scbs; int pcidev; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_6__ {TYPE_3__* list; } ;
struct TYPE_8__ {int scb_busaddr; int sg_busaddr; TYPE_1__ sg_list; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_2(ips_ha_t * VAR_1, int VAR_2)
{
 if (VAR_1->scbs) {
  FUNC_1(VAR_1->pcidev,
        FUNC_0(VAR_1) * VAR_0 * VAR_2,
        VAR_1->scbs->sg_list.list,
        VAR_1->scbs->sg_busaddr);
  FUNC_1(VAR_1->pcidev, sizeof (ips_scb_t) * VAR_2,
        VAR_1->scbs, VAR_1->scbs->scb_busaddr);
  VAR_1->scbs = ((void*)0);
 }
 return 1;
}
