
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct TYPE_2__ {unsigned long chunkshift; } ;
struct bitmap {int flags; int storage; TYPE_1__ counts; } ;
typedef unsigned long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int *,unsigned long) ;
 struct page* FUNC_1 (int *,unsigned long) ;
 void* FUNC_2 (struct page*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (char*,unsigned long,int ) ;
 int FUNC_5 (unsigned long,void*) ;
 int FUNC_6 (unsigned long,void*) ;
 int FUNC_7 (struct bitmap*,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct bitmap *VAR_3, sector_t VAR_4)
{
 unsigned long VAR_5;
 struct page *VAR_6;
 void *VAR_7;
 unsigned long VAR_8 = VAR_4 >> VAR_3->counts.chunkshift;

 VAR_6 = FUNC_1(&VAR_3->storage, VAR_8);
 if (!VAR_6)
  return;
 VAR_5 = FUNC_0(&VAR_3->storage, VAR_8);


 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (FUNC_8(VAR_0, &VAR_3->flags))
  FUNC_5(VAR_5, VAR_7);
 else
  FUNC_6(VAR_5, VAR_7);
 FUNC_3(VAR_7, VAR_2);
 FUNC_4("set file bit %lu page %lu\n", VAR_5, VAR_6->index);

 FUNC_7(VAR_3, VAR_6->index, VAR_1);
}
