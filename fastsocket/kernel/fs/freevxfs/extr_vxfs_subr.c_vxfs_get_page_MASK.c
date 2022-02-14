
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct address_space*,int ,int *) ;
 int FUNC_5 (struct page*) ;

struct page *
FUNC_6(struct address_space *VAR_1, u_long VAR_2)
{
 struct page * VAR_3;

 VAR_3 = FUNC_4(VAR_1, VAR_2, ((void*)0));

 if (!FUNC_1(VAR_3)) {
  FUNC_3(VAR_3);


  if (FUNC_2(VAR_3))
   goto fail;
 }

 return (VAR_3);

fail:
 FUNC_5(VAR_3);
 return FUNC_0(-VAR_0);
}
