
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct udc {int rxfifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct udc*,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct udc *VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8;

 FUNC_0(VAR_3, "udc_read_bytes(): %d bytes\n", VAR_5);


 for (VAR_6 = 0; VAR_6 < VAR_5 / VAR_2; VAR_6++) {
  *((u32 *)(VAR_4 + (VAR_6<<2))) = FUNC_1(VAR_3->rxfifo);
 }


 if (VAR_5 % VAR_2) {
  VAR_8 = FUNC_1(VAR_3->rxfifo);
  for (VAR_7 = 0; VAR_7 < VAR_5 % VAR_2; VAR_7++) {
   *(VAR_4 + (VAR_6<<2) + VAR_7) = (u8)(VAR_8 & VAR_1);
   VAR_8 = VAR_8 >> VAR_0;
  }
 }

 return 0;
}
