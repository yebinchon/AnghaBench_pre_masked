
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_state_t ;
typedef scalar_t__ dtrace_provider_id_t ;
typedef int dtrace_enabling_t ;
typedef int dtrace_dstate_percpu_t ;
typedef int dev_info_t ;
typedef int cpu_setup_func_t ;
struct TYPE_2__ {int dta_beganon; int * dta_enabling; int * dta_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_1__ VAR_24 ;
 int FUNC_3 () ;
 int VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 int * VAR_37 ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ,int ,int ,int ) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int * VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 void* FUNC_7 (scalar_t__,int *,int *,char*,int,int *) ;
 int VAR_52 ;
 void* VAR_53 ;
 void* VAR_54 ;
 void* VAR_55 ;
 int * VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_8 (char*,int *,int ,int ,int *,int *,scalar_t__*) ;
 void* VAR_60 ;
 int VAR_61 ;
 int * VAR_62 ;
 int VAR_63 ;
 int FUNC_9 (int *,int *) ;
 int VAR_64 ;
 int VAR_65 ;
 void* VAR_66 ;
 int FUNC_10 (int ) ;
 int VAR_67 ;
 int FUNC_11 (char*,int,int ,int *,int *,int *,int *,int *,int ) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (char*,void*,int ,int,int *,int *,int *,int ,int) ;

__attribute__((used)) static int
FUNC_18(dev_info_t *VAR_68)
{
 dtrace_provider_id_t VAR_69;
 dtrace_state_t *VAR_70 = ((void*)0);
 dtrace_enabling_t *VAR_71;

 FUNC_13(&VAR_12);
 FUNC_13(&VAR_58);
 FUNC_13(&VAR_47);


 VAR_37 = VAR_68;

 VAR_48 = VAR_49;
 VAR_51 = VAR_50;
 VAR_30 = VAR_32;
 VAR_38 = VAR_39;
 VAR_41 = VAR_40;
 VAR_34 = VAR_66;
 VAR_33 = VAR_60;
 VAR_36 = VAR_66;
 VAR_35 = VAR_60;

 FUNC_16((cpu_setup_func_t *)VAR_31, ((void*)0));

 FUNC_1(&VAR_12, VAR_7);

 VAR_25 = FUNC_17("dtrace", (void *)1, VAR_9, 1,
     ((void*)0), ((void*)0), ((void*)0), 0, VAR_11 | VAR_10);

 VAR_63 = FUNC_11("dtrace_state_cache",
     sizeof (dtrace_dstate_percpu_t) * (int)VAR_8, VAR_5,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);

 FUNC_1(&VAR_12, VAR_7);

 VAR_29 = FUNC_6(VAR_65,
     0,
     FUNC_15(VAR_52, VAR_19),
     FUNC_15(VAR_52, VAR_23));

 VAR_27 = FUNC_6(VAR_64,
     FUNC_15(VAR_52, VAR_14),
     FUNC_15(VAR_52, VAR_17),
     FUNC_15(VAR_52, VAR_21));

 VAR_26 = FUNC_6(VAR_64,
     FUNC_15(VAR_52, VAR_13),
     FUNC_15(VAR_52, VAR_16),
     FUNC_15(VAR_52, VAR_20));

 VAR_28 = FUNC_6(VAR_64,
     FUNC_15(VAR_52, VAR_15),
     FUNC_15(VAR_52, VAR_18),
     FUNC_15(VAR_52, VAR_22));

 if (VAR_61 < 1) {
  FUNC_2(VAR_0, "illegal value (%lu) for dtrace_retain_max; "
      "setting to 1", VAR_61);
  VAR_61 = 1;
 }




 FUNC_10(VAR_67);
 (void) FUNC_8("dtrace", &VAR_57,
     VAR_4, 0, &VAR_59, ((void*)0), &VAR_69);

 FUNC_0(VAR_56 != ((void*)0));
 FUNC_0((dtrace_provider_id_t)VAR_56 == VAR_69);


 VAR_53 = FUNC_7((dtrace_provider_id_t)
     VAR_56, ((void*)0), ((void*)0), "BEGIN", 1, ((void*)0));
 VAR_54 = FUNC_7((dtrace_provider_id_t)
     VAR_56, ((void*)0), ((void*)0), "END", 0, ((void*)0));
 VAR_55 = FUNC_7((dtrace_provider_id_t)
     VAR_56, ((void*)0), ((void*)0), "ERROR", 3, ((void*)0));
 FUNC_3();
 FUNC_14(&VAR_12);





 if (VAR_44) {
  FUNC_0(VAR_42 == ((void*)0));
  VAR_42 =
      FUNC_12(VAR_43, VAR_6);
  VAR_45 = 0;
 }
 if (VAR_24.dta_enabling != ((void*)0)) {
  FUNC_0(VAR_62 == VAR_24.dta_enabling);




  if (VAR_46 == VAR_3) {
   VAR_46 = VAR_2;
  }

  FUNC_5(((void*)0));
  VAR_70 = VAR_24.dta_state;
  FUNC_14(&VAR_47);
  FUNC_14(&VAR_58);

  FUNC_13(&VAR_12);
  FUNC_13(&VAR_58);
  FUNC_13(&VAR_47);

  if ((VAR_71 = VAR_24.dta_enabling) != ((void*)0))
   (void) FUNC_4(VAR_71, ((void*)0), ((void*)0));

  FUNC_14(&VAR_12);
 }

 FUNC_14(&VAR_47);
 FUNC_14(&VAR_58);

 if (VAR_70 != ((void*)0)) {



  (void) FUNC_9(VAR_70, &VAR_24.dta_beganon);
 }

 return (VAR_1);
}
