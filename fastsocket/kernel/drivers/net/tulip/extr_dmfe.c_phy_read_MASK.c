
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static u16 FUNC_3(unsigned long VAR_4, u8 VAR_5, u8 VAR_6, u32 VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 unsigned long VAR_10;

 if (VAR_7 == VAR_1) {

  VAR_10 = VAR_4 + 0x80 + VAR_6 * 4;
  VAR_9 = FUNC_0(VAR_10);
 } else {

  VAR_10 = VAR_4 + VAR_0;


  for (VAR_8 = 0; VAR_8 < 35; VAR_8++)
   FUNC_2(VAR_10, VAR_3);


  FUNC_2(VAR_10, VAR_2);
  FUNC_2(VAR_10, VAR_3);


  FUNC_2(VAR_10, VAR_3);
  FUNC_2(VAR_10, VAR_2);


  for (VAR_8 = 0x10; VAR_8 > 0; VAR_8 = VAR_8 >> 1)
   FUNC_2(VAR_10,
           VAR_5 & VAR_8 ? VAR_3 : VAR_2);


  for (VAR_8 = 0x10; VAR_8 > 0; VAR_8 = VAR_8 >> 1)
   FUNC_2(VAR_10,
           VAR_6 & VAR_8 ? VAR_3 : VAR_2);


  FUNC_1(VAR_10);


  for (VAR_9 = 0, VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   VAR_9 <<= 1;
   VAR_9 |= FUNC_1(VAR_10);
  }
 }

 return VAR_9;
}
