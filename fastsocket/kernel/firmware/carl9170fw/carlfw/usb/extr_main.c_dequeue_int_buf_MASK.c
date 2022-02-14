
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
struct carl9170_rsp {TYPE_2__ hdr; } ;
struct TYPE_4__ {scalar_t__ int_pending; size_t int_head_index; struct carl9170_rsp* int_buf; } ;
struct TYPE_6__ {TYPE_1__ usb; } ;


 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static struct carl9170_rsp *FUNC_0(unsigned int VAR_2)
{
 struct carl9170_rsp *VAR_3 = ((void*)0);

 if (VAR_1.usb.int_pending > 0) {
  VAR_3 = &VAR_1.usb.int_buf[VAR_1.usb.int_head_index];

  if ((unsigned int)(VAR_3->hdr.len + 8) > VAR_2)
   return ((void*)0);

  VAR_1.usb.int_head_index++;
  VAR_1.usb.int_head_index %= VAR_0;
  VAR_1.usb.int_pending--;
 }

 return VAR_3;
}
