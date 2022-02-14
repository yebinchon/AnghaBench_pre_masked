
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 short VAR_2 ;

__attribute__((used)) static inline byte
FUNC_1(struct net_device *VAR_3)
{
 byte VAR_4;
 register short int VAR_5 = 0;

 while ((((VAR_4 = FUNC_0(VAR_1)) & VAR_0) == 0) && (VAR_5 <= 1000))
  ++VAR_5;




 return VAR_4 & 0xf0;
}
