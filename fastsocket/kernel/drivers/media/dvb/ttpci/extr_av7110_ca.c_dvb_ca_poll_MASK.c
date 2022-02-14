
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dvb_device* private_data; } ;
struct dvb_ringbuffer {int queue; } ;
struct dvb_device {struct av7110* priv; } ;
struct av7110 {struct dvb_ringbuffer ci_wbuffer; struct dvb_ringbuffer ci_rbuffer; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (struct dvb_ringbuffer*) ;
 int FUNC_2 (struct dvb_ringbuffer*) ;
 int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_4 (struct file *VAR_4, poll_table *VAR_5)
{
 struct dvb_device *VAR_6 = VAR_4->private_data;
 struct av7110 *VAR_7 = VAR_6->priv;
 struct dvb_ringbuffer *VAR_8 = &VAR_7->ci_rbuffer;
 struct dvb_ringbuffer *VAR_9 = &VAR_7->ci_wbuffer;
 unsigned int VAR_10 = 0;

 FUNC_0(8, "av7110:%p\n",VAR_7);

 FUNC_3(VAR_4, &VAR_8->queue, VAR_5);
 FUNC_3(VAR_4, &VAR_9->queue, VAR_5);

 if (!FUNC_1(VAR_8))
  VAR_10 |= (VAR_0 | VAR_2);

 if (FUNC_2(VAR_9) > 1024)
  VAR_10 |= (VAR_1 | VAR_3);

 return VAR_10;
}
