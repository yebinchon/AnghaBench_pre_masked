
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_if {int* qif_bitmaps; } ;
typedef int pktsched_bitmap_t ;



__attribute__((used)) static inline void
FUNC_0(struct qfq_if *VAR_0, pktsched_bitmap_t VAR_1, int VAR_2, int VAR_3)
{
 VAR_0->qif_bitmaps[VAR_3] |= VAR_0->qif_bitmaps[VAR_2] & VAR_1;
 VAR_0->qif_bitmaps[VAR_2] &= ~VAR_1;
}
