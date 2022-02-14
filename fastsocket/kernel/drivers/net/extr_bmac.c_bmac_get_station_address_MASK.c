
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (unsigned short) ;
 unsigned short FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;
 unsigned short VAR_5;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  {
   FUNC_2(VAR_2);
   VAR_5 = FUNC_1(VAR_2, VAR_4 + VAR_0/2, VAR_1);
   VAR_3[2*VAR_4] = FUNC_0(VAR_5 & 0x0ff);
   VAR_3[2*VAR_4+1] = FUNC_0((VAR_5 >> 8) & 0x0ff);
  }
}
