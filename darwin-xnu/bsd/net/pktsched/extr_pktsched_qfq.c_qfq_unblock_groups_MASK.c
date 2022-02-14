
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct qfq_if {int * qif_bitmaps; } ;
struct qfq_group {int qfg_F; } ;
typedef int pktsched_bitmap_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int) ;
 struct qfq_group* FUNC_1 (struct qfq_if*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct qfq_if*,int,int ,size_t) ;

__attribute__((used)) static inline void
FUNC_4(struct qfq_if *VAR_4, int VAR_5, u_int64_t VAR_6)
{
 pktsched_bitmap_t VAR_7 = FUNC_0(VAR_4->qif_bitmaps[VAR_1], VAR_5 + 1);
 struct qfq_group *VAR_8;

 if (VAR_7) {
  VAR_8 = FUNC_1(VAR_4, VAR_7);
  if (!FUNC_2(VAR_8->qfg_F, VAR_6))
   return;
 }

 VAR_7 = (1UL << VAR_5) - 1;
 FUNC_3(VAR_4, VAR_7, VAR_0, VAR_1);
 FUNC_3(VAR_4, VAR_7, VAR_2, VAR_3);
}
