
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct file {int dummy; } ;
struct dvb_ringbuffer {int dummy; } ;
struct TYPE_3__ {scalar_t__ flags; } ;
typedef TYPE_1__ ca_slot_info_t ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_ringbuffer*) ;
 int FUNC_1 (struct dvb_ringbuffer*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_ringbuffer *VAR_1, struct file *VAR_2,
         int VAR_3, ca_slot_info_t *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 u8 VAR_7[8] = { 0x00, 0x06, 0x00, 0x00, 0xff, 0x02, 0x00, 0x00 };

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  if (VAR_3 & (1 << VAR_5))
   VAR_6 += 8;
 }

 if (FUNC_0(VAR_1) < VAR_6)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  if (VAR_3 & (1 << VAR_5)) {
   VAR_7[2] = VAR_5;
   FUNC_1(VAR_1, VAR_7, 8);
   VAR_4[VAR_5].flags = 0;
  }
 }

 return 0;
}
