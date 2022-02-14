
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int*) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, int VAR_1, u32 VAR_2)
{
 if (VAR_1) {

  VAR_2 >>= 2;
  VAR_2 += 2*75;
  VAR_0[3] = VAR_2 % 75;
  VAR_2 /= 75;
  VAR_0[2] = VAR_2 % 60;
  VAR_2 /= 60;
  VAR_0[1] = VAR_2;
  VAR_0[0] = 0;
 } else {

  FUNC_0(VAR_2, VAR_0);
 }
}
