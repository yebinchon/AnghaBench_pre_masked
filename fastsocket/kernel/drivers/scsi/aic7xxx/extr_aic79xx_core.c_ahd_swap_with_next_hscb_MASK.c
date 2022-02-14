
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scb {struct map_node* hscb_map; struct hardware_scb* hscb; } ;
struct map_node {int dummy; } ;
struct hardware_scb {int hscb_busaddr; int next_hscb_busaddr; } ;
struct TYPE_2__ {struct scb** scbindex; } ;
struct ahd_softc {TYPE_1__ scb_data; struct map_node* next_queued_hscb_map; struct hardware_scb* next_queued_hscb; } ;


 size_t FUNC_0 (struct scb*) ;
 int FUNC_1 (struct hardware_scb*,struct hardware_scb*,int) ;

__attribute__((used)) static void
FUNC_2(struct ahd_softc *VAR_0, struct scb *VAR_1)
{
 struct hardware_scb *VAR_2;
 struct map_node *VAR_3;
 uint32_t VAR_4;
 VAR_2 = VAR_0->next_queued_hscb;
 VAR_3 = VAR_0->next_queued_hscb_map;
 VAR_4 = VAR_2->hscb_busaddr;
 FUNC_1(VAR_2, VAR_1->hscb, sizeof(*VAR_1->hscb));
 VAR_2->hscb_busaddr = VAR_4;
 VAR_2->next_hscb_busaddr = VAR_1->hscb->hscb_busaddr;


 VAR_0->next_queued_hscb = VAR_1->hscb;
 VAR_0->next_queued_hscb_map = VAR_1->hscb_map;
 VAR_1->hscb = VAR_2;
 VAR_1->hscb_map = VAR_3;


 VAR_0->scb_data.scbindex[FUNC_0(VAR_1)] = VAR_1;
}
