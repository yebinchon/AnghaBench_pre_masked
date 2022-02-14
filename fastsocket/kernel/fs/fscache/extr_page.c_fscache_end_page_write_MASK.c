
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct fscache_object {int lock; struct fscache_cookie* cookie; } ;
struct fscache_cookie {int flags; int stores_lock; int stores; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct fscache_object *VAR_3,
       struct page *VAR_4)
{
 struct fscache_cookie *VAR_5;
 struct page *VAR_6 = ((void*)0);

 FUNC_5(&VAR_3->lock);
 VAR_5 = VAR_3->cookie;
 if (VAR_5) {


  FUNC_5(&VAR_5->stores_lock);
  FUNC_3(&VAR_5->stores, VAR_4->index,
         VAR_1);
  if (!FUNC_4(&VAR_5->stores, VAR_4->index,
     VAR_0)) {
   FUNC_0(&VAR_2);
   VAR_6 = FUNC_2(&VAR_5->stores, VAR_4->index);
  }
  FUNC_6(&VAR_5->stores_lock);
  FUNC_7(&VAR_5->flags, 0);
 }
 FUNC_6(&VAR_3->lock);
 if (VAR_6)
  FUNC_1(VAR_6);
}
