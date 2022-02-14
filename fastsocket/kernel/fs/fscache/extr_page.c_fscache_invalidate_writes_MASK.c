
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct fscache_cookie {int stores_lock; int stores; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,void**,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct fscache_cookie *VAR_1)
{
 struct page *VAR_2;
 void *VAR_3[16];
 int VAR_4, VAR_5;

 FUNC_1("");

 for (;;) {
  FUNC_6(&VAR_1->stores_lock);
  VAR_4 = FUNC_5(&VAR_1->stores, VAR_3, 0,
            FUNC_0(VAR_3),
            VAR_0);
  if (VAR_4 == 0) {
   FUNC_7(&VAR_1->stores_lock);
   break;
  }

  for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--) {
   VAR_2 = VAR_3[VAR_5];
   FUNC_4(&VAR_1->stores, VAR_2->index);
  }

  FUNC_7(&VAR_1->stores_lock);

  for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--)
   FUNC_3(VAR_3[VAR_5]);
 }

 FUNC_2("");
}
