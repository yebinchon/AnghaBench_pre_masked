
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr_bufs; int nr_packets; int pt_ts; } ;
struct TYPE_6__ {unsigned long data; int function; } ;
struct TYPE_4__ {int need_two; struct saa7134_dev* dev; TYPE_3__ timeout; int queue; } ;
struct saa7134_dev {TYPE_2__ ts; int pci; scalar_t__ ts_started; TYPE_1__ ts_q; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct saa7134_dev*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(struct saa7134_dev *VAR_4)
{

 if (VAR_3 < 2)
  VAR_3 = 2;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 if (VAR_2 < 4)
  VAR_2 = 4;
 if (VAR_2 > 312)
  VAR_2 = 312;
 VAR_4->ts.nr_bufs = VAR_3;
 VAR_4->ts.nr_packets = VAR_2;

 FUNC_0(&VAR_4->ts_q.queue);
 FUNC_1(&VAR_4->ts_q.timeout);
 VAR_4->ts_q.timeout.function = VAR_1;
 VAR_4->ts_q.timeout.data = (unsigned long)(&VAR_4->ts_q);
 VAR_4->ts_q.dev = VAR_4;
 VAR_4->ts_q.need_two = 1;
 VAR_4->ts_started = 0;
 FUNC_2(VAR_4->pci,&VAR_4->ts.pt_ts);


 FUNC_3(VAR_4);

 return 0;
}
