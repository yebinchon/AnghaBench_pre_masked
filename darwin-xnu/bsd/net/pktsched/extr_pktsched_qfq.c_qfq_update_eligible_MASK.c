
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct qfq_if {int* qif_bitmaps; int qif_V; } ;
struct qfq_group {int qfg_S; } ;
typedef int pktsched_bitmap_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct qfq_group* FUNC_0 (struct qfq_if*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qfq_if*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct qfq_if *VAR_3, u_int64_t VAR_4)
{
 pktsched_bitmap_t VAR_5;

 VAR_5 = VAR_3->qif_bitmaps[VAR_2] | VAR_3->qif_bitmaps[VAR_1];
 if (VAR_5) {
  if (!VAR_3->qif_bitmaps[VAR_0]) {
   struct qfq_group *VAR_6;
   VAR_6 = FUNC_0(VAR_3, VAR_5);
   if (FUNC_1(VAR_6->qfg_S, VAR_3->qif_V))
    VAR_3->qif_V = VAR_6->qfg_S;
  }
  FUNC_2(VAR_3, VAR_4);
 }
}
