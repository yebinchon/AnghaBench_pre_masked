
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct TYPE_2__ {int queue; } ;
struct av7110 {TYPE_1__ aout; scalar_t__ playing; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_2, poll_table *VAR_3)
{
 struct dvb_device *VAR_4 = VAR_2->private_data;
 struct av7110 *VAR_5 = VAR_4->priv;
 unsigned int VAR_6 = 0;

 FUNC_0(2, "av7110:%p, \n", VAR_5);

 FUNC_2(VAR_2, &VAR_5->aout.queue, VAR_3);

 if (VAR_5->playing) {
  if (FUNC_1(&VAR_5->aout) >= 20 * 1024)
   VAR_6 |= (VAR_0 | VAR_1);
 } else
  VAR_6 = (VAR_0 | VAR_1);

 return VAR_6;
}
