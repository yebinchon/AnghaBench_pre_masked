
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct qfq_if {int qif_V; } ;
typedef int pktsched_bitmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct qfq_if*,int,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct qfq_if *VAR_5, u_int64_t VAR_6)
{
 pktsched_bitmap_t VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_5->qif_V >> VAR_4;
 VAR_9 = VAR_6 >> VAR_4;

 if (VAR_8 != VAR_9) {
  VAR_7 = (2UL << (FUNC_0(VAR_8 ^ VAR_9))) - 1;
  FUNC_1(VAR_5, VAR_7, VAR_3, VAR_1);
  FUNC_1(VAR_5, VAR_7, VAR_2, VAR_0);
 }
}
