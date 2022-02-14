
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct carl9170_rsp {TYPE_1__ hdr; } ;
struct TYPE_11__ {int ctrl; unsigned int totalLen; unsigned int dataSize; } ;
struct TYPE_9__ {int int_desc_available; TYPE_5__* int_desc; scalar_t__ int_pending; } ;
struct TYPE_8__ {int up_queue; } ;
struct TYPE_10__ {TYPE_3__ usb; TYPE_2__ pta; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*,unsigned int) ;
 struct carl9170_rsp* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (int ,struct carl9170_rsp*,unsigned int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void)
{
 struct carl9170_rsp *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 if (!VAR_5.usb.int_desc_available)
  return ;

 VAR_5.usb.int_desc_available = 0;

 VAR_7 = VAR_0 - VAR_3;
 VAR_8 = VAR_3;

 FUNC_6();

 while (VAR_5.usb.int_pending) {
  VAR_6 = FUNC_2(VAR_7);
  if (!VAR_6)
   break;

  VAR_9 = VAR_6->hdr.len + 4;

  FUNC_4(FUNC_1(VAR_5.usb.int_desc, VAR_8), VAR_6, VAR_9);

  VAR_7 -= VAR_9;
  VAR_8 += VAR_9;
 }

 if (VAR_8 == VAR_3) {
  FUNC_0("attempted to send an empty int response!\n");
  goto reclaim;
 }

 VAR_5.usb.int_desc->ctrl = VAR_1 | VAR_2;
 VAR_5.usb.int_desc->totalLen = VAR_8;
 VAR_5.usb.int_desc->dataSize = VAR_8;


 FUNC_3(&VAR_5.pta.up_queue, VAR_5.usb.int_desc);


 FUNC_5(VAR_4, 1);
 FUNC_7();

 return ;

reclaim:

 VAR_5.usb.int_desc_available = 1;
}
