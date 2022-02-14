
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct qfq_if {int * qif_bitmaps; int qif_V; } ;
struct qfq_group {int qfg_F; int qfg_index; int qfg_S; } ;
typedef scalar_t__ pktsched_bitmap_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct qfq_group* FUNC_1 (struct qfq_if*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static inline u_int32_t
FUNC_3(struct qfq_if *VAR_2, struct qfq_group *VAR_3)
{

 u_int32_t VAR_4 = FUNC_2(VAR_3->qfg_S, VAR_2->qif_V);
 pktsched_bitmap_t VAR_5 = FUNC_0(VAR_2->qif_bitmaps[VAR_1],
     VAR_3->qfg_index);
 struct qfq_group *VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_2, VAR_5);
  if (FUNC_2(VAR_3->qfg_F, VAR_6->qfg_F))
   VAR_4 |= VAR_0;
 }

 return (VAR_4);
}
