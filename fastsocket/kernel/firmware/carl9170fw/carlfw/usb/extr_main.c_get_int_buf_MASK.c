
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t seq; } ;
struct carl9170_rsp {TYPE_1__ hdr; } ;
struct TYPE_5__ {size_t int_tail_index; size_t int_pending; struct carl9170_rsp* int_buf; } ;
struct TYPE_6__ {TYPE_2__ usb; } ;


 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static struct carl9170_rsp *FUNC_0(void)
{
 struct carl9170_rsp *VAR_2;


 VAR_2 = &VAR_1.usb.int_buf[VAR_1.usb.int_tail_index];


 VAR_2->hdr.seq = VAR_1.usb.int_tail_index;

 VAR_1.usb.int_tail_index++;

 VAR_1.usb.int_tail_index %= VAR_0;
 if (VAR_1.usb.int_pending != VAR_0)
  VAR_1.usb.int_pending++;

 return VAR_2;
}
