
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ std_list; scalar_t__ enh_list; } ;
struct TYPE_11__ {struct TYPE_11__* q_next; void* sg_busaddr; TYPE_1__ sg_list; void* scb_busaddr; } ;
typedef TYPE_2__ ips_scb_t ;
struct TYPE_12__ {int max_cmds; TYPE_2__* scb_freelist; TYPE_2__* scbs; int pcidev; } ;
typedef TYPE_3__ ips_ha_t ;
typedef void* dma_addr_t ;
struct TYPE_13__ {scalar_t__ std_list; scalar_t__ enh_list; int * list; } ;
typedef TYPE_4__ IPS_SG_LIST ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 void* FUNC_4 (int ,int,void**) ;
 int FUNC_5 (int ,int,TYPE_2__*,void*) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_1)
{
 ips_scb_t *VAR_2;
 IPS_SG_LIST VAR_3;
 int VAR_4;
 dma_addr_t VAR_5, VAR_6;

 FUNC_2("ips_allocatescbs", 1);


 VAR_1->scbs =
     FUNC_4(VAR_1->pcidev, VAR_1->max_cmds * sizeof (ips_scb_t),
     &VAR_5);
 if (VAR_1->scbs == ((void*)0))
  return 0;
 VAR_3.list =
     FUNC_4(VAR_1->pcidev,
     FUNC_0(VAR_1) * VAR_0 *
     VAR_1->max_cmds, &VAR_6);
 if (VAR_3.list == ((void*)0)) {
  FUNC_5(VAR_1->pcidev,
        VAR_1->max_cmds * sizeof (ips_scb_t), VAR_1->scbs,
        VAR_5);
  return 0;
 }

 FUNC_3(VAR_1->scbs, 0, VAR_1->max_cmds * sizeof (ips_scb_t));

 for (VAR_4 = 0; VAR_4 < VAR_1->max_cmds; VAR_4++) {
  VAR_2 = &VAR_1->scbs[VAR_4];
  VAR_2->scb_busaddr = VAR_5 + sizeof (ips_scb_t) * VAR_4;

  if (FUNC_1(VAR_1)) {
   VAR_2->sg_list.enh_list =
       VAR_3.enh_list + VAR_4 * VAR_0;
   VAR_2->sg_busaddr =
       VAR_6 + FUNC_0(VAR_1) * VAR_0 * VAR_4;
  } else {
   VAR_2->sg_list.std_list =
       VAR_3.std_list + VAR_4 * VAR_0;
   VAR_2->sg_busaddr =
       VAR_6 + FUNC_0(VAR_1) * VAR_0 * VAR_4;
  }


  if (VAR_4 < VAR_1->max_cmds - 1) {
   VAR_2->q_next = VAR_1->scb_freelist;
   VAR_1->scb_freelist = VAR_2;
  }
 }


 return (1);
}
