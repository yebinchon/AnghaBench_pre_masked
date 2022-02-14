
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int dummy; } ;


 int * FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 u16 *VAR_8, *VAR_9;

 if (VAR_7 <= 0 || VAR_6 <= 0)
  return;

 if (VAR_3==0 && VAR_5==0 && VAR_7==VAR_0) {
  FUNC_1(FUNC_0(0,VAR_4), FUNC_0(0,VAR_2), VAR_6*VAR_7*2);

 } else if (VAR_4 < VAR_2 || (VAR_4 == VAR_2 && VAR_5 < VAR_3)) {
  VAR_8 = FUNC_0(VAR_3, VAR_2);
  VAR_9 = FUNC_0(VAR_5, VAR_4);

  for (; VAR_6 > 0; VAR_6--) {
   FUNC_1(VAR_9, VAR_8, VAR_7*2);
   VAR_8 += VAR_0;
   VAR_9 += VAR_0;
  }
 } else {
  VAR_8 = FUNC_0(VAR_3, VAR_2+VAR_6-1);
  VAR_9 = FUNC_0(VAR_5, VAR_4+VAR_6-1);

  for (; VAR_6 > 0; VAR_6--) {
   FUNC_1(VAR_9, VAR_8, VAR_7*2);
   VAR_8 -= VAR_0;
   VAR_9 -= VAR_0;
  }
 }
}
