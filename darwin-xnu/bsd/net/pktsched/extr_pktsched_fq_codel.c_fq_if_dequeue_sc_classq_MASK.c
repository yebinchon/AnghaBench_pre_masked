
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct ifclassq {scalar_t__ ifcq_disc; } ;
typedef int mbuf_svc_class_t ;
struct TYPE_4__ {int * fqs_classq; } ;
typedef TYPE_1__ fq_if_t ;
typedef int fq_if_classq_t ;
typedef int classq_pkt_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int,int ,void**,int *,int *,int *,int ,int *) ;
 size_t FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void *
FUNC_2(struct ifclassq *VAR_2, mbuf_svc_class_t VAR_3,
    classq_pkt_type_t *VAR_4)
{
 void *VAR_5;
 fq_if_t *VAR_6 = (fq_if_t *)VAR_2->ifcq_disc;
 fq_if_classq_t *VAR_7;
 u_int32_t VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_3);
 VAR_7 = &VAR_6->fqs_classq[VAR_8];

 FUNC_0(VAR_6, VAR_7, 1, VAR_0,
     &VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_1, VAR_4);
 return (VAR_5);
}
