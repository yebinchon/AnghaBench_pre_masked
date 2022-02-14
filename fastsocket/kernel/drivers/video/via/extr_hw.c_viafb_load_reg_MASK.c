
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct io_register {int start_bit; int end_bit; int io_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,int) ;

void FUNC_1(int VAR_3, int VAR_4,
 struct io_register *VAR_5,
       int VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 u16 VAR_16;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_7 = 0;
  VAR_9 = 0;
  VAR_13 = VAR_5[VAR_10].start_bit;
  VAR_14 = VAR_5[VAR_10].end_bit;
  VAR_15 = VAR_5[VAR_10].io_addr;

  VAR_12 = VAR_8;
  for (VAR_11 = VAR_13; VAR_11 <= VAR_14; VAR_11++) {

   VAR_7 = VAR_7 | (VAR_0 << VAR_11);
   VAR_16 = (VAR_3 & (VAR_0 << VAR_8));
   VAR_9 =
       VAR_9 | ((VAR_16 >> VAR_12) << VAR_13);
   VAR_8++;
  }
  if (VAR_6 == VAR_1)
   FUNC_0(VAR_15, VAR_1, VAR_9, VAR_7);
  else
   FUNC_0(VAR_15, VAR_2, VAR_9, VAR_7);
 }

}
