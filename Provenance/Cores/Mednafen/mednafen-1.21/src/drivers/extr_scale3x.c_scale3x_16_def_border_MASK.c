
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ scale3x_uint16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(scale3x_uint16* __restrict__ VAR_0, const scale3x_uint16* __restrict__ VAR_1, const scale3x_uint16* __restrict__ VAR_2, const scale3x_uint16* __restrict__ VAR_3, unsigned VAR_4)
{
 FUNC_0(VAR_4 >= 2);


 VAR_0[0] = VAR_2[0];
 VAR_0[1] = VAR_2[0];
 if (VAR_2[1] == VAR_1[0] && VAR_3[0] != VAR_1[0])
  VAR_0[2] = VAR_1[0];
 else
  VAR_0[2] = VAR_2[0];
 ++VAR_1;
 ++VAR_2;
 ++VAR_3;
 VAR_0 += 3;


 VAR_4 -= 2;
 while (VAR_4) {
  if (VAR_1[0] != VAR_3[0] && VAR_2[-1] != VAR_2[1]) {
   VAR_0[0] = VAR_2[-1] == VAR_1[0] ? VAR_2[-1] : VAR_2[0];
   VAR_0[1] = (VAR_2[-1] == VAR_1[0] && VAR_2[0] != VAR_1[1]) || (VAR_2[1] == VAR_1[0] && VAR_2[0] != VAR_1[-1]) ? VAR_1[0] : VAR_2[0];
   VAR_0[2] = VAR_2[1] == VAR_1[0] ? VAR_2[1] : VAR_2[0];
  } else {
   VAR_0[0] = VAR_2[0];
   VAR_0[1] = VAR_2[0];
   VAR_0[2] = VAR_2[0];
  }

  ++VAR_1;
  ++VAR_2;
  ++VAR_3;
  VAR_0 += 3;
  --VAR_4;
 }


 if (VAR_2[-1] == VAR_1[0] && VAR_3[0] != VAR_1[0])
  VAR_0[0] = VAR_1[0];
 else
  VAR_0[0] = VAR_2[0];
 VAR_0[1] = VAR_2[0];
 VAR_0[2] = VAR_2[0];
}
