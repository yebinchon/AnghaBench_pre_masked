
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct page *VAR_1, int VAR_2)
{
 if (VAR_2 == 0) {

  FUNC_4(VAR_1);
  if (FUNC_2(VAR_1))
   FUNC_0(VAR_1);
 } else if (VAR_2 == -VAR_0) {





  FUNC_5(VAR_1);

  FUNC_4(VAR_1);
  if (FUNC_2(VAR_1))
   FUNC_0(VAR_1);
  VAR_2 = 0;
  FUNC_1("recovered read error\n");
 } else
  FUNC_3(VAR_1);

 return VAR_2;
}
