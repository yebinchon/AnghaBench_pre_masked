
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_0, int VAR_1)
{
 if (VAR_1) {
  FUNC_2(VAR_0->mapping, VAR_1);
  FUNC_0(VAR_0);
 }
 FUNC_1(VAR_0);
}
