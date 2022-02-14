
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {unsigned long send_ct; unsigned long reply_ct; scalar_t__ shared_addr; } ;
struct file {struct sep_device* private_data; } ;
typedef int poll_table ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int VAR_6 ;
 unsigned long FUNC_3 (struct sep_device*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_7, poll_table * VAR_8)
{
 unsigned long VAR_9;
 unsigned int VAR_10 = 0;
 unsigned long VAR_11 = 0;
 struct sep_device *VAR_12 = VAR_7->private_data;

 FUNC_0("---------->SEP Driver poll: start\n");
 FUNC_2(VAR_7, &VAR_6, VAR_8);



 FUNC_1("sep->send_ct is %lu\n", VAR_12->send_ct);
 FUNC_1("sep->reply_ct is %lu\n", VAR_12->reply_ct);


 if (VAR_12->send_ct == VAR_12->reply_ct) {
  for (VAR_9 = 0; VAR_9 < 12 * 4; VAR_9 += 4)
   FUNC_1("Sep Mesg Word %lu of the message is %lu\n", VAR_9, *((unsigned long *) (VAR_12->shared_addr + VAR_9)));

  for (VAR_9 = 0; VAR_9 < 10 * 4; VAR_9 += 4)
   FUNC_1("Debug Data Word %lu of the message is %lu\n", VAR_9, *((unsigned long *) (VAR_12->shared_addr + 0x1800 + VAR_9)));

  VAR_11 = FUNC_3(VAR_12, VAR_0);
  FUNC_1("retval is %lu\n", VAR_11);

  if (VAR_11 >> 31) {
   FUNC_1("SEP Driver: sep request in\n");

   VAR_10 |= VAR_2 | VAR_4;
  } else {
   FUNC_1("SEP Driver: sep reply in\n");
   VAR_10 |= VAR_1 | VAR_3;
  }
 }
 FUNC_0("SEP Driver:<-------- poll exit\n");
 return VAR_10;
}
