
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bitmap_counts {unsigned long chunkshift; TYPE_1__* bp; } ;
typedef unsigned long sector_t ;
struct TYPE_2__ {int count; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct bitmap_counts*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct bitmap_counts *VAR_1,
         sector_t VAR_2, int VAR_3)
{
 sector_t VAR_4 = VAR_2 >> VAR_1->chunkshift;
 unsigned long VAR_5 = VAR_4 >> VAR_0;
 VAR_1->bp[VAR_5].count += VAR_3;
 FUNC_0(VAR_1, VAR_5);
}
