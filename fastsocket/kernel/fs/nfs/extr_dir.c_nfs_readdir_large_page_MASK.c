
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page**,unsigned int) ;

__attribute__((used)) static
int FUNC_2(struct page **VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct page *VAR_5 = FUNC_0(VAR_1);
  if (VAR_5 == ((void*)0))
   goto out_freepages;
  VAR_2[VAR_4] = VAR_5;
 }
 return 0;

out_freepages:
 FUNC_1(VAR_2, VAR_4);
 return -VAR_0;
}
