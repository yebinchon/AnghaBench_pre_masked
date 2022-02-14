
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_collect {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct page_collect*,int,int ) ;
 int FUNC_2 (struct page_collect*,int) ;
 int FUNC_3 (struct page_collect*,struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_0, bool VAR_1)
{
 struct page_collect VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 1, VAR_0->mapping->host);





 VAR_3 = FUNC_3(&VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_0("_readpage => %d\n", VAR_3);
  return VAR_3;
 }

 return FUNC_2(&VAR_2, VAR_1);
}
