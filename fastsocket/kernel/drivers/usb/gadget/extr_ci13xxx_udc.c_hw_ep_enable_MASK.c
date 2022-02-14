
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_9, int VAR_10, int VAR_11)
{
 u32 VAR_12, VAR_13;

 if (VAR_10) {
  VAR_12 = VAR_8;
  VAR_13 = VAR_11 << FUNC_0(VAR_12);

  VAR_12 |= VAR_7;
  VAR_12 |= VAR_6;
  VAR_13 |= VAR_6;
  VAR_12 |= VAR_5;
  VAR_13 |= VAR_5;
 } else {
  VAR_12 = VAR_4;
  VAR_13 = VAR_11 << FUNC_0(VAR_12);

  VAR_12 |= VAR_3;
  VAR_12 |= VAR_2;
  VAR_13 |= VAR_2;
  VAR_12 |= VAR_1;
  VAR_13 |= VAR_1;
 }
 FUNC_1(VAR_0 + VAR_9 * sizeof(u32), VAR_12, VAR_13);
 return 0;
}
