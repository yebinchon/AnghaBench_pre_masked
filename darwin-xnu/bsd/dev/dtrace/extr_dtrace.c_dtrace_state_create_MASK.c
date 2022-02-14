
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int minor_t ;
typedef int major_t ;
struct TYPE_7__ {int dcr_visible; int dcr_action; int * dcr_cred; } ;
struct TYPE_6__ {TYPE_3__* dtvs_state; } ;
struct TYPE_8__ {TYPE_2__ dts_cred; scalar_t__* dts_options; TYPE_1__ dts_vstate; void* dts_deadman; void* dts_cleaner; scalar_t__ dts_buf_over_limit; void* dts_aggbuffer; void* dts_buffer; int dts_dev; int dts_aggid_arena; scalar_t__ dts_epid; } ;
typedef TYPE_3__ dtrace_state_t ;
typedef scalar_t__ dtrace_optval_t ;
typedef int dtrace_buffer_t ;
typedef int dev_t ;
typedef int cred_t ;
typedef int c ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t VAR_20 ;
 scalar_t__ VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int *,int ) ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_49 ;
 int FUNC_4 () ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 int VAR_52 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 TYPE_3__* FUNC_6 (int) ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 int FUNC_14 (char*,void*,int ,int,int *,int *,int *,int ,int) ;

__attribute__((used)) static int
FUNC_15(dev_t *VAR_63, cred_t *VAR_64, dtrace_state_t **VAR_65)
{
 minor_t VAR_66;
 major_t VAR_67;
 char VAR_68[30];
 dtrace_state_t *VAR_69;
 dtrace_optval_t *VAR_70;
 int VAR_71 = (int)VAR_38 * sizeof (dtrace_buffer_t), VAR_72;

 FUNC_0(&VAR_55, VAR_37);
 FUNC_0(&VAR_48, VAR_37);


 *VAR_65 = ((void*)0);

 if (VAR_63 != ((void*)0)) {
  VAR_66 = FUNC_8(*VAR_63);
 }
 else {
  VAR_66 = VAR_34 - 1;
 }

 VAR_69 = FUNC_6(VAR_66);
 if (((void*)0) == VAR_69) {
  FUNC_12("dtrace_open: couldn't acquire minor number %d. This usually means that too many DTrace clients are in use at the moment", VAR_66);
  return (VAR_35);
 }

 VAR_69->dts_epid = VAR_33 + 1;

 (void) FUNC_13(VAR_68, sizeof (VAR_68), "dtrace_aggid_%d", VAR_66);
 VAR_69->dts_aggid_arena = FUNC_14(VAR_68, (void *)1, VAR_45, 1,
     ((void*)0), ((void*)0), ((void*)0), 0, VAR_47 | VAR_46);

 if (VAR_63 != ((void*)0)) {
  VAR_67 = FUNC_7(*VAR_63);
 } else {
  VAR_67 = FUNC_3(VAR_52);
 }

 VAR_69->dts_dev = FUNC_11(VAR_67, VAR_66);

 if (VAR_63 != ((void*)0))
  *VAR_63 = VAR_69->dts_dev;







 VAR_69->dts_buffer = FUNC_10(VAR_71, VAR_36);
 VAR_69->dts_aggbuffer = FUNC_10(VAR_71, VAR_36);
 VAR_69->dts_buf_over_limit = 0;
 VAR_69->dts_cleaner = VAR_1;
 VAR_69->dts_deadman = VAR_1;
 VAR_69->dts_vstate.dtvs_state = VAR_69;

 for (VAR_72 = 0; VAR_72 < VAR_12; VAR_72++)
  VAR_69->dts_options[VAR_72] = VAR_19;




 VAR_70 = VAR_69->dts_options;
 VAR_70[VAR_4] = VAR_5;
 VAR_70[VAR_6] = VAR_7;
 VAR_70[VAR_13] = VAR_56;
 VAR_70[VAR_14] = VAR_57;
 VAR_70[VAR_9] = (dtrace_optval_t)VAR_21;
 VAR_70[VAR_17] = VAR_60;
 VAR_70[VAR_15] = VAR_58;
 VAR_70[VAR_20] = VAR_62;
 VAR_70[VAR_8] = VAR_51;
 VAR_70[VAR_2] = VAR_49;
 VAR_70[VAR_18] = VAR_61;
 VAR_70[VAR_16] = VAR_59;
 VAR_70[VAR_10] = VAR_53;
 VAR_70[VAR_11] = VAR_54;
 VAR_70[VAR_3] = VAR_50;
 if (VAR_64 == ((void*)0) || FUNC_1(VAR_64, VAR_39, VAR_0)) {
  VAR_69->dts_cred.dcr_visible = VAR_29;
  VAR_69->dts_cred.dcr_action = VAR_22;
 }
 else {







  FUNC_2(VAR_64);
  VAR_69->dts_cred.dcr_cred = VAR_64;





  if (FUNC_1(VAR_64, VAR_42, VAR_0) ||
      FUNC_1(VAR_64, VAR_41, VAR_0)) {
   VAR_69->dts_cred.dcr_action |= VAR_24;
  }







  if (FUNC_1(VAR_64, VAR_42, VAR_0)) {
   if (FUNC_1(VAR_64, VAR_43, VAR_0)) {
    VAR_69->dts_cred.dcr_visible |=
        VAR_30;

    VAR_69->dts_cred.dcr_action |=
        VAR_26;
   }

   if (FUNC_1(VAR_64, VAR_44, VAR_0)) {
    VAR_69->dts_cred.dcr_visible |=
        VAR_31;

    VAR_69->dts_cred.dcr_action |=
        VAR_27;
   }
   VAR_69->dts_cred.dcr_action |=
    VAR_28;
  }







  if (FUNC_1(VAR_64, VAR_40, VAR_0)) {





   VAR_69->dts_cred.dcr_visible |= VAR_32 |
       VAR_30 | VAR_31;

   VAR_69->dts_cred.dcr_action |= VAR_23 |
       VAR_24;




   if (FUNC_1(VAR_64, VAR_43, VAR_0))
    VAR_69->dts_cred.dcr_action |=
        VAR_26;





   if (FUNC_1(VAR_64, VAR_44, VAR_0))
    VAR_69->dts_cred.dcr_action |=
        VAR_27;
   VAR_69->dts_cred.dcr_action |=
    VAR_28;
  }







  if (FUNC_1(VAR_64, VAR_41, VAR_0)) {
   if (FUNC_1(VAR_64, VAR_43, VAR_0))
    VAR_69->dts_cred.dcr_action |=
        VAR_26;

   if (FUNC_1(VAR_64, VAR_44, VAR_0))
    VAR_69->dts_cred.dcr_action |=
        VAR_27;
  }
 }


 *VAR_65 = VAR_69;
 return(0);
}
