
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*,int) ;

__attribute__((used)) static int FUNC_2(u64 VAR_1, u64 VAR_2)
{
 struct page *VAR_3;
 u64 VAR_4;

 for (VAR_4 = (VAR_1 >> VAR_0); VAR_4 < (VAR_2 >> VAR_0); ++VAR_4) {
  VAR_3 = FUNC_0(VAR_4);
  FUNC_1(VAR_3, -1);
 }
 return 0;
}
