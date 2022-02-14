
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {int qif_maxclasses; int * qif_groups; int * qif_class_tbl; int qif_maxslots; int * qif_ifq; } ;
struct qfq_group {int dummy; } ;
struct qfq_class {int dummy; } ;
struct ifnet {int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct qfq_if*,int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct qfq_if*) ;
 int VAR_10 ;
 struct qfq_if* FUNC_6 (int ) ;
 struct qfq_if* FUNC_7 (int ) ;
 int FUNC_8 (int ,struct qfq_if*) ;

struct qfq_if *
FUNC_9(struct ifnet *VAR_11, int VAR_12)
{
 struct qfq_if *VAR_13;

 VAR_13 = (VAR_12 == VAR_4) ? FUNC_6(VAR_10) : FUNC_7(VAR_10);
 if (VAR_13 == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_13, VAR_9);
 VAR_13->qif_ifq = &VAR_11->if_snd;

 VAR_13->qif_maxclasses = VAR_0;
 VAR_13->qif_maxslots = VAR_7;

 if ((VAR_13->qif_class_tbl = FUNC_1(sizeof (struct qfq_class *) *
     VAR_13->qif_maxclasses, VAR_3, VAR_4|VAR_5)) == ((void*)0)) {
  FUNC_4(VAR_2, "%s: %s unable to allocate class table array\n",
      FUNC_3(VAR_11), FUNC_5(VAR_13));
  goto error;
 }

 if ((VAR_13->qif_groups = FUNC_1(sizeof (struct qfq_group *) *
     (VAR_6 + 1), VAR_3, VAR_4|VAR_5)) == ((void*)0)) {
  FUNC_4(VAR_2, "%s: %s unable to allocate group array\n",
      FUNC_3(VAR_11), FUNC_5(VAR_13));
  goto error;
 }

 if (VAR_8) {
  FUNC_4(VAR_1, "%s: %s scheduler allocated\n",
      FUNC_3(VAR_11), FUNC_5(VAR_13));
 }

 return (VAR_13);

error:
 if (VAR_13->qif_class_tbl != ((void*)0)) {
  FUNC_0(VAR_13->qif_class_tbl, VAR_3);
  VAR_13->qif_class_tbl = ((void*)0);
 }
 if (VAR_13->qif_groups != ((void*)0)) {
  FUNC_0(VAR_13->qif_groups, VAR_3);
  VAR_13->qif_groups = ((void*)0);
 }
 FUNC_8(VAR_10, VAR_13);

 return (((void*)0));
}
