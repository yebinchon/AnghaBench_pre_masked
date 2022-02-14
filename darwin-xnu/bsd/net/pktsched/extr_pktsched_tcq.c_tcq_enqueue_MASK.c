
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tcq_if {struct tcq_class* tif_default; struct ifclassq* tif_ifq; } ;
struct tcq_class {int cl_dropcnt; int cl_q; struct tcq_if* cl_tif; } ;
struct pf_mtag {int dummy; } ;
struct ifclassq {int dummy; } ;
struct TYPE_5__ {scalar_t__ pktsched_ptype; } ;
typedef TYPE_1__ pktsched_pkt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*,int,int) ;
 int FUNC_2 (struct ifclassq*,int) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct tcq_class*,TYPE_1__*,struct pf_mtag*) ;
 struct tcq_class* FUNC_10 (struct tcq_if*,int ) ;

int
FUNC_11(struct tcq_if *VAR_4, struct tcq_class *VAR_5, pktsched_pkt_t *VAR_6,
    struct pf_mtag *VAR_7)
{
 struct ifclassq *VAR_8 = VAR_4->tif_ifq;
 int VAR_9, VAR_10;

 FUNC_4(VAR_8);
 FUNC_6(VAR_5 == ((void*)0) || VAR_5->cl_tif == VAR_4);

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_10(VAR_4, 0);
  if (VAR_5 == ((void*)0)) {
   VAR_5 = VAR_4->tif_default;
   if (VAR_5 == ((void*)0)) {
    FUNC_0(VAR_8);
    return (VAR_0);
   }
  }
 }

 FUNC_6(VAR_6->pktsched_ptype == FUNC_8(&VAR_5->cl_q));
 VAR_9 = FUNC_7(VAR_6);

 VAR_10 = FUNC_9(VAR_5, VAR_6, VAR_7);
 if ((VAR_10 != 0) && (VAR_10 != VAR_3)) {
  FUNC_6(VAR_10 == VAR_0 ||
      VAR_10 == VAR_1 ||
      VAR_10 == VAR_2);
  FUNC_5(&VAR_5->cl_dropcnt, 1, VAR_9);
  FUNC_1(VAR_8, 1, VAR_9);
  return (VAR_10);
 }
 FUNC_3(VAR_8);
 FUNC_2(VAR_8, VAR_9);


 return (VAR_10);
}
