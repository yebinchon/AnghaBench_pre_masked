
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_page {int pending; } ;
struct bitmap_counts {unsigned long chunkshift; struct bitmap_page* bp; } ;
typedef unsigned long sector_t ;


 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bitmap_counts *VAR_1, sector_t VAR_2)
{
 sector_t VAR_3 = VAR_2 >> VAR_1->chunkshift;
 unsigned long VAR_4 = VAR_3 >> VAR_0;
 struct bitmap_page *VAR_5 = &VAR_1->bp[VAR_4];

 if (!VAR_5->pending)
  VAR_5->pending = 1;
}
