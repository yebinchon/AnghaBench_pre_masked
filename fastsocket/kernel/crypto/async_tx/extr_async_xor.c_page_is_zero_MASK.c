
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_0, unsigned int VAR_1, size_t VAR_2)
{
 char *VAR_3 = FUNC_1(VAR_0) + VAR_1;
 return ((*(u32 *) VAR_3) == 0 &&
  FUNC_0(VAR_3, VAR_3 + 4, VAR_2 - 4) == 0);
}
