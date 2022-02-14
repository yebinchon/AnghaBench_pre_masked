
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_packets; } ;
struct saa7134_dev {TYPE_1__ ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;

int FUNC_1(struct saa7134_dev *VAR_7)
{

 FUNC_0(VAR_5, 0x00);

 FUNC_0(VAR_3, 0x6c);
 FUNC_0(VAR_4, (VAR_6-1));
 FUNC_0(VAR_0, ((VAR_7->ts.nr_packets-1)&0xff));
 FUNC_0(VAR_1, (((VAR_7->ts.nr_packets-1)>>8)&0xff));

 FUNC_0(VAR_2,
  ((((VAR_7->ts.nr_packets-1)>>16)&0x3f) | 0x00));

 return 0;
}
