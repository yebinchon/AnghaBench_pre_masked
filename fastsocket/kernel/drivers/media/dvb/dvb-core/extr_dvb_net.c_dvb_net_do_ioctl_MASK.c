
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_net_priv {int pid; int feedtype; } ;
struct dvb_net_if {int if_num; int feedtype; int pid; } ;
struct dvb_net {struct net_device** device; int * state; } ;
struct dvb_device {TYPE_1__* adapter; struct dvb_net* priv; } ;
struct __dvb_net_if_old {int if_num; int pid; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dvb_net*,int ,int ) ;
 int FUNC_2 (struct dvb_net*,unsigned long) ;
 int FUNC_3 (int ) ;
 struct dvb_net_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_8, struct file *VAR_9,
    unsigned int VAR_10, void *VAR_11)
{
 struct dvb_device *VAR_12 = VAR_9->private_data;
 struct dvb_net *VAR_13 = VAR_12->priv;

 if (((VAR_9->f_flags&VAR_6)==VAR_7))
  return -VAR_5;

 switch (VAR_10) {
 case 132:
 {
  struct dvb_net_if *VAR_14 = VAR_11;
  int VAR_15;

  if (!FUNC_0(VAR_0))
   return -VAR_5;

  if (!FUNC_5(VAR_12->adapter->module))
   return -VAR_5;

  VAR_15=FUNC_1(VAR_13, VAR_14->pid, VAR_14->feedtype);
  if (VAR_15<0) {
   FUNC_3(VAR_12->adapter->module);
   return VAR_15;
  }
  VAR_14->if_num=VAR_15;
  break;
 }
 case 131:
 {
  struct net_device *VAR_16;
  struct dvb_net_priv *VAR_17;
  struct dvb_net_if *VAR_18 = VAR_11;

  if (VAR_18->if_num >= VAR_1 ||
      !VAR_13->state[VAR_18->if_num])
   return -VAR_3;

  VAR_16 = VAR_13->device[VAR_18->if_num];

  VAR_17 = FUNC_4(VAR_16);
  VAR_18->pid=VAR_17->pid;
  VAR_18->feedtype=VAR_17->feedtype;
  break;
 }
 case 130:
 {
  int VAR_19;

  if (!FUNC_0(VAR_0))
   return -VAR_5;
  if ((unsigned long) VAR_11 >= VAR_1)
   return -VAR_3;
  VAR_19 = FUNC_2(VAR_13, (unsigned long) VAR_11);
  if (!VAR_19)
   FUNC_3(VAR_12->adapter->module);
  return VAR_19;
 }


 case 129:
 {
  struct __dvb_net_if_old *VAR_20 = VAR_11;
  int VAR_21;

  if (!FUNC_0(VAR_0))
   return -VAR_5;

  if (!FUNC_5(VAR_12->adapter->module))
   return -VAR_5;

  VAR_21=FUNC_1(VAR_13, VAR_20->pid, VAR_2);
  if (VAR_21<0) {
   FUNC_3(VAR_12->adapter->module);
   return VAR_21;
  }
  VAR_20->if_num=VAR_21;
  break;
 }
 case 128:
 {
  struct net_device *VAR_22;
  struct dvb_net_priv *VAR_23;
  struct __dvb_net_if_old *VAR_24 = VAR_11;

  if (VAR_24->if_num >= VAR_1 ||
      !VAR_13->state[VAR_24->if_num])
   return -VAR_3;

  VAR_22 = VAR_13->device[VAR_24->if_num];

  VAR_23 = FUNC_4(VAR_22);
  VAR_24->pid=VAR_23->pid;
  break;
 }
 default:
  return -VAR_4;
 }
 return 0;
}
