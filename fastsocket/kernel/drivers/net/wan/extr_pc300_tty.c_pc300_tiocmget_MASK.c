
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct net_device {int name; } ;
struct file {int dummy; } ;
struct TYPE_9__ {TYPE_3__* pc300dev; } ;
typedef TYPE_2__ st_cpc_tty_area ;
struct TYPE_10__ {scalar_t__ hdlc; scalar_t__ chan; } ;
typedef TYPE_3__ pc300dev_t ;
struct TYPE_11__ {int channel; scalar_t__ card; } ;
typedef TYPE_4__ pc300ch_t ;
struct TYPE_8__ {scalar_t__ scabase; } ;
struct TYPE_12__ {TYPE_1__ hw; } ;
typedef TYPE_5__ pc300_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_5__*,unsigned long) ;
 int FUNC_2 (TYPE_5__*,unsigned long) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_3 (int ,int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_5, struct file *VAR_6)
{
 unsigned int VAR_7;
 unsigned char VAR_8;
 unsigned long VAR_9;
 st_cpc_tty_area *VAR_10 = (st_cpc_tty_area *) VAR_5->driver_data;
 pc300dev_t *VAR_11 = VAR_10->pc300dev;
 pc300ch_t *VAR_12 = (pc300ch_t *)VAR_11->chan;
 pc300_t *VAR_13 = (pc300_t *) VAR_12->card;
 int VAR_14 = VAR_12->channel;

 VAR_10 = (st_cpc_tty_area *) VAR_5->driver_data;

 FUNC_0("%s-tty: tiocmget\n",
  ((struct net_device*)(VAR_11->hdlc))->name);

 FUNC_1(VAR_13, VAR_9);
 VAR_8 = FUNC_4(VAR_13->hw.scabase+FUNC_3(VAR_0,VAR_14));
 FUNC_2(VAR_13,VAR_9);

 VAR_7 = ((VAR_8 & VAR_1) ? VAR_3 : 0) |
   ((VAR_8 & VAR_2) ? VAR_4 : 0);

 return VAR_7;
}
