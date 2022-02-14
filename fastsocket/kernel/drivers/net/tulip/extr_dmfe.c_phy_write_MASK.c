
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
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4, u8 VAR_5, u8 VAR_6,
        u16 VAR_7, u32 VAR_8)
{
 u16 VAR_9;
 unsigned long VAR_10;

 if (VAR_8 == VAR_1) {
  VAR_10 = VAR_4 + 0x80 + VAR_6 * 4;
  FUNC_0(VAR_7, VAR_10);
 } else {

  VAR_10 = VAR_4 + VAR_0;


  for (VAR_9 = 0; VAR_9 < 35; VAR_9++)
   FUNC_1(VAR_10, VAR_3);


  FUNC_1(VAR_10, VAR_2);
  FUNC_1(VAR_10, VAR_3);


  FUNC_1(VAR_10, VAR_2);
  FUNC_1(VAR_10, VAR_3);


  for (VAR_9 = 0x10; VAR_9 > 0; VAR_9 = VAR_9 >> 1)
   FUNC_1(VAR_10,
           VAR_5 & VAR_9 ? VAR_3 : VAR_2);


  for (VAR_9 = 0x10; VAR_9 > 0; VAR_9 = VAR_9 >> 1)
   FUNC_1(VAR_10,
           VAR_6 & VAR_9 ? VAR_3 : VAR_2);


  FUNC_1(VAR_10, VAR_3);
  FUNC_1(VAR_10, VAR_2);


  for ( VAR_9 = 0x8000; VAR_9 > 0; VAR_9 >>= 1)
   FUNC_1(VAR_10,
           VAR_7 & VAR_9 ? VAR_3 : VAR_2);
 }
}
