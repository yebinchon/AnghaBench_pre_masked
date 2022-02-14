
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgt_ring {int * tr_pages; int tr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tgt_ring *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->tr_lock);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3->tr_pages[VAR_4] = FUNC_1(VAR_1);
  if (!VAR_3->tr_pages[VAR_4]) {
   FUNC_0("out of memory\n");
   return -VAR_0;
  }
 }

 return 0;
}
