
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct scb_platform_data {TYPE_1__* col_scb; struct hardware_scb* hscb; int dmamap; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct scb_platform_data* sense_map; struct scb_platform_data* sg_map; struct scb_platform_data* hscb_map; struct scb_platform_data* platform_data; void* physaddr; int * vaddr; } ;
struct scb_data {int numscbs; int scbs_left; int sgs_left; int sense_left; int sense_dmat; int sense_maps; int sg_dmat; int sg_maps; int hscb_dmat; int hscb_maps; } ;
struct scb {TYPE_1__* col_scb; struct hardware_scb* hscb; int dmamap; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct scb* sense_map; struct scb* sg_map; struct scb* hscb_map; struct scb* platform_data; void* physaddr; int * vaddr; } ;
struct map_node {TYPE_1__* col_scb; struct hardware_scb* hscb; int dmamap; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct map_node* sense_map; struct map_node* sg_map; struct map_node* hscb_map; struct map_node* platform_data; void* physaddr; int * vaddr; } ;
struct hardware_scb {int tag; int hscb_busaddr; } ;
struct ahd_softc {int flags; int buffer_dmat; struct scb_data scb_data; } ;
struct ahd_dma_seg {int dummy; } ;
struct ahd_dma64_seg {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {struct scb_platform_data* col_scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct scb_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct scb_platform_data*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ahd_softc*,int ,int ,int *) ;
 int FUNC_3 (struct ahd_softc*,int ,int ,int *,int,int ,void**,int ) ;
 scalar_t__ FUNC_4 (struct ahd_softc*,int ,void**,int ,int *) ;
 TYPE_1__* FUNC_5 (struct ahd_softc*,int) ;
 int FUNC_6 (struct ahd_softc*,struct scb_platform_data*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (struct scb_platform_data*,int ) ;
 int VAR_11 ;
 struct scb_platform_data* FUNC_12 (int,int ,int ) ;
 int FUNC_13 (struct hardware_scb*,int ,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16(struct ahd_softc *VAR_12)
{
 struct scb_data *VAR_13;
 struct scb *VAR_14;
 struct hardware_scb *VAR_15;
 struct map_node *VAR_16;
 struct map_node *VAR_17;
 struct map_node *VAR_18;
 uint8_t *VAR_19;
 uint8_t *VAR_20;
 dma_addr_t VAR_21;
 dma_addr_t VAR_22;
 dma_addr_t VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_13 = &VAR_12->scb_data;
 if (VAR_13->numscbs >= VAR_1)

  return;

 if (VAR_13->scbs_left != 0) {
  int VAR_26;

  VAR_26 = (VAR_7 / sizeof(*VAR_15)) - VAR_13->scbs_left;
  VAR_16 = FUNC_0(&VAR_13->hscb_maps);
  VAR_15 = &((struct hardware_scb *)VAR_16->vaddr)[VAR_26];
  VAR_21 = VAR_16->physaddr + (VAR_26 * sizeof(*VAR_15));
 } else {
  VAR_16 = FUNC_12(sizeof(*VAR_16), VAR_5, VAR_6);

  if (VAR_16 == ((void*)0))
   return;


  if (FUNC_4(VAR_12, VAR_13->hscb_dmat,
         (void **)&VAR_16->vaddr,
         VAR_4, &VAR_16->dmamap) != 0) {
   FUNC_11(VAR_16, VAR_5);
   return;
  }

  FUNC_1(&VAR_13->hscb_maps, VAR_16, VAR_11);

  FUNC_3(VAR_12, VAR_13->hscb_dmat, VAR_16->dmamap,
    VAR_16->vaddr, VAR_7, VAR_10,
    &VAR_16->physaddr, 0);

  VAR_15 = (struct hardware_scb *)VAR_16->vaddr;
  VAR_21 = VAR_16->physaddr;
  VAR_13->scbs_left = VAR_7 / sizeof(*VAR_15);
 }

 if (VAR_13->sgs_left != 0) {
  int VAR_27;

  VAR_27 = ((FUNC_9(VAR_12) / FUNC_10(VAR_12))
         - VAR_13->sgs_left) * FUNC_10(VAR_12);
  VAR_17 = FUNC_0(&VAR_13->sg_maps);
  VAR_19 = VAR_17->vaddr + VAR_27;
  VAR_22 = VAR_17->physaddr + VAR_27;
 } else {
  VAR_17 = FUNC_12(sizeof(*VAR_17), VAR_5, VAR_6);

  if (VAR_17 == ((void*)0))
   return;


  if (FUNC_4(VAR_12, VAR_13->sg_dmat,
         (void **)&VAR_17->vaddr,
         VAR_4, &VAR_17->dmamap) != 0) {
   FUNC_11(VAR_17, VAR_5);
   return;
  }

  FUNC_1(&VAR_13->sg_maps, VAR_17, VAR_11);

  FUNC_3(VAR_12, VAR_13->sg_dmat, VAR_17->dmamap,
    VAR_17->vaddr, FUNC_9(VAR_12),
    VAR_10, &VAR_17->physaddr, 0);

  VAR_19 = VAR_17->vaddr;
  VAR_22 = VAR_17->physaddr;
  VAR_13->sgs_left =
      FUNC_9(VAR_12) / FUNC_10(VAR_12);




 }

 if (VAR_13->sense_left != 0) {
  int VAR_28;

  VAR_28 = VAR_7 - (VAR_2 * VAR_13->sense_left);
  VAR_18 = FUNC_0(&VAR_13->sense_maps);
  VAR_20 = VAR_18->vaddr + VAR_28;
  VAR_23 = VAR_18->physaddr + VAR_28;
 } else {
  VAR_18 = FUNC_12(sizeof(*VAR_18), VAR_5, VAR_6);

  if (VAR_18 == ((void*)0))
   return;


  if (FUNC_4(VAR_12, VAR_13->sense_dmat,
         (void **)&VAR_18->vaddr,
         VAR_4, &VAR_18->dmamap) != 0) {
   FUNC_11(VAR_18, VAR_5);
   return;
  }

  FUNC_1(&VAR_13->sense_maps, VAR_18, VAR_11);

  FUNC_3(VAR_12, VAR_13->sense_dmat, VAR_18->dmamap,
    VAR_18->vaddr, VAR_7, VAR_10,
    &VAR_18->physaddr, 0);

  VAR_20 = VAR_18->vaddr;
  VAR_23 = VAR_18->physaddr;
  VAR_13->sense_left = VAR_7 / VAR_2;




 }

 VAR_24 = FUNC_14(VAR_13->sense_left, VAR_13->scbs_left);
 VAR_24 = FUNC_14(VAR_24, VAR_13->sgs_left);
 VAR_24 = FUNC_14(VAR_24, (VAR_1 - VAR_13->numscbs));
 for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
  struct scb_platform_data *VAR_29;
  u_int VAR_30;




  VAR_14 = (struct scb *)FUNC_12(sizeof(*VAR_14),
      VAR_5, VAR_6);
  if (VAR_14 == ((void*)0))
   break;

  VAR_29 = (struct scb_platform_data *)FUNC_12(sizeof(*VAR_29),
          VAR_5, VAR_6);
  if (VAR_29 == ((void*)0)) {
   FUNC_11(VAR_14, VAR_5);
   break;
  }
  VAR_14->platform_data = VAR_29;
  VAR_14->hscb_map = VAR_16;
  VAR_14->sg_map = VAR_17;
  VAR_14->sense_map = VAR_18;
  VAR_14->sg_list = VAR_19;
  VAR_14->sense_data = VAR_20;
  VAR_14->sense_busaddr = VAR_23;
  FUNC_13(VAR_15, 0, sizeof(*VAR_15));
  VAR_14->hscb = VAR_15;
  VAR_15->hscb_busaddr = FUNC_8(VAR_21);





  VAR_14->sg_list_busaddr = VAR_22;
  if ((VAR_12->flags & VAR_0) != 0)
   VAR_14->sg_list_busaddr
       += sizeof(struct ahd_dma64_seg);
  else
   VAR_14->sg_list_busaddr += sizeof(struct ahd_dma_seg);
  VAR_14->ahd_softc = VAR_12;
  VAR_14->flags = VAR_8;
  VAR_14->hscb->tag = FUNC_7(VAR_13->numscbs);
  VAR_30 = VAR_13->numscbs ^ 0x100;
  VAR_14->col_scb = FUNC_5(VAR_12, VAR_30);
  if (VAR_14->col_scb != ((void*)0))
   VAR_14->col_scb->col_scb = VAR_14;
  FUNC_6(VAR_12, VAR_14);
  VAR_15++;
  VAR_21 += sizeof(*VAR_15);
  VAR_19 += FUNC_10(VAR_12);
  VAR_22 += FUNC_10(VAR_12);
  VAR_20 += VAR_2;
  VAR_23 += VAR_2;
  VAR_13->numscbs++;
  VAR_13->sense_left--;
  VAR_13->scbs_left--;
  VAR_13->sgs_left--;
 }
}
