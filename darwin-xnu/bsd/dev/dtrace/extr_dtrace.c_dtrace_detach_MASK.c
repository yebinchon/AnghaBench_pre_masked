
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_toxrange_t ;
struct TYPE_4__ {scalar_t__ dts_necbs; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_provider_id_t ;
typedef int dtrace_probe_t ;
typedef int dtrace_anon_t ;
typedef int dev_info_t ;
typedef int ddi_detach_cmd_t ;
typedef int cpu_setup_func_t ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 () ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 int * VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_6 (TYPE_1__*) ;
 int * VAR_36 ;
 int * VAR_37 ;
 int * VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_41 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(dev_info_t *VAR_42, ddi_detach_cmd_t VAR_43)
{
 dtrace_state_t *VAR_44;

 switch (VAR_43) {
 case 129:
  break;

 case 128:
  return (VAR_1);

 default:
  return (VAR_0);
 }

 FUNC_11(&VAR_3);
 FUNC_11(&VAR_32);
 FUNC_11(&VAR_25);

 FUNC_0(VAR_29 == 0);

 if (VAR_17 > 0) {
  FUNC_12(&VAR_25);
  FUNC_12(&VAR_32);
  FUNC_12(&VAR_3);
  return (VAR_0);
 }

 if (FUNC_7((dtrace_provider_id_t)VAR_31) != 0) {
  FUNC_12(&VAR_25);
  FUNC_12(&VAR_32);
  FUNC_12(&VAR_3);
  return (VAR_0);
 }

 VAR_31 = ((void*)0);

 if ((VAR_44 = FUNC_4()) != ((void*)0)) {





  FUNC_0(VAR_44->dts_necbs == 0);
  FUNC_6(VAR_44);





  (void) FUNC_8(VAR_2);
 }

 FUNC_1(&VAR_4, sizeof (dtrace_anon_t));
 FUNC_14((cpu_setup_func_t *)VAR_11, ((void*)0));
 VAR_10 = ((void*)0);
 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_12 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_24 = ((void*)0);
 VAR_23 = ((void*)0);
 VAR_26 = ((void*)0);
 VAR_27 = ((void*)0);

 FUNC_12(&VAR_3);

 if (VAR_22) {
  FUNC_10(VAR_20, VAR_21);
  VAR_20 = ((void*)0);
 }

 FUNC_10(VAR_30, VAR_28 * sizeof (dtrace_probe_t *));
 VAR_30 = ((void*)0);
 VAR_28 = 0;

 FUNC_5(VAR_36);
 FUNC_5(VAR_9);
 FUNC_5(VAR_7);
 FUNC_5(VAR_6);
 FUNC_5(VAR_8);
 VAR_36 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_6 = ((void*)0);
 VAR_8 = ((void*)0);

 FUNC_9(VAR_35);
 FUNC_15(VAR_5);

 if (VAR_38 != ((void*)0)) {
  FUNC_10(VAR_38,
      VAR_40 * sizeof (dtrace_toxrange_t));
  VAR_38 = ((void*)0);
  VAR_39 = 0;
  VAR_40 = 0;
 }

 FUNC_2(VAR_16, ((void*)0));
 VAR_16 = ((void*)0);

 FUNC_3(&VAR_34);

 FUNC_0(VAR_41 == 0);
 FUNC_0(VAR_29 == 0);
 FUNC_0(VAR_33 == ((void*)0));

 FUNC_12(&VAR_25);
 FUNC_12(&VAR_32);
 return (VAR_1);
}
