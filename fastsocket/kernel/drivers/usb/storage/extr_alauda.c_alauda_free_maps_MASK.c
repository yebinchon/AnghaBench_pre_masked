
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alauda_media_info {unsigned int zoneshift; unsigned int blockshift; unsigned int pageshift; unsigned int capacity; int ** pba_to_lba; int ** lba_to_pba; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (struct alauda_media_info *VAR_0)
{
 unsigned int VAR_1 = VAR_0->zoneshift
  + VAR_0->blockshift + VAR_0->pageshift;
 unsigned int VAR_2 = VAR_0->capacity >> VAR_1;
 unsigned int VAR_3;

 if (VAR_0->lba_to_pba != ((void*)0))
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   FUNC_0(VAR_0->lba_to_pba[VAR_3]);
   VAR_0->lba_to_pba[VAR_3] = ((void*)0);
  }

 if (VAR_0->pba_to_lba != ((void*)0))
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   FUNC_0(VAR_0->pba_to_lba[VAR_3]);
   VAR_0->pba_to_lba[VAR_3] = ((void*)0);
  }
}
