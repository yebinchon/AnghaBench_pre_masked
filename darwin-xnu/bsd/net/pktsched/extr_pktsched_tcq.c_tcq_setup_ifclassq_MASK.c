
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcq_if {int dummy; } ;
struct tcq_class {int dummy; } ;
struct ifnet {int dummy; } ;
struct ifclassq {scalar_t__ ifcq_type; TYPE_1__* ifcq_disc_slots; int * ifcq_disc; struct ifnet* ifcq_ifp; } ;
typedef int classq_pkt_type_t ;
struct TYPE_2__ {size_t qid; struct tcq_class* cl; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int) ;
 int VAR_24 ;
 int FUNC_3 (struct ifclassq*,int ,struct tcq_if*,int ,int *,int ,int *,int *,int ) ;
 int FUNC_4 (struct tcq_if*,int,int,int,size_t,struct tcq_class**,int ) ;
 struct tcq_if* FUNC_5 (struct ifnet*,int ) ;
 int VAR_25 ;
 int FUNC_6 (struct tcq_if*) ;
 int VAR_26 ;
 int VAR_27 ;

int
FUNC_7(struct ifclassq *VAR_28, u_int32_t VAR_29,
    classq_pkt_type_t VAR_30)
{
 struct ifnet *VAR_31 = VAR_28->ifcq_ifp;
 struct tcq_class *VAR_32, *VAR_33, *VAR_34, *VAR_35;
 struct tcq_if *VAR_36;
 u_int32_t VAR_37 = 0, VAR_38 = 0;
 int VAR_39 = 0;

 FUNC_0(VAR_28);
 FUNC_2(VAR_28->ifcq_disc == ((void*)0));
 FUNC_2(VAR_28->ifcq_type == VAR_6);

 if (VAR_29 & VAR_5)
  VAR_38 |= VAR_23;
 if (VAR_29 & VAR_3)
  VAR_38 |= VAR_20;
 if (VAR_29 & VAR_4)
  VAR_38 |= VAR_21;
 if (VAR_29 & VAR_2)
  VAR_38 |= VAR_19;

 VAR_36 = FUNC_5(VAR_31, VAR_1);
 if (VAR_36 == ((void*)0))
  return (VAR_0);

 if ((VAR_37 = FUNC_1(VAR_28)) == 0)
  VAR_37 = VAR_24;

 if ((VAR_39 = FUNC_4(VAR_36, 0, VAR_37,
     VAR_38 | VAR_22, VAR_10, &VAR_32, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_39 = FUNC_4(VAR_36, 1, VAR_37,
     VAR_38 | VAR_18, VAR_9, &VAR_33, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_39 = FUNC_4(VAR_36, 2, VAR_37,
     VAR_38 | VAR_22, VAR_16, &VAR_34, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_39 = FUNC_4(VAR_36, 3, VAR_37,
     VAR_38, VAR_17, &VAR_35, VAR_30)) != 0)
  goto cleanup;

 VAR_39 = FUNC_3(VAR_28, VAR_7, VAR_36,
     VAR_26, ((void*)0), VAR_25,
     ((void*)0), ((void*)0), VAR_27);


 if (VAR_39 == 0) {

  VAR_28->ifcq_disc_slots[VAR_11].qid = VAR_10;
  VAR_28->ifcq_disc_slots[VAR_11].cl = VAR_32;

  VAR_28->ifcq_disc_slots[VAR_10].qid = VAR_10;
  VAR_28->ifcq_disc_slots[VAR_10].cl = VAR_32;


  VAR_28->ifcq_disc_slots[VAR_9].qid = VAR_9;
  VAR_28->ifcq_disc_slots[VAR_9].cl = VAR_33;

  VAR_28->ifcq_disc_slots[VAR_14].qid = VAR_9;
  VAR_28->ifcq_disc_slots[VAR_14].cl = VAR_33;

  VAR_28->ifcq_disc_slots[VAR_13].qid = VAR_9;
  VAR_28->ifcq_disc_slots[VAR_13].cl = VAR_33;


  VAR_28->ifcq_disc_slots[VAR_8].qid = VAR_16;
  VAR_28->ifcq_disc_slots[VAR_8].cl = VAR_34;

  VAR_28->ifcq_disc_slots[VAR_15].qid = VAR_16;
  VAR_28->ifcq_disc_slots[VAR_15].cl = VAR_34;

  VAR_28->ifcq_disc_slots[VAR_16].qid = VAR_16;
  VAR_28->ifcq_disc_slots[VAR_16].cl = VAR_34;


  VAR_28->ifcq_disc_slots[VAR_17].qid = VAR_17;
  VAR_28->ifcq_disc_slots[VAR_17].cl = VAR_35;

  VAR_28->ifcq_disc_slots[VAR_12].qid = VAR_17;
  VAR_28->ifcq_disc_slots[VAR_12].cl = VAR_35;
 }

cleanup:
 if (VAR_39 != 0)
  (void) FUNC_6(VAR_36);

 return (VAR_39);
}
