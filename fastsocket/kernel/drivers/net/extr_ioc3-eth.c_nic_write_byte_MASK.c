
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3 {int dummy; } ;


 int FUNC_0 (struct ioc3*,int) ;

__attribute__((used)) static void FUNC_1(struct ioc3 *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 8; VAR_2; VAR_2--) {
  VAR_3 = VAR_1 & 1;
  VAR_1 >>= 1;

  FUNC_0(VAR_0, VAR_3);
 }
}
