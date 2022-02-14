
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nbytes; int lcpu; int data; int address; } ;
typedef TYPE_2__ kdp_writeioport_req_t ;
struct TYPE_8__ {int is_reply; int len; } ;
struct TYPE_10__ {TYPE_1__ hdr; int error; } ;
typedef TYPE_3__ kdp_writeioport_reply_t ;
struct TYPE_11__ {TYPE_3__ writeioport_reply; TYPE_2__ writeioport_req; } ;
typedef TYPE_4__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_12__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_7__ VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(
 kdp_pkt_t *VAR_5,
 int *VAR_6,
 unsigned short *VAR_7
                )
{
 kdp_writeioport_req_t *VAR_8 = &VAR_5->writeioport_req;
 kdp_writeioport_reply_t *VAR_9 = &VAR_5->writeioport_reply;
 size_t VAR_10 = *VAR_6;

 if (VAR_10 < sizeof (*VAR_8))
  return (VAR_0);

 if (VAR_8->nbytes > VAR_2)
  VAR_9->error = VAR_1;
 else {
  FUNC_0(("kdp_writeioport addr %x size %d\n", VAR_8->address,
   VAR_8->nbytes));

  VAR_9->error = FUNC_1(VAR_8, VAR_8->data, VAR_8->lcpu);
 }

 VAR_9->hdr.is_reply = 1;
 VAR_9->hdr.len = sizeof (*VAR_9);

 *VAR_7 = VAR_4.reply_port;
 *VAR_6 = VAR_9->hdr.len;

 return (VAR_3);
}
