
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 unsigned char FUNC_0 (unsigned short) ;
 unsigned char FUNC_1 (unsigned short) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3, unsigned char *VAR_4,
    unsigned short VAR_5, int VAR_6)
{
 int VAR_7;
 unsigned short VAR_8, VAR_9, VAR_10;


 VAR_8 = FUNC_2(VAR_1);
 VAR_9 = FUNC_2(VAR_0);


 FUNC_3(0x0001, VAR_1);

        FUNC_3(VAR_5, VAR_0);


 VAR_7 = 0;
 for(;;)
 {
  VAR_10 = FUNC_2(VAR_2);

  *(VAR_4 + VAR_7) = FUNC_0(VAR_10);
  if(++VAR_7 == VAR_6)
   break;

  *(VAR_4 + VAR_7) = FUNC_1(VAR_10);
  if (++VAR_7 == VAR_6)
   break;
 }


 FUNC_3(VAR_8, VAR_1);
 FUNC_3(VAR_9, VAR_0);

 return;
}
