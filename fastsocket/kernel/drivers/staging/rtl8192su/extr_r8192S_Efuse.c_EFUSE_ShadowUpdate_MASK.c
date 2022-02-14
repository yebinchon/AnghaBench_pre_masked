
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct r8192_priv {int** EfuseMap; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,int,int,int*) ;
 int FUNC_3 (struct net_device*,int) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int*,int*,int) ;

extern void
FUNC_6(struct net_device* VAR_4)
{

 struct r8192_priv *VAR_5 = FUNC_4(VAR_4);
 u16 VAR_6, VAR_7, VAR_8 = 0;
 u8 VAR_9 = 0x0F;
 bool VAR_10 = 0;

 FUNC_3(VAR_4, VAR_3);




 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
 {

  VAR_9 = 0x0F;
  VAR_8 = VAR_7 * 8;





  for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  {
   if (VAR_7 == 0 && VAR_5->EfuseMap[VAR_0][VAR_8+VAR_6] == 0xFF)
   {
    VAR_10 = VAR_3;
   }



   if (VAR_10 == VAR_3)
   {
    VAR_9 &= ~(1<<(VAR_6/2));
    VAR_5->EfuseMap[VAR_0][VAR_8+VAR_6] =
    VAR_5->EfuseMap[VAR_1][VAR_8+VAR_6];
   }else
   {
   if ( VAR_5->EfuseMap[VAR_0][VAR_8+VAR_6] !=
    VAR_5->EfuseMap[VAR_1][VAR_8+VAR_6])
   {
    VAR_9 &= ~(FUNC_0(VAR_6/2));




    VAR_5->EfuseMap[VAR_0][VAR_8+VAR_6] =
    VAR_5->EfuseMap[VAR_1][VAR_8+VAR_6];
    }
   }
  }




  if (VAR_9 != 0x0F)
  {
   u8 VAR_11[8];


   FUNC_5(VAR_11, &(VAR_5->EfuseMap[VAR_1][VAR_8]), 8);

   FUNC_2(VAR_4,(u8)VAR_7,VAR_9,VAR_11);
  }

 }






 FUNC_3(VAR_4, VAR_2);

 FUNC_1(VAR_4);

}
