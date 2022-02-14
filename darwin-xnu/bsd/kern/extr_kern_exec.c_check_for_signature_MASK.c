
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct image_params {int ip_flags; int ip_csflags; int ip_mac_return; scalar_t__ ip_cs_error; int ip_new_thread; } ;
struct cs_blob {int csb_flags; scalar_t__ csb_platform_binary; int * csb_entitlements_blob; int csb_mem_size; scalar_t__ csb_mem_kaddr; } ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ os_reason_t ;
typedef int * mach_port_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int p_csflags; scalar_t__ p_textvp; char* p_name; int task; int p_textoff; int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,int ,int ,int ,int ) ;


 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int *) ;
 int * FUNC_6 (int const*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_11 (char*,char*,char*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,int ,int ,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_17 (int ,int **) ;
 struct cs_blob* FUNC_18 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_19 (scalar_t__,struct cs_blob*,struct image_params*,int ) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_22(proc_t VAR_30, struct image_params *VAR_31)
{
 mach_port_t VAR_32 = ((void*)0);
 kern_return_t VAR_33 = 129;
 int VAR_34 = VAR_16;
 boolean_t VAR_35 = VAR_19;
 struct cs_blob *VAR_36;
 boolean_t VAR_37 = VAR_19;
 int VAR_38 = (VAR_31->ip_flags & VAR_20);
 int VAR_39 = (VAR_31->ip_flags & VAR_21);
 os_reason_t VAR_40 = VAR_25;






 FUNC_13(VAR_30);
 VAR_30->p_csflags = VAR_31->ip_csflags;
 FUNC_14(VAR_30);


 if(VAR_30->p_csflags & (VAR_9|VAR_10)) {
  FUNC_21(FUNC_8(VAR_30->task), VAR_27);
 }






 if (VAR_31->ip_mac_return != 0) {

  FUNC_2(FUNC_0(VAR_14, VAR_0) | VAR_15,
      VAR_30->p_pid, VAR_24, VAR_17, 0, 0);
  VAR_40 = FUNC_10(VAR_24, VAR_17);
  VAR_34 = VAR_31->ip_mac_return;
  VAR_35 = VAR_27;
  goto done;
 }

 if (VAR_31->ip_cs_error != VAR_25) {
  VAR_40 = VAR_31->ip_cs_error;
  VAR_31->ip_cs_error = VAR_25;
  VAR_34 = VAR_16;
  goto done;
 }



 if (VAR_31->ip_csflags & VAR_12) {
  VAR_34 = 0;
  goto done;
 }





 VAR_33 = FUNC_17(VAR_30->task, &VAR_32);
 if (128 != VAR_33 || !FUNC_1(VAR_32)) {
  VAR_34 = 0;
  if (VAR_37) {
   FUNC_2(FUNC_0(VAR_14, VAR_0) | VAR_15,
       VAR_30->p_pid, VAR_23, VAR_2, 0, 0);
   VAR_40 = FUNC_10(VAR_23, VAR_2);
   VAR_34 = VAR_16;
  }
  goto done;
 }
 VAR_33 = FUNC_3(VAR_32, VAR_30->p_pid);
 switch (VAR_33) {
 case 128:
  VAR_34 = 0;
  break;
 case 129:
  VAR_34 = VAR_16;

  FUNC_2(FUNC_0(VAR_14, VAR_0) | VAR_15,
      VAR_30->p_pid, VAR_23, VAR_1, 0, 0);
  VAR_40 = FUNC_10(VAR_23, VAR_1);
  goto done;
 default:
  VAR_34 = VAR_16;

  FUNC_2(FUNC_0(VAR_14, VAR_0) | VAR_15,
      VAR_30->p_pid, VAR_24, VAR_18, 0, 0);
  VAR_40 = FUNC_10(VAR_24, VAR_18);
  VAR_35 = VAR_27;
  goto done;
 }


 if (VAR_30->p_textvp != VAR_22) {
  VAR_36 = FUNC_18(VAR_30->p_textvp, -1, VAR_30->p_textoff);

  if (VAR_36 != ((void*)0)) {




   if (

                (FUNC_20(VAR_30->p_textvp) == 0 ||
                 FUNC_19(VAR_30->p_textvp, VAR_36, VAR_31, 0) == 0) &&

    (VAR_36->csb_flags & VAR_6) == VAR_5 &&

    FUNC_6((const uint8_t *)VAR_36->csb_mem_kaddr, VAR_36->csb_mem_size,
            VAR_4,
            VAR_3) == ((void*)0) &&

    VAR_36->csb_platform_binary == 0 &&

                VAR_36->csb_entitlements_blob == ((void*)0)) {

    FUNC_13(VAR_30);
    VAR_30->p_csflags |= VAR_12 | VAR_13;
    FUNC_14(VAR_30);

   } else {
    uint8_t VAR_41[VAR_7];
    char VAR_42[VAR_8];
    FUNC_12(VAR_30, VAR_41);
    FUNC_5(VAR_42, VAR_41);
    FUNC_11("ignoring detached code signature on '%s' with cdhash '%s' "
        "because it is invalid, or not a simple adhoc signature.\n",
        VAR_30->p_name, VAR_42);
   }

  }
 }

done:
 if (0 == VAR_34) {



  if (VAR_29 != 0 && FUNC_7(VAR_30)) {
   uint8_t VAR_43[VAR_7];
   char VAR_44[VAR_8];
   FUNC_12(VAR_30, VAR_43);
   FUNC_5(VAR_44, VAR_43);

   FUNC_9(VAR_28, "CS Platform Exec Logging: Executing platform signed binary "
       "'%s' with cdhash %s\n", VAR_30->p_name, VAR_44);
  }
 } else {
  if (!VAR_35)
   VAR_30->p_csflags |= VAR_11;

  if (VAR_39 || VAR_38) {
   FUNC_4(VAR_40 != VAR_25);
   FUNC_15(VAR_30, VAR_30->task, VAR_31->ip_new_thread,
     VAR_26, VAR_40);
   VAR_40 = VAR_25;
   VAR_34 = 0;
  } else {
   FUNC_4(VAR_40 != VAR_25);
   FUNC_16(VAR_30, VAR_26, VAR_40);
   VAR_40 = VAR_25;
  }
 }


 FUNC_4(VAR_40 == VAR_25);
 return VAR_34;
}
