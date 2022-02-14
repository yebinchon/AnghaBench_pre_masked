
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_7__ {int rx; } ;
struct TYPE_8__ {scalar_t__ ignore_status_mask; int lock; TYPE_3__ icount; TYPE_2__* state; } ;
struct nwpserial_port {TYPE_4__ port; int dcr_host; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {struct tty_struct* tty; } ;
struct TYPE_6__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,unsigned char,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct nwpserial_port *VAR_10 = VAR_9;
 struct tty_struct *VAR_11 = VAR_10->port.state->port.tty;
 irqreturn_t VAR_12;
 unsigned int VAR_13;
 unsigned char VAR_14;

 FUNC_2(&VAR_10->port.lock);


 VAR_13 = FUNC_0(VAR_10->dcr_host, VAR_4);
 if (!VAR_13) {
  VAR_12 = VAR_1;
  goto out;
 }

 do {
  VAR_10->port.icount.rx++;
  VAR_14 = FUNC_0(VAR_10->dcr_host, VAR_7);
  if (VAR_10->port.ignore_status_mask != VAR_2)
   FUNC_5(VAR_11, VAR_14, VAR_3);
 } while (FUNC_0(VAR_10->dcr_host, VAR_5) & VAR_6);

 FUNC_4(VAR_11);
 VAR_12 = VAR_0;


 FUNC_1(VAR_10->dcr_host, VAR_4, 1);
out:
 FUNC_3(&VAR_10->port.lock);
 return VAR_12;
}
