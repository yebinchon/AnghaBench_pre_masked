
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int type; TYPE_2__* async; } ;
struct TYPE_3__ {int chanlist_len; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;





 int FUNC_0 (struct comedi_subdevice*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct comedi_subdevice *VAR_0)
{
 int VAR_1;
 int VAR_2;

 switch (VAR_0->type) {
 case 130:
 case 128:
 case 129:
  VAR_2 = 8 * FUNC_0(VAR_0);
  VAR_1 = (VAR_0->async->cmd.chanlist_len +
          VAR_2 - 1) / VAR_2;
  break;
 default:
  VAR_1 = VAR_0->async->cmd.chanlist_len;
  break;
 }
 return VAR_1 * FUNC_0(VAR_0);
}
