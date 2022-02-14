
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int pktsched_pkt_t ;
struct TYPE_17__ {size_t fq_sc_index; int fq_flags; } ;
typedef TYPE_1__ fq_t ;
struct TYPE_18__ {int * fqs_bitmaps; int fqs_ifq; TYPE_3__* fqs_classq; } ;
typedef TYPE_2__ fq_if_t ;
struct TYPE_19__ {int fcl_pri; } ;
typedef TYPE_3__ fq_if_classq_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(fq_if_t *VAR_4, fq_t *VAR_5, u_int32_t *VAR_6,
    u_int32_t *VAR_7)
{
 fq_if_classq_t *VAR_8;
 u_int32_t VAR_9, VAR_10;
 pktsched_pkt_t VAR_11;

 VAR_8 = &VAR_4->fqs_classq[VAR_5->fq_sc_index];
 VAR_9 = VAR_10 = 0;
 FUNC_2(&VAR_11);
 while (FUNC_3(VAR_4, VAR_5, &VAR_11) != ((void*)0)) {
  VAR_9++;
  VAR_10 += FUNC_9(&VAR_11);
  FUNC_8(&VAR_11);
 }
 FUNC_1(VAR_4->fqs_ifq, VAR_9, VAR_10);

 if (VAR_5->fq_flags & VAR_0) {
  FUNC_5(VAR_5, VAR_8, 0);
 } else if (VAR_5->fq_flags & VAR_1) {
  FUNC_6(VAR_4, VAR_8, VAR_5, 0);
 }

 FUNC_4(VAR_4, VAR_8, VAR_5);

 if (FUNC_0(VAR_8)) {
  int VAR_12;
  for (VAR_12 = VAR_2; VAR_12 < VAR_3; VAR_12++) {
   FUNC_7(VAR_8->fcl_pri,
       &VAR_4->fqs_bitmaps[VAR_12]);
  }
 }
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_10;
}
