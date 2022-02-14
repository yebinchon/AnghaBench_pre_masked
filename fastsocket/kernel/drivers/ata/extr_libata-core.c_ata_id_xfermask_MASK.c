
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int const*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long) ;

unsigned long FUNC_2(const u16 *VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;


 if (VAR_6[VAR_1] & (1 << 1)) {
  VAR_7 = VAR_6[VAR_4] & 0x03;
  VAR_7 <<= 3;
  VAR_7 |= 0x7;
 } else {




  u8 VAR_10 = (VAR_6[VAR_3] >> 8) & 0xFF;
  if (VAR_10 < 5)
   VAR_7 = (2 << VAR_10) - 1;
  else
   VAR_7 = 1;







 }

 VAR_8 = VAR_6[VAR_2] & 0x07;

 if (FUNC_0(VAR_6)) {



  int VAR_11 = (VAR_6[VAR_0] >> 0) & 0x7;
  int VAR_12 = (VAR_6[VAR_0] >> 3) & 0x7;

  if (VAR_11)
   VAR_7 |= (1 << 5);
  if (VAR_11 > 1)
   VAR_7 |= (1 << 6);
  if (VAR_12)
   VAR_8 |= (1 << 3);
  if (VAR_12 > 1)
   VAR_8 |= (1 << 4);
 }

 VAR_9 = 0;
 if (VAR_6[VAR_1] & (1 << 2))
  VAR_9 = VAR_6[VAR_5] & 0xff;

 return FUNC_1(VAR_7, VAR_8, VAR_9);
}
