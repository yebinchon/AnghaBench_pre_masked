
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {size_t board; scalar_t__ ts_started; } ;
struct TYPE_2__ {int ts_type; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct saa7134_dev *VAR_3)
{
 FUNC_1("TS stop\n");

 FUNC_0(!VAR_3->ts_started);


 switch (VAR_2[VAR_3->board].ts_type) {
 case 129:
  FUNC_2(VAR_0, 0x6c);
  VAR_3->ts_started = 0;
  break;
 case 128:
  FUNC_2(VAR_1, 0x40);
  VAR_3->ts_started = 0;
  break;
 }
 return 0;
}
