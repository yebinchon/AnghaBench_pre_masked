
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dma; } ;
struct TYPE_5__ {int nr_packets; TYPE_1__ pt_ts; } ;
struct saa7134_dev {int ts_started; size_t board; TYPE_2__ ts; } ;
struct TYPE_6__ {int ts_type; int ts_force_val; } ;


 int FUNC_0 (int) ;


 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 TYPE_3__* VAR_10 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct saa7134_dev *VAR_11)
{
 FUNC_3("TS start\n");

 FUNC_0(VAR_11->ts_started);


 FUNC_4(VAR_2, (VAR_11->ts.nr_packets - 1) & 0xff);
 FUNC_4(VAR_3,
  ((VAR_11->ts.nr_packets - 1) >> 8) & 0xff);

 FUNC_4(VAR_4,
  (((VAR_11->ts.nr_packets - 1) >> 16) & 0x3f) | 0x00);
 FUNC_5(FUNC_2(5), VAR_9);
 FUNC_5(FUNC_1(5), VAR_0 |
       VAR_1 |
       (VAR_11->ts.pt_ts.dma >> 12));


 FUNC_4(VAR_8, 0x00);
 FUNC_4(VAR_8, 0x03);
 FUNC_4(VAR_8, 0x00);
 FUNC_4(VAR_8, 0x01);


 FUNC_4(VAR_8, 0x00);


 switch (VAR_10[VAR_11->board].ts_type) {
 case 129:
  FUNC_4(VAR_7, 0x40);
  FUNC_4(VAR_5, 0xec |
   (VAR_10[VAR_11->board].ts_force_val << 4));
  break;
 case 128:
  FUNC_4(VAR_7, 0xd8);
  FUNC_4(VAR_5, 0x6c |
   (VAR_10[VAR_11->board].ts_force_val << 4));
  FUNC_4(VAR_6, 0xbc);
  FUNC_4(VAR_8, 0x02);
  break;
 }

 VAR_11->ts_started = 1;

 return 0;
}
