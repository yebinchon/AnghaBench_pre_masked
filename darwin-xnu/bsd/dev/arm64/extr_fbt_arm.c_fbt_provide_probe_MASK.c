
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
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
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int) ;
 TYPE_1__* FUNC_9 (int ,scalar_t__) ;
 void* FUNC_10 (int ,char const*,char const*,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ,char const*,char const*,int ) ;
 int FUNC_12 (int *,void*,TYPE_1__*) ;
 int VAR_9 ;
 void** VAR_10 ;
 TYPE_1__* FUNC_13 (int,int ) ;
 int FUNC_14 (char*,char const*,...) ;
 int FUNC_15 (char*,char const*,int ) ;

void
FUNC_16(struct modctl *VAR_11, const char *VAR_12, const char* VAR_13, machine_inst_t* VAR_14, machine_inst_t *VAR_15)
{
        int VAR_16 = 0;
 dtrace_id_t VAR_17;

 fbt_probe_t *VAR_18, *VAR_19, *VAR_20;
 machine_inst_t *VAR_21, *VAR_22 = ((void*)0), *VAR_23, VAR_24;
 int VAR_25, VAR_26;




 if (!VAR_14 || !VAR_15 || VAR_15 < VAR_14) {
  FUNC_14("dtrace: %s has an invalid address\n", VAR_13);
  return;
 }




 VAR_25 = 0;
 VAR_26 = -1;
 VAR_23 = (machine_inst_t *)VAR_15;

 FUNC_8(sizeof(*VAR_21) == 4);

 for (VAR_21 = VAR_14, VAR_24 = 0; VAR_21 < VAR_15; VAR_21++)
 {






  VAR_24 = *VAR_21;
  if (FUNC_6(VAR_24)) {
   VAR_25 = 1;
   VAR_22 = VAR_21;
  }

  if (VAR_25 && (FUNC_3(VAR_24)))

   break;
  if (FUNC_7(VAR_24))
   break;
  if (FUNC_5(VAR_24))
   break;
 }

 if (!(VAR_25 && (FUNC_3(VAR_24)))) {
  return;
 }

 VAR_17 = FUNC_11(VAR_9, VAR_12, VAR_13, VAR_4);
 VAR_18 = FUNC_13(sizeof(fbt_probe_t), VAR_7);
 VAR_18->fbtp_next = ((void*)0);
 FUNC_15( (char *)&(VAR_18->fbtp_name), VAR_13, VAR_8 );

 if (VAR_17 != 0) {
  VAR_20 = FUNC_9 (VAR_9, VAR_17);
  FUNC_0 (VAR_20 != ((void*)0));
  for(; VAR_20 != ((void*)0); VAR_20 = VAR_20->fbtp_next) {
   if (VAR_20->fbtp_currentval == VAR_20->fbtp_patchval)
    VAR_16++;

   if (VAR_20->fbtp_next == ((void*)0)) {
    VAR_20->fbtp_next = VAR_18;
    VAR_18->fbtp_id = VAR_20->fbtp_id;
    break;
   }
  }
 }
 else {





  VAR_18->fbtp_id = FUNC_10(VAR_9, VAR_12, VAR_13, VAR_4, VAR_2, VAR_18);
  VAR_16 = 0;
 }

 VAR_18->fbtp_patchpoint = VAR_21;
 VAR_18->fbtp_ctl = VAR_11;
 VAR_18->fbtp_loadcnt = VAR_11->mod_loadcnt;
 VAR_18->fbtp_rval = VAR_0;
 VAR_18->fbtp_savedval = VAR_24;
 VAR_18->fbtp_patchval = VAR_5;
 VAR_18->fbtp_currentval = 0;
 VAR_18->fbtp_hashnext = VAR_10[FUNC_1(VAR_21)];
 VAR_10[FUNC_1(VAR_21)] = VAR_18;

 if (VAR_16)
  FUNC_12(((void*)0), VAR_18->fbtp_id, VAR_18);
 VAR_16=0;

 VAR_17 = FUNC_11(VAR_9, VAR_12, VAR_13, VAR_6);

 if (VAR_17 != 0) {






  VAR_19 = FUNC_9 (VAR_9, VAR_17);
  FUNC_0(VAR_19 != ((void*)0));
  for (; VAR_19 != ((void*)0); VAR_19 = VAR_19->fbtp_next) {
   if (VAR_19->fbtp_currentval == VAR_19->fbtp_patchval)
    VAR_16++;
   if(VAR_19->fbtp_next == ((void*)0))
    break;
  }
 }
 else {
  VAR_16 = 0;
  VAR_19 = ((void*)0);
 }






 VAR_21 = VAR_22 + 1;
again:
 if (VAR_21 >= VAR_23)
  return;






 VAR_24 = *VAR_21;


 if (FUNC_6(VAR_24)) {
  if (!VAR_19)
   FUNC_14("dtrace: fbt: No return probe for %s, walked to next routine at 0x%016llx\n",VAR_13,(uint64_t)VAR_21);
  return;
 }
 if (!FUNC_5(VAR_24)) {
  VAR_21++;
  goto again;
 }


 VAR_21++;


 for (; VAR_21 < VAR_23; VAR_21++) {
  VAR_24 = *VAR_21;
  if (FUNC_7(VAR_24))
   break;
  if (FUNC_4(VAR_24)) {
   machine_inst_t *VAR_27 = VAR_21 + FUNC_2(VAR_24);




   if (VAR_27 >= VAR_23 || VAR_27 < VAR_14)
    break;
  }
 }

 if (!FUNC_7(VAR_24) && !FUNC_4(VAR_24))
  return;

 VAR_18 = FUNC_13(sizeof(fbt_probe_t), VAR_7);
 VAR_18->fbtp_next = ((void*)0);
 FUNC_15( (char *)&(VAR_18->fbtp_name), VAR_13, VAR_8 );

 if (VAR_19 == ((void*)0)) {
  VAR_18->fbtp_id = FUNC_10(VAR_9, VAR_12,
      VAR_13, VAR_6, VAR_3, VAR_18);
 } else {
  VAR_19->fbtp_next = VAR_18;
  VAR_18->fbtp_id = VAR_19->fbtp_id;
 }

 VAR_19 = VAR_18;
 VAR_18->fbtp_patchpoint = VAR_21;
 VAR_18->fbtp_ctl = VAR_11;
 VAR_18->fbtp_loadcnt = VAR_11->mod_loadcnt;

 FUNC_0(FUNC_7(VAR_24));
 VAR_18->fbtp_rval = VAR_1;
 VAR_18->fbtp_roffset = (uintptr_t) ((uint8_t*) VAR_21 - (uint8_t *)VAR_14);
 VAR_18->fbtp_savedval = VAR_24;
 VAR_18->fbtp_patchval = VAR_5;
 VAR_18->fbtp_currentval = 0;
 VAR_18->fbtp_hashnext = VAR_10[FUNC_1(VAR_21)];
 VAR_10[FUNC_1(VAR_21)] = VAR_18;

 if (VAR_16)
  FUNC_12(((void*)0), VAR_18->fbtp_id, VAR_18);

 VAR_21++;
 goto again;
}
