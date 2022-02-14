
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct badblocks {scalar_t__ changed; int count; int lock; scalar_t__ unacked_exist; int * page; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct badblocks *VAR_0)
{
 if (VAR_0->page == ((void*)0) || VAR_0->changed)

  return;
 FUNC_4(&VAR_0->lock);

 if (VAR_0->changed == 0 && VAR_0->unacked_exist) {
  u64 *VAR_1 = VAR_0->page;
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->count ; VAR_2++) {
   if (!FUNC_0(VAR_1[VAR_2])) {
    sector_t VAR_3 = FUNC_3(VAR_1[VAR_2]);
    int VAR_4 = FUNC_1(VAR_1[VAR_2]);
    VAR_1[VAR_2] = FUNC_2(VAR_3, VAR_4, 1);
   }
  }
  VAR_0->unacked_exist = 0;
 }
 FUNC_5(&VAR_0->lock);
}
