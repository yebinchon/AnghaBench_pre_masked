
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btmrvl_sdio_card {scalar_t__ func; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct btmrvl_sdio_card *VAR_0)
{
 if (VAR_0 && VAR_0->func) {
  FUNC_0(VAR_0->func);
  FUNC_3(VAR_0->func);
  FUNC_1(VAR_0->func);
  FUNC_2(VAR_0->func);
  FUNC_4(VAR_0->func, ((void*)0));
 }

 return 0;
}
