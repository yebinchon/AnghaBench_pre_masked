
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct netif {scalar_t__ state; } ;
struct bba_priv {TYPE_1__* ethaddr; int acstart; int devid; int revid; } ;
typedef int err_t ;
struct TYPE_2__ {int * addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static err_t FUNC_10(struct netif *VAR_10)
{
 u8 VAR_11;
 struct bba_priv *VAR_12 = (struct bba_priv*)VAR_10->state;

 if(!VAR_12) return VAR_7;

 FUNC_0(VAR_9,("initializing BBA...\n"));
 FUNC_4(0x02,VAR_0);

 FUNC_2();

 VAR_12->revid = FUNC_3(0x01);

 FUNC_5(0x04,&VAR_12->devid,2);
 FUNC_4(0x05,VAR_12->acstart);



 FUNC_8(0x58, 0x80);
 FUNC_8(0x59, 0x00);
 FUNC_8(0x5a, 0x03);
 FUNC_8(0x5b, 0x83);
 FUNC_8(0x5c, 0x32);
 FUNC_8(0x5d, 0xfe);
 FUNC_8(0x5e, 0x1f);
 FUNC_8(0x5f, 0x1f);
 FUNC_9(100);

 FUNC_1();


 VAR_11 = FUNC_6(VAR_6)&0xc0;
 FUNC_8(VAR_6,VAR_11);
 FUNC_9(100);
 VAR_11 |= 0x04;
 FUNC_8(VAR_6,VAR_11);
 FUNC_9(100);
 VAR_11 |= 0x08;
 FUNC_8(VAR_6,VAR_11);
 FUNC_9(100);

 FUNC_7(VAR_5,VAR_12->ethaddr->addr, 6);
 FUNC_0(VAR_9,("MAC ADDRESS %02x:%02x:%02x:%02x:%02x:%02x\n",
  VAR_12->ethaddr->addr[0], VAR_12->ethaddr->addr[1], VAR_12->ethaddr->addr[2],
  VAR_12->ethaddr->addr[3], VAR_12->ethaddr->addr[4], VAR_12->ethaddr->addr[5]));

 FUNC_8(VAR_4,0xFF);
 FUNC_8(VAR_2,0xFF&~VAR_3);

 FUNC_4(0x02,VAR_1);

 return VAR_8;
}
