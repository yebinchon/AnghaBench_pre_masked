
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct modctl {int mod_loadcnt; } ;
typedef void* machine_inst_t ;
struct TYPE_6__ {scalar_t__ fbtp_currentval; scalar_t__ fbtp_patchval; void** fbtp_patchpoint; uintptr_t fbtp_roffset; void* fbtp_id; void* fbtp_hashnext; void* fbtp_savedval; int fbtp_rval; int fbtp_loadcnt; struct modctl* fbtp_ctl; struct TYPE_6__* fbtp_next; int fbtp_name; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef scalar_t__ dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (void*,void*) ;
 int FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (void*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (void*,int) ;
 TYPE_1__* FUNC_13 (int ,scalar_t__) ;
 void* FUNC_14 (int ,char const*,char const*,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_15 (int ,char const*,char const*,int ) ;
 int FUNC_16 (int *,void*,TYPE_1__*) ;
 int VAR_9 ;
 void** VAR_10 ;
 TYPE_1__* FUNC_17 (int,int ) ;
 int FUNC_18 (char*,char const*,...) ;
 int FUNC_19 (char*,char const*,int ) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;

void
FUNC_22(struct modctl *VAR_11, const char *VAR_12, const char* VAR_13, machine_inst_t* VAR_14, machine_inst_t *VAR_15)
{
 unsigned int VAR_16;
        int VAR_17 = 0;
 dtrace_id_t VAR_18;

 fbt_probe_t *VAR_19, *VAR_20, *VAR_21;
 machine_inst_t *VAR_22, *VAR_23 = ((void*)0), *VAR_24, VAR_25;
 int VAR_26, VAR_27;




 if (!VAR_14 || !VAR_15 || VAR_15 < VAR_14) {
  FUNC_18("dtrace: %s has an invalid address\n", VAR_13);
  return;
 }




 VAR_26 = 0;
 VAR_27 = -1;
 VAR_24 = (machine_inst_t *)VAR_15;
 for (VAR_16 = 0, VAR_22 = VAR_14, VAR_25 = 0;
      (VAR_16 < 8) && VAR_22 < VAR_15; VAR_16++, VAR_22++)
 {
  VAR_25 = *VAR_22;
  if (FUNC_9(VAR_25)) {
   VAR_26 = 1;

   VAR_27 = FUNC_11(VAR_25);
   VAR_23 = VAR_22;
  }
  if (VAR_26 && (FUNC_10(VAR_25) || FUNC_6(VAR_25)))

   break;
  if (FUNC_4(VAR_25))
   break;
  if (FUNC_7(VAR_25))
   break;


  if (FUNC_12(VAR_25,1) == 4)
   VAR_22++;
 }

 if (!(VAR_26 && (FUNC_10(VAR_25) || FUNC_6(VAR_25)))) {
  return;
 }

 VAR_18 = FUNC_15(VAR_9, VAR_12, VAR_13, VAR_4);
 VAR_19 = FUNC_17(sizeof(fbt_probe_t), VAR_7);
 VAR_19->fbtp_next = ((void*)0);
 FUNC_19( (char *)&(VAR_19->fbtp_name), VAR_13, VAR_8 );

 if (VAR_18 != 0) {
  VAR_21 = FUNC_13 (VAR_9, VAR_18);
  FUNC_0 (VAR_21 != ((void*)0));
  for(; VAR_21 != ((void*)0); VAR_21 = VAR_21->fbtp_next) {
   if (VAR_21->fbtp_currentval == VAR_21->fbtp_patchval)
    VAR_17++;

   if (VAR_21->fbtp_next == ((void*)0)) {
    VAR_21->fbtp_next = VAR_19;
    VAR_19->fbtp_id = VAR_21->fbtp_id;
    break;
   }
  }
 }
 else {





  VAR_19->fbtp_id = FUNC_14(VAR_9, VAR_12, VAR_13, VAR_4, VAR_2, VAR_19);
  VAR_17 = 0;
 }

 VAR_19->fbtp_patchpoint = VAR_22;
 VAR_19->fbtp_ctl = VAR_11;
 VAR_19->fbtp_loadcnt = VAR_11->mod_loadcnt;
 VAR_19->fbtp_rval = VAR_1;
 VAR_19->fbtp_savedval = VAR_25;
 VAR_19->fbtp_patchval = VAR_5;
 VAR_19->fbtp_currentval = 0;
 VAR_19->fbtp_hashnext = VAR_10[FUNC_1(VAR_22)];
 VAR_10[FUNC_1(VAR_22)] = VAR_19;

 if (VAR_17)
  FUNC_16(((void*)0), VAR_19->fbtp_id, VAR_19);
 VAR_17=0;

 VAR_18 = FUNC_15(VAR_9, VAR_12, VAR_13, VAR_6);

 if (VAR_18 != 0) {






  VAR_20 = FUNC_13 (VAR_9, VAR_18);
  FUNC_0(VAR_20 != ((void*)0));
  for (; VAR_20 != ((void*)0); VAR_20 = VAR_20->fbtp_next) {
   if (VAR_20->fbtp_currentval == VAR_20->fbtp_patchval)
    VAR_17++;
   if(VAR_20->fbtp_next == ((void*)0))
    break;
  }
 }
 else {
  VAR_17 = 0;
  VAR_20 = ((void*)0);
 }






 VAR_22 = VAR_23 + 1;
again:
 if (VAR_22 >= VAR_24)
  return;
 if (((uintptr_t)VAR_22 & 0x3) == 0) {
  machine_inst_t *VAR_28 = *(machine_inst_t **)(void *)VAR_22;

  if (VAR_28 >= (machine_inst_t *)VAR_14 && VAR_28 < VAR_24) {

   VAR_22++;
   goto again;
  }
 }




 VAR_25 = *VAR_22;


 if (FUNC_9(VAR_25)) {
  if (!VAR_20)
   FUNC_18("dtrace: fbt: No return probe for %s, walked to next routine at %08x\n",VAR_13,(unsigned)VAR_22);
  return;
 }




 if (FUNC_5(VAR_25)) {
  uint32_t VAR_29 = FUNC_21((uint32_t) VAR_22);
  if (VAR_29 < (uint32_t) VAR_24)
   VAR_24 = (machine_inst_t*) VAR_29;
 }
 if ((VAR_22+1) < VAR_24 && FUNC_2(*VAR_22,*(VAR_22+1))) {
  uint32_t VAR_30 = FUNC_20((uint32_t) VAR_22);
  if (VAR_30 < (uint32_t) VAR_24)
   VAR_24 = (machine_inst_t*) VAR_30;
 }


 if (!FUNC_7(VAR_25) &&
     !FUNC_8(VAR_25) &&
     !FUNC_3(VAR_25,*(VAR_22+1))) {
  VAR_22++;
  if (FUNC_12(VAR_25,1) == 4)
   VAR_22++;
  goto again;
 }

 if (FUNC_7(VAR_25)) {
  if (VAR_27 != FUNC_11(VAR_25)) {



   FUNC_18("dtrace: fbt: No return probe for %s, popped regs don't match at %08x\n",VAR_13,(unsigned)VAR_22);
   return;
  }
 } else {

  for (VAR_16 = 0; (VAR_16 < 4) && (VAR_22 < VAR_24); VAR_16++, VAR_22++) {
   VAR_25 = *VAR_22;
   if (FUNC_4(VAR_25))
    break;
   if (FUNC_12(VAR_25,1) == 4)
    VAR_22++;
  }

  if (!FUNC_4(VAR_25))
   return;
 }





 VAR_19 = FUNC_17(sizeof(fbt_probe_t), VAR_7);
 VAR_19->fbtp_next = ((void*)0);
 FUNC_19( (char *)&(VAR_19->fbtp_name), VAR_13, VAR_8 );

 if (VAR_20 == ((void*)0)) {
  VAR_19->fbtp_id = FUNC_14(VAR_9, VAR_12,
      VAR_13, VAR_6, VAR_3, VAR_19);
 } else {
  VAR_20->fbtp_next = VAR_19;
  VAR_19->fbtp_id = VAR_20->fbtp_id;
 }

 VAR_20 = VAR_19;
 VAR_19->fbtp_patchpoint = VAR_22;
 VAR_19->fbtp_ctl = VAR_11;
 VAR_19->fbtp_loadcnt = VAR_11->mod_loadcnt;

 FUNC_0(FUNC_7(VAR_25) || FUNC_4(VAR_25));
 VAR_19->fbtp_rval = VAR_0;
 VAR_19->fbtp_roffset =
     (uintptr_t) ((uint8_t*) VAR_22 - (uint8_t *)VAR_14);
 VAR_19->fbtp_savedval = VAR_25;
 VAR_19->fbtp_patchval = VAR_5;
 VAR_19->fbtp_currentval = 0;
 VAR_19->fbtp_hashnext = VAR_10[FUNC_1(VAR_22)];
 VAR_10[FUNC_1(VAR_22)] = VAR_19;

 if (VAR_17)
  FUNC_16(((void*)0), VAR_19->fbtp_id, VAR_19);

 VAR_22++;
 goto again;
}
