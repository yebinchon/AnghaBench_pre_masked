
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_crypto_engine {int iv; } ;
struct pohmelfs_crypto_thread {int size; struct page* page; struct pohmelfs_crypto_engine eng; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct pohmelfs_crypto_engine*,int ,int *,struct page*,int ) ;
 int FUNC_6 (struct pohmelfs_crypto_thread*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct pohmelfs_crypto_thread *VAR_0)
{
 struct pohmelfs_crypto_engine *VAR_1 = &VAR_0->eng;
 struct page *VAR_2 = VAR_0->page;
 int VAR_3;

 FUNC_3(!FUNC_0(VAR_2));

 VAR_3 = FUNC_5(VAR_1, VAR_1->iv, ((void*)0), VAR_2, VAR_0->size);
 if (!VAR_3)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);
 FUNC_7(VAR_2);
 FUNC_4(VAR_2);

 FUNC_6(VAR_0);

 return VAR_3;
}
