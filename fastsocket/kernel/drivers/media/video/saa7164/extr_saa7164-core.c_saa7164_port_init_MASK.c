
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int list; } ;
struct TYPE_7__ {int list; } ;
struct TYPE_6__ {int list; } ;
struct TYPE_5__ {int lock; } ;
struct saa7164_port {int nr; int poll_interval; int read_interval; int irq_svc_interval; int svc_interval; int irq_interval; int wait_read; TYPE_4__ list_buf_free; TYPE_3__ list_buf_used; int dmaqueue_lock; TYPE_2__ dmaqueue; TYPE_1__ dvb; int workenc; int type; struct saa7164_dev* dev; } ;
struct saa7164_dev {struct saa7164_port* ports; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(struct saa7164_dev *VAR_12, int VAR_13)
{
 struct saa7164_port *VAR_14 = 0;

 if ((VAR_13 < 0) || (VAR_13 >= VAR_0))
  FUNC_0();

 VAR_14 = &VAR_12->ports[VAR_13];

 VAR_14->dev = VAR_12;
 VAR_14->nr = VAR_13;

 if ((VAR_13 == VAR_6) || (VAR_13 == VAR_7))
  VAR_14->type = VAR_1;
 else
 if ((VAR_13 == VAR_4) || (VAR_13 == VAR_5)) {
  VAR_14->type = VAR_2;


  FUNC_2(&VAR_14->workenc, VAR_10);
 } else if ((VAR_13 == VAR_8) || (VAR_13 == VAR_9)) {
  VAR_14->type = VAR_3;


  FUNC_2(&VAR_14->workenc, VAR_11);
 } else
  FUNC_0();


 FUNC_4(&VAR_14->dvb.lock);
 FUNC_1(&VAR_14->dmaqueue.list);
 FUNC_4(&VAR_14->dmaqueue_lock);

 FUNC_1(&VAR_14->list_buf_used.list);
 FUNC_1(&VAR_14->list_buf_free.list);
 FUNC_3(&VAR_14->wait_read);


 FUNC_5(&VAR_14->irq_interval, "irq intervals");
 FUNC_5(&VAR_14->svc_interval, "deferred intervals");
 FUNC_5(&VAR_14->irq_svc_interval,
  "irq to deferred intervals");
 FUNC_5(&VAR_14->read_interval,
  "encoder/vbi read() intervals");
 FUNC_5(&VAR_14->poll_interval,
  "encoder/vbi poll() intervals");

 return 0;
}
