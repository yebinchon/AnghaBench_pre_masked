
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int fq_t ;
struct TYPE_7__ {int fqs_ifq; } ;
typedef TYPE_1__ fq_if_t ;
struct TYPE_8__ {scalar_t__ flow; int bytes; int packets; int sc; } ;
typedef TYPE_2__ cqrq_purge_sc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_4(fq_if_t *VAR_2, cqrq_purge_sc_t *VAR_3)
{
 fq_t *VAR_4;

 FUNC_0(VAR_2->fqs_ifq);
 VAR_3->packets = VAR_3->bytes = 0;
 FUNC_1(VAR_3->flow != 0);


 VAR_4 = FUNC_2(VAR_2, VAR_3->flow, VAR_3->sc, 0, VAR_0, VAR_1);

 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_2, VAR_4, &VAR_3->packets, &VAR_3->bytes);
}
