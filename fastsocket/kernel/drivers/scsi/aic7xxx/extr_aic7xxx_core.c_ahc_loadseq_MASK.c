
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct patch {int dummy; } ;
struct cs {int end; int begin; } ;
struct ahc_softc {int pci_cachesize; int instruction_ram_size; int num_critical_sections; int features; int bugs; int flags; int * critical_sections; int * targetcmds; } ;
struct ahc_dma_seg {int dummy; } ;
typedef int seqprog ;
typedef int end_set ;
typedef int begin_set ;
struct TYPE_2__ {int end; int begin; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct ahc_softc*,struct patch const**,int,int*) ;
 int FUNC_1 (struct ahc_softc*,int,int*) ;
 char* FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 scalar_t__ VAR_19 ;
 TYPE_1__* VAR_20 ;
 int * FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *,struct cs*,int) ;
 int FUNC_6 (int*,int ,int) ;
 int VAR_21 ;
 int FUNC_7 (char*) ;
 struct patch* VAR_22 ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(struct ahc_softc *VAR_23)
{
 struct cs VAR_24[VAR_21];
 u_int VAR_25[VAR_21];
 u_int VAR_26[VAR_21];
 const struct patch *VAR_27;
 u_int VAR_28;
 u_int VAR_29;
 u_int VAR_30;
 u_int VAR_31;
 u_int VAR_32;
 int VAR_33;
 uint8_t VAR_34[7];





 VAR_28 = 0;
 VAR_29 = 0;
 FUNC_6(VAR_25, 0, sizeof(VAR_25));
 FUNC_6(VAR_26, 0, sizeof(VAR_26));


 VAR_34[VAR_11] = 0;
 if (VAR_23->targetcmds != ((void*)0))
  VAR_34[VAR_11] += 32;
 VAR_34[VAR_10] = VAR_34[VAR_11] + 1;
 VAR_34[VAR_0] = VAR_23->pci_cachesize - 1;
 VAR_34[VAR_5] = ~(VAR_23->pci_cachesize - 1);
 VAR_32 = VAR_23->pci_cachesize;
 if (VAR_32 < (2 * sizeof(struct ahc_dma_seg)))
  VAR_32 = 2 * sizeof(struct ahc_dma_seg);
 VAR_34[VAR_17] = VAR_32;
 VAR_34[VAR_16] = ~(VAR_32 - 1);
 VAR_34[VAR_15] = (VAR_32 - 1);

 VAR_27 = VAR_22;
 VAR_33 = 0;
 VAR_31 = 0;
 FUNC_3(VAR_23, VAR_14, VAR_9|VAR_2|VAR_4|VAR_6);
 FUNC_3(VAR_23, VAR_12, 0);
 FUNC_3(VAR_23, VAR_13, 0);

 for (VAR_30 = 0; VAR_30 < sizeof(seqprog)/4; VAR_30++) {
  if (FUNC_0(VAR_23, &VAR_27, VAR_30, &VAR_31) == 0) {




   continue;
  }

  if (VAR_33 == VAR_23->instruction_ram_size) {





   FUNC_8("\n%s: Program too large for instruction memory "
          "size of %d!\n", FUNC_2(VAR_23),
          VAR_23->instruction_ram_size);
   return (VAR_1);
  }





  for (; VAR_29 < VAR_21; VAR_29++) {
   if (VAR_20[VAR_29].end <= VAR_30) {
    if (VAR_25[VAR_28] == VAR_18
     && VAR_26[VAR_28] == VAR_3) {
     VAR_24[VAR_28].end = VAR_33;
      VAR_26[VAR_28] = VAR_18;
     VAR_28++;
    }
    continue;
   }
   if (VAR_20[VAR_29].begin <= VAR_30
    && VAR_25[VAR_28] == VAR_3) {
    VAR_24[VAR_28].begin = VAR_33;
    VAR_25[VAR_28] = VAR_18;
   }
   break;
  }
  FUNC_1(VAR_23, VAR_30, VAR_34);
  VAR_33++;
 }

 VAR_23->num_critical_sections = VAR_28;
 if (VAR_28 != 0) {

  VAR_28 *= sizeof(struct cs);
  VAR_23->critical_sections = FUNC_4(VAR_28, VAR_7, VAR_8);
  if (VAR_23->critical_sections == ((void*)0))
   FUNC_7("ahc_loadseq: Could not malloc");
  FUNC_5(VAR_23->critical_sections, VAR_24, VAR_28);
 }
 FUNC_3(VAR_23, VAR_14, VAR_9|VAR_2|VAR_4);

 if (VAR_19) {
  FUNC_8(" %d instructions downloaded\n", VAR_33);
  FUNC_8("%s: Features 0x%x, Bugs 0x%x, Flags 0x%x\n",
         FUNC_2(VAR_23), VAR_23->features, VAR_23->bugs, VAR_23->flags);
 }
 return (0);
}
