
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct hso_serial {int rts_state; int dtr_state; TYPE_4__* parent; int serial_lock; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int usb; TYPE_3__* interface; } ;
struct TYPE_7__ {TYPE_2__* altsetting; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct hso_serial* FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ,int,int,int,int,int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_4, struct file *VAR_5,
          unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8 = 0;
 unsigned long VAR_9;
 int VAR_10;
 struct hso_serial *VAR_11 = FUNC_1(VAR_4);


 if (!VAR_11) {
  FUNC_0("no tty structures");
  return -VAR_0;
 }
 VAR_10 = VAR_11->parent->interface->altsetting->desc.bInterfaceNumber;

 FUNC_2(&VAR_11->serial_lock, VAR_9);
 if (VAR_6 & VAR_2)
  VAR_11->rts_state = 1;
 if (VAR_6 & VAR_1)
  VAR_11->dtr_state = 1;

 if (VAR_7 & VAR_2)
  VAR_11->rts_state = 0;
 if (VAR_7 & VAR_1)
  VAR_11->dtr_state = 0;

 if (VAR_11->dtr_state)
  VAR_8 |= 0x01;
 if (VAR_11->rts_state)
  VAR_8 |= 0x02;

 FUNC_3(&VAR_11->serial_lock, VAR_9);

 return FUNC_4(VAR_11->parent->usb,
          FUNC_5(VAR_11->parent->usb, 0), 0x22,
          0x21, VAR_8, VAR_10, ((void*)0), 0,
          VAR_3);
}
