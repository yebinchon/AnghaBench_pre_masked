
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *,struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_2, u64 VAR_3,
     bool VAR_4)
{
 int VAR_5 = 0;

 if (((VAR_3 & (VAR_1 - 1)) || VAR_4) &&
     !FUNC_0(VAR_2)) {
  VAR_5 = FUNC_1(((void*)0), VAR_2);
  if (VAR_5)
   return VAR_5;
  FUNC_2(VAR_2);
  if (!FUNC_0(VAR_2)) {
   FUNC_3(VAR_2);
   return -VAR_0;
  }
 }
 return 0;
}
