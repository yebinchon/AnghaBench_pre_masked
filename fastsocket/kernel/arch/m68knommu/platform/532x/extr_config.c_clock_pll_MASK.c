
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

int FUNC_4(int VAR_12, int VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18;

 VAR_14 = VAR_2;

 if (VAR_12 == 0) {

  VAR_17 = VAR_4;

  return (VAR_14 * VAR_17 / (VAR_0 * 4));
 }


 if (VAR_12 > VAR_3)
  VAR_12 = VAR_3;
 if (VAR_12 < VAR_11)
  VAR_12 = VAR_11;





 VAR_15 = 100 * VAR_12 / VAR_14;
 VAR_17 = 4 * VAR_0 * VAR_15 / 100;


 VAR_16 = (VAR_14 * VAR_17 / (VAR_0 * 4));






 if (VAR_8 & VAR_10)

  VAR_8 &= ~VAR_9;







 FUNC_3(VAR_1);


 VAR_5 = (0
  | FUNC_1(VAR_0/3)
  | FUNC_0(VAR_0));

 VAR_4 = VAR_17;


 FUNC_2();




 if (VAR_8 & VAR_10)

  VAR_8 |= VAR_9;


 VAR_6 = VAR_7;


 for (VAR_18 = 0; VAR_18 < 0x200; VAR_18++)
  ;

 return VAR_16;
}
