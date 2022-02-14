
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t dtype ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void
FUNC_0(dtype VAR_4[VAR_2 + 1], dtype VAR_5[VAR_2 + 1])
{
  register int VAR_6, VAR_7;

  VAR_7 = 1;
  VAR_4[VAR_1] = 0;
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    VAR_4[VAR_6] = VAR_7;
    VAR_5[VAR_4[VAR_6]] = VAR_6;

    if (VAR_3[VAR_6] != 0)
      VAR_4[VAR_1] ^= VAR_7;
    VAR_7 <<= 1;
  }
  VAR_5[VAR_4[VAR_1]] = VAR_1;





  VAR_7 >>= 1;
  for (VAR_6 = VAR_1 + 1; VAR_6 < VAR_2; VAR_6++) {
    if (VAR_4[VAR_6 - 1] >= VAR_7)
      VAR_4[VAR_6] = VAR_4[VAR_1] ^ ((VAR_4[VAR_6 - 1] ^ VAR_7) << 1);
    else
      VAR_4[VAR_6] = VAR_4[VAR_6 - 1] << 1;
    VAR_5[VAR_4[VAR_6]] = VAR_6;
  }
  VAR_5[0] = VAR_0;
  VAR_4[VAR_2] = 0;
}
