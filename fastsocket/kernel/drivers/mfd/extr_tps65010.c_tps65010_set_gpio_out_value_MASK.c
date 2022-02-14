
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 int VAR_5 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,unsigned int,char*,unsigned int) ;
 TYPE_1__* VAR_6 ;

int FUNC_5(unsigned VAR_7, unsigned VAR_8)
{
 int VAR_9;
 unsigned VAR_10;

 if (!VAR_6)
  return -VAR_2;
 if ((VAR_7 < VAR_3) || (VAR_7 > VAR_4))
  return -VAR_1;

 FUNC_2(&VAR_6->lock);

 VAR_10 = FUNC_0(VAR_6->client, VAR_5);


 VAR_10 |= 1 << (VAR_7 + 3);


 switch (VAR_8) {
 case 128:
  VAR_10 |= 1 << (VAR_7 - 1);
  break;

 default:
  VAR_10 &= ~(1 << (VAR_7 - 1));
  break;
 }

 VAR_9 = FUNC_1(VAR_6->client,
  VAR_5, VAR_10);

 FUNC_4("%s: gpio%dout = %s, defgpio 0x%02x\n", VAR_0,
  VAR_7, VAR_8 ? "high" : "low",
  FUNC_0(VAR_6->client, VAR_5));

 FUNC_3(&VAR_6->lock);
 return VAR_9;
}
