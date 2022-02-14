
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct enc28j60_net {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (struct enc28j60_net*) ;
 int FUNC_3 (struct enc28j60_net*,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct enc28j60_net *VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 unsigned long VAR_7 = VAR_1 + VAR_2;


 while ((FUNC_3(VAR_3, VAR_4) & VAR_5) != VAR_6) {
  if (FUNC_4(VAR_1, VAR_7)) {
   if (FUNC_2(VAR_3))
    FUNC_1(&VAR_3->spi->dev,
     "reg %02x ready timeout!\n", VAR_4);
   return -VAR_0;
  }
  FUNC_0();
 }
 return 0;
}
