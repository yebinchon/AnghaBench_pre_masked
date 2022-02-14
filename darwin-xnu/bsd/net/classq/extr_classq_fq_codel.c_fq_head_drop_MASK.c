
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct ifclassq {int dummy; } ;
struct TYPE_10__ {scalar_t__ pktsched_ptype; } ;
typedef TYPE_1__ pktsched_pkt_t ;
typedef int fq_t ;
struct TYPE_11__ {struct ifclassq* fqs_ifq; } ;
typedef TYPE_2__ fq_if_t ;


 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*,int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int **,scalar_t__**,int *,int *,int *,int *) ;

void
FUNC_7(fq_if_t *VAR_2, fq_t *VAR_3)
{
 pktsched_pkt_t VAR_4;
 uint32_t *VAR_5;
 uint64_t *VAR_6;
 struct ifclassq *VAR_7 = VAR_2->fqs_ifq;

 FUNC_2(&VAR_4);
 if (FUNC_3(VAR_2, VAR_3, &VAR_4) == ((void*)0))
  return;

 FUNC_6(&VAR_4, &VAR_5, &VAR_6, ((void*)0), ((void*)0),
     ((void*)0), ((void*)0));

 *VAR_6 = 0;
 if (VAR_4.pktsched_ptype == VAR_1)
  *VAR_5 &= ~VAR_0;

 FUNC_1(VAR_7, 1, FUNC_5(&VAR_4));
 FUNC_0(VAR_7);
 FUNC_4(&VAR_4);
}
