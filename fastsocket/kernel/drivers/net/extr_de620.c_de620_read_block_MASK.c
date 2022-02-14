
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
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_5 ;

__attribute__((used)) static inline void
FUNC_5(struct net_device *VAR_6, byte *VAR_7, int VAR_8)
{

 byte VAR_9;
 byte VAR_10 = VAR_3 ^ (VAR_1 | VAR_2);
 byte VAR_11 = VAR_3;
 while (VAR_8-- > 0) {
  VAR_9 = FUNC_2(VAR_4) & 0xf0;
  FUNC_3(VAR_10, VAR_0);
  *VAR_7++ = VAR_9 | FUNC_2(VAR_4) >> 4;
  FUNC_3(VAR_11 , VAR_0);
 }

}
