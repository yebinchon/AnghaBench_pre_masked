
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct TYPE_2__ {unsigned long chunkshift; } ;
struct bitmap {scalar_t__ allclean; int flags; int storage; TYPE_1__ counts; } ;
typedef unsigned long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,void*) ;
 int FUNC_1 (unsigned long,void*) ;
 unsigned long FUNC_2 (int *,unsigned long) ;
 struct page* FUNC_3 (int *,unsigned long) ;
 void* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (struct bitmap*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct bitmap*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct bitmap *VAR_4, sector_t VAR_5)
{
 unsigned long VAR_6;
 struct page *VAR_7;
 void *VAR_8;
 unsigned long VAR_9 = VAR_5 >> VAR_4->counts.chunkshift;

 VAR_7 = FUNC_3(&VAR_4->storage, VAR_9);
 if (!VAR_7)
  return;
 VAR_6 = FUNC_2(&VAR_4->storage, VAR_9);
 VAR_8 = FUNC_4(VAR_7, VAR_3);
 if (FUNC_7(VAR_0, &VAR_4->flags))
  FUNC_0(VAR_6, VAR_8);
 else
  FUNC_1(VAR_6, VAR_8);
 FUNC_5(VAR_8, VAR_3);
 if (!FUNC_8(VAR_4, VAR_7->index, VAR_1)) {
  FUNC_6(VAR_4, VAR_7->index, VAR_2);
  VAR_4->allclean = 0;
 }
}
