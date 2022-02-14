
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct target_cmd {int dummy; } ;
struct hardware_scb {int hscb_busaddr; } ;
struct TYPE_2__ {scalar_t__ physaddr; scalar_t__ vaddr; int dmamap; } ;
struct ahd_softc {int stack_size; int flags; int unit; int features; int bugs; int* overrun_buf; int stat_timer; int init_level; struct hardware_scb* next_queued_hscb; TYPE_1__ shared_data_map; TYPE_1__* next_queued_hscb_map; struct target_cmd* targetcmds; struct ahd_completion* qoutfifo; int shared_data_dmat; int parent_dmat; int buffer_dmat; int * saved_stack; } ;
struct ahd_completion {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

 int VAR_27 ;


 int VAR_28 ;

 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_1 (struct ahd_softc*) ;
 int VAR_34 ;
 scalar_t__ FUNC_2 (struct ahd_softc*,int ,int,scalar_t__,scalar_t__,int ,int *,int *,size_t,int,int ,int ,int *) ;
 int VAR_35 ;
 int FUNC_3 (struct ahd_softc*,int ,int ,scalar_t__,size_t,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_4 (struct ahd_softc*,int ,void**,int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct ahd_softc*) ;
 char* FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,int ,int*) ;
 int FUNC_11 (struct ahd_softc*) ;
 int VAR_36 ;
 int FUNC_12 (int *,int ,int ,struct ahd_softc*) ;
 int FUNC_13 (struct ahd_softc*,int ,int ) ;
 int VAR_37 ;
 char** VAR_38 ;
 int * FUNC_14 (int,int ,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,...) ;
 char** VAR_39 ;

int
FUNC_17(struct ahd_softc *VAR_40)
{
 uint8_t *VAR_41;
 dma_addr_t VAR_42;
 size_t VAR_43;
 int VAR_44;
 int VAR_45;
 u_int VAR_46;
 uint8_t VAR_47;
 uint8_t VAR_48;

 FUNC_0(VAR_40, VAR_5, VAR_5);

 VAR_40->stack_size = FUNC_9(VAR_40);
 VAR_40->saved_stack = FUNC_14(VAR_40->stack_size * sizeof(uint16_t),
      VAR_30, VAR_31);
 if (VAR_40->saved_stack == ((void*)0))
  return (VAR_23);





 if (sizeof(struct hardware_scb) != 64)
  FUNC_15("Hardware SCB size is incorrect");
 VAR_40->flags |= VAR_3;




 if ((VAR_16 & (0x1 << VAR_40->unit)) == 0)
  VAR_40->features &= ~VAR_14;
 VAR_40->init_level++;
 VAR_43 = VAR_10 * sizeof(*VAR_40->qoutfifo)
    + sizeof(struct hardware_scb);
 if ((VAR_40->features & VAR_14) != 0)
  VAR_43 += VAR_15 * sizeof(struct target_cmd);
 if ((VAR_40->bugs & VAR_7) != 0)
  VAR_43 += VAR_33;
 if (FUNC_2(VAR_40, VAR_40->parent_dmat, 1,
                      VAR_20 + 1,
                     VAR_20,
                      VAR_19,
                    ((void*)0), ((void*)0),
          VAR_43,
                       1,
                      VAR_21,
                   0, &VAR_40->shared_data_dmat) != 0) {
  return (VAR_23);
 }

 VAR_40->init_level++;


 if (FUNC_4(VAR_40, VAR_40->shared_data_dmat,
        (void **)&VAR_40->shared_data_map.vaddr,
        VAR_18,
        &VAR_40->shared_data_map.dmamap) != 0) {
  return (VAR_23);
 }

 VAR_40->init_level++;


 FUNC_3(VAR_40, VAR_40->shared_data_dmat, VAR_40->shared_data_map.dmamap,
   VAR_40->shared_data_map.vaddr, VAR_43,
   VAR_35, &VAR_40->shared_data_map.physaddr,
            0);
 VAR_40->qoutfifo = (struct ahd_completion *)VAR_40->shared_data_map.vaddr;
 VAR_41 = (uint8_t *)&VAR_40->qoutfifo[VAR_8];
 VAR_42 = VAR_40->shared_data_map.physaddr
     + VAR_8*sizeof(struct ahd_completion);
 if ((VAR_40->features & VAR_14) != 0) {
  VAR_40->targetcmds = (struct target_cmd *)VAR_41;
  VAR_41 += VAR_15 * sizeof(struct target_cmd);
  VAR_42 += VAR_15 * sizeof(struct target_cmd);
 }

 if ((VAR_40->bugs & VAR_7) != 0) {
  VAR_40->overrun_buf = VAR_41;
  VAR_41 += VAR_33;
  VAR_42 += VAR_33;
 }
 VAR_40->next_queued_hscb = (struct hardware_scb *)VAR_41;
 VAR_40->next_queued_hscb_map = &VAR_40->shared_data_map;
 VAR_40->next_queued_hscb->hscb_busaddr = FUNC_5(VAR_42);

 VAR_40->init_level++;


 if (FUNC_6(VAR_40) != 0)
  return (VAR_23);

 if ((VAR_40->flags & VAR_3) == 0)
  VAR_40->flags &= ~VAR_9;





 FUNC_8(VAR_40);


 FUNC_1(VAR_40);

 FUNC_0(VAR_40, VAR_5, VAR_5);

 if ((VAR_40->flags & VAR_1) == 0)
  goto init_done;





 VAR_45 = FUNC_13(VAR_40, VAR_26,
       VAR_22);
 if (VAR_45 != 0) {
  FUNC_16("%s: current sensing timeout 1\n", FUNC_7(VAR_40));
  goto init_done;
 }
 for (VAR_44 = 20, VAR_48 = VAR_29;
      (VAR_48 & VAR_29) != 0 && VAR_44; VAR_44--) {
  VAR_45 = FUNC_10(VAR_40, VAR_25, &VAR_48);
  if (VAR_45 != 0) {
   FUNC_16("%s: current sensing timeout 2\n",
          FUNC_7(VAR_40));
   goto init_done;
  }
 }
 if (VAR_44 == 0) {
  FUNC_16("%s: Timedout during current-sensing test\n",
         FUNC_7(VAR_40));
  goto init_done;
 }


 VAR_45 = FUNC_10(VAR_40, VAR_24, &VAR_47);
 if (VAR_45 != 0) {
  FUNC_16("%s: current sensing timeout 3\n", FUNC_7(VAR_40));
  goto init_done;
 }


 FUNC_13(VAR_40, VAR_26, 0);







 VAR_46 = 0;
 for (VAR_44 = 0; VAR_44 < 4; VAR_44++, VAR_47 >>= VAR_28) {
  u_int VAR_49;

  VAR_49 = (VAR_47 & VAR_27);
  switch (VAR_49) {
  case 129:
  case 128:
   VAR_46++;
  case 131:
  case 130:
   if (VAR_46 == 0 && VAR_37 == 0)
    break;
   FUNC_16("%s: %s Channel %s\n", FUNC_7(VAR_40),
          VAR_38[VAR_44], VAR_39[VAR_49]);
   break;
  }
 }
 if (VAR_46) {
  FUNC_16("%s: WARNING. Termination is not configured correctly.\n"
         "%s: WARNING. SCSI bus operations may FAIL.\n",
         FUNC_7(VAR_40), FUNC_7(VAR_40));
 }
init_done:
 FUNC_11(VAR_40);
 FUNC_12(&VAR_40->stat_timer, VAR_13,
   VAR_36, VAR_40);
 return (0);
}
