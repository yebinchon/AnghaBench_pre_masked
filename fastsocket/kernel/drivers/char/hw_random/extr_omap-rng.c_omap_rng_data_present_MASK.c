
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < 20; VAR_4++) {
  VAR_3 = FUNC_0(VAR_0) ? 0 : 1;
  if (VAR_3 || !VAR_2)
   break;





  FUNC_1(10);
 }
 return VAR_3;
}
