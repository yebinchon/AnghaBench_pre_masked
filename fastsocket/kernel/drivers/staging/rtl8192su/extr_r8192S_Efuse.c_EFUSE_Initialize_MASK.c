
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int,int) ;

extern void
FUNC_2(struct net_device* VAR_4)
{
 u8 VAR_5 = {0x00};
 u8 VAR_6 = {0x00};


 VAR_5 = FUNC_0(VAR_4, VAR_2+1);
 VAR_6 = VAR_5 | 0x20;
 FUNC_1(VAR_4, VAR_2+1, VAR_6);


 VAR_5 = FUNC_0(VAR_4, VAR_3+1);
 VAR_6 = VAR_5 & 0xFE;
 FUNC_1(VAR_4, VAR_3+1, VAR_6);



 VAR_5 = FUNC_0(VAR_4, VAR_1+3);
 VAR_6 = VAR_5 | 0x80;
 FUNC_1(VAR_4, VAR_1+3, VAR_6);


 FUNC_1(VAR_4, 0x2F8, 0x3);


 FUNC_1(VAR_4, VAR_0+3, 0x72);

}
