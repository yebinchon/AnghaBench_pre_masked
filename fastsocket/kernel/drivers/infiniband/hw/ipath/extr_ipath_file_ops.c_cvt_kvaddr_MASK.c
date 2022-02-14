
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (void*) ;

__attribute__((used)) static u64 FUNC_2(void *VAR_1)
{
 struct page *VAR_2;
 u64 VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  VAR_3 = FUNC_0(VAR_2) << VAR_0;

 return VAR_3;
}
