
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {scalar_t__ disc_data; } ;
struct hci_uart {TYPE_2__* hdev; int flags; TYPE_1__* proto; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_uart*,unsigned long) ;
 int FUNC_3 (struct tty_struct*,struct file*,unsigned int,unsigned long) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_4, struct file * VAR_5,
     unsigned int VAR_6, unsigned long VAR_7)
{
 struct hci_uart *VAR_8 = (void *)VAR_4->disc_data;
 int VAR_9 = 0;

 FUNC_0("");


 if (!VAR_8)
  return -VAR_0;

 switch (VAR_6) {
 case 128:
  if (!FUNC_4(VAR_3, &VAR_8->flags)) {
   VAR_9 = FUNC_2(VAR_8, VAR_7);
   if (VAR_9) {
    FUNC_1(VAR_3, &VAR_8->flags);
    return VAR_9;
   }
  } else
   return -VAR_1;
  break;

 case 129:
  if (FUNC_5(VAR_3, &VAR_8->flags))
   return VAR_8->proto->id;
  return -VAR_2;

 case 130:
  if (FUNC_5(VAR_3, &VAR_8->flags))
   return VAR_8->hdev->id;
  return -VAR_2;

 default:
  VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 };

 return VAR_9;
}
