
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct qfq_if {int dummy; } ;
struct qfq_class {int dummy; } ;
struct ifnet {int dummy; } ;
struct ifclassq {scalar_t__ ifcq_type; TYPE_1__* ifcq_disc_slots; int * ifcq_disc; struct ifnet* ifcq_ifp; } ;
typedef int classq_pkt_type_t ;
struct TYPE_2__ {size_t qid; struct qfq_class* cl; } ;


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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int FUNC_2 (int) ;
 int VAR_24 ;
 int FUNC_3 (struct ifclassq*,int ,struct qfq_if*,int ,int ,int *,int *,int *,int ) ;
 int FUNC_4 (struct qfq_if*,int,int,int,int,size_t,struct qfq_class**,int ) ;
 struct qfq_if* FUNC_5 (struct ifnet*,int ) ;
 int VAR_25 ;
 int FUNC_6 (struct qfq_if*) ;
 int VAR_26 ;
 int VAR_27 ;

int
FUNC_7(struct ifclassq *VAR_28, u_int32_t VAR_29,
    classq_pkt_type_t VAR_30)
{
 struct ifnet *VAR_31 = VAR_28->ifcq_ifp;
 struct qfq_class *VAR_32, *VAR_33, *VAR_34, *VAR_35, *VAR_36;
 struct qfq_class *VAR_37, *VAR_38, *VAR_39, *VAR_40, *VAR_41;
 struct qfq_if *VAR_42;
 u_int32_t VAR_43 = 0, VAR_44 = 0;
 int VAR_45 = 0;

 FUNC_0(VAR_28);
 FUNC_2(VAR_28->ifcq_disc == ((void*)0));
 FUNC_2(VAR_28->ifcq_type == VAR_6);

 if (VAR_29 & VAR_5)
  VAR_44 |= VAR_13;
 if (VAR_29 & VAR_3)
  VAR_44 |= VAR_10;
 if (VAR_29 & VAR_4)
  VAR_44 |= VAR_11;
 if (VAR_29 & VAR_2)
  VAR_44 |= VAR_9;

 VAR_42 = FUNC_5(VAR_31, VAR_1);
 if (VAR_42 == ((void*)0))
  return (VAR_0);

 if ((VAR_43 = FUNC_1(VAR_28)) == 0)
  VAR_43 = VAR_24;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 300, 1200,
     VAR_44 | VAR_12, VAR_17, &VAR_32, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 600, 1400,
     VAR_44 | VAR_12, VAR_16, &VAR_33, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 2400, 600,
     VAR_44 | VAR_8, VAR_15, &VAR_34, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 2700, 600,
     VAR_44 | VAR_12, VAR_20, &VAR_35, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 3000, 400,
     VAR_44 | VAR_12, VAR_19, &VAR_36, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 8000, 1000,
     VAR_44 | VAR_12, VAR_14, &VAR_37, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 15000, 1200,
     VAR_44 | VAR_12, VAR_21, &VAR_38, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 20000, 1400,
     VAR_44 | VAR_12, VAR_22, &VAR_39, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 23000, 200,
     VAR_44 | VAR_12, VAR_23, &VAR_40, VAR_30)) != 0)
  goto cleanup;

 if ((VAR_45 = FUNC_4(VAR_42, VAR_43, 25000, 200,
     VAR_44, VAR_18, &VAR_41, VAR_30)) != 0)
  goto cleanup;

 VAR_45 = FUNC_3(VAR_28, VAR_7, VAR_42,
     VAR_26, VAR_25, ((void*)0),
     ((void*)0), ((void*)0), VAR_27);


 if (VAR_45 == 0) {
  VAR_28->ifcq_disc_slots[VAR_17].qid = VAR_17;
  VAR_28->ifcq_disc_slots[VAR_17].cl = VAR_32;

  VAR_28->ifcq_disc_slots[VAR_16].qid = VAR_16;
  VAR_28->ifcq_disc_slots[VAR_16].cl = VAR_33;

  VAR_28->ifcq_disc_slots[VAR_15].qid = VAR_15;
  VAR_28->ifcq_disc_slots[VAR_15].cl = VAR_34;

  VAR_28->ifcq_disc_slots[VAR_20].qid = VAR_20;
  VAR_28->ifcq_disc_slots[VAR_20].cl = VAR_35;

  VAR_28->ifcq_disc_slots[VAR_19].qid = VAR_19;
  VAR_28->ifcq_disc_slots[VAR_19].cl = VAR_36;

  VAR_28->ifcq_disc_slots[VAR_14].qid = VAR_14;
  VAR_28->ifcq_disc_slots[VAR_14].cl = VAR_37;

  VAR_28->ifcq_disc_slots[VAR_21].qid = VAR_21;
  VAR_28->ifcq_disc_slots[VAR_21].cl = VAR_38;

  VAR_28->ifcq_disc_slots[VAR_22].qid = VAR_22;
  VAR_28->ifcq_disc_slots[VAR_22].cl = VAR_39;

  VAR_28->ifcq_disc_slots[VAR_23].qid = VAR_23;
  VAR_28->ifcq_disc_slots[VAR_23].cl = VAR_40;

  VAR_28->ifcq_disc_slots[VAR_18].qid = VAR_18;
  VAR_28->ifcq_disc_slots[VAR_18].cl = VAR_41;
 }

cleanup:
 if (VAR_45 != 0)
  (void) FUNC_6(VAR_42);

 return (VAR_45);
}
