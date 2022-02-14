
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct qib_pportdata {int dummy; } ;


 int FUNC_0 (struct qib_pportdata*,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct qib_pportdata *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 u8 VAR_5;

 VAR_4 = 0;
 while (VAR_1 < VAR_2) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_5, 1);
  if (VAR_3 < 0)
   goto bail;
  VAR_4 += VAR_5;
  ++VAR_1;
 }
 VAR_3 = VAR_4 & 0xFF;
bail:
 return VAR_3;

}
