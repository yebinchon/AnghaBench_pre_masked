
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline unsigned long
FUNC_3(struct tsi108_prv_data * VAR_2, int VAR_3, int VAR_4,
   int VAR_5, unsigned long *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 if (VAR_3 < 0xb0)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

      again:
 VAR_8 = FUNC_0(VAR_3) | *VAR_6;






 if (FUNC_2(FUNC_0(VAR_7) & VAR_4)) {
  *VAR_6 += VAR_5;
  FUNC_1(VAR_7, VAR_4);
  goto again;
 }

 return VAR_8;
}
