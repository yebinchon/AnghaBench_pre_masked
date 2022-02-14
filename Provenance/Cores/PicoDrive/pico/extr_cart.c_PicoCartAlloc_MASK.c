
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mcd_state ;


 unsigned char* FUNC_0 (int,int,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static unsigned char *FUNC_1(int VAR_1, int VAR_2)
{
  unsigned char *VAR_3;

  if (VAR_2) {

    int VAR_4 = 0, VAR_5 = VAR_1;
    while ((VAR_5 >>= 1) != 0)
      VAR_4++;
    if (VAR_1 > (1 << VAR_4))
      VAR_4++;
    VAR_0 = 1 << VAR_4;

    if (VAR_0 < 0x10000)
      VAR_0 = 0x10000;
  }
  else {


    if (VAR_1 < sizeof(mcd_state))
      VAR_1 = sizeof(mcd_state);


    VAR_0 = (VAR_1 + 0x7ffff) & ~0x7ffff;
  }

  if (VAR_0 - VAR_1 < 4)
    VAR_0 += 4;



  VAR_3 = FUNC_0(0x02000000, VAR_0, 0, 0);
  return VAR_3;
}
