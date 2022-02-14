
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_6 ;

__attribute__((used)) static inline void
FUNC_4(struct net_device *VAR_7, byte *VAR_8, int VAR_9, int VAR_10)
{

 byte VAR_11 = VAR_4 ^ (VAR_2 | VAR_3);
 byte VAR_12 = VAR_4;
 for ( ; VAR_9 > 0; VAR_9 -=2) {
  FUNC_2(*VAR_8++, VAR_1);
  FUNC_2(VAR_11, VAR_0);
  FUNC_2(*VAR_8++, VAR_1);
  FUNC_2(VAR_12, VAR_0);
 }
 FUNC_1(VAR_7,VAR_5);

}
