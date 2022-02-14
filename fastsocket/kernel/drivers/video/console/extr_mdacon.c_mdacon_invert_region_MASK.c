
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0, u16 *VAR_1, int VAR_2)
{
 for (; VAR_2 > 0; VAR_2--) {
  FUNC_1(FUNC_0(VAR_1) ^ 0x0800, VAR_1);
  VAR_1++;
 }
}
