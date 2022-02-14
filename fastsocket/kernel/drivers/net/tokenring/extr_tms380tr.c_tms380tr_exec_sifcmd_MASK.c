
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4, unsigned int VAR_5)
{
 unsigned short VAR_6;
 unsigned short VAR_7;
 unsigned long VAR_8;

 VAR_5 = ((VAR_5 ^ VAR_1) | VAR_0);
 VAR_6 = (unsigned short)VAR_5;
 VAR_8 = 0,5 * 800000;
 do {
  VAR_7 = FUNC_0(VAR_3);
 } while((VAR_7 & VAR_0) && VAR_8--);
 FUNC_1(VAR_6, VAR_2);

 return;
}
