
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; scalar_t__ type; scalar_t__ length; } ;
struct pending_request {TYPE_1__ req; struct hpsb_packet* packet; } ;
struct hpsb_packet {int* header; int ack_code; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hpsb_packet*) ;
 int FUNC_1 (struct pending_request*) ;

__attribute__((used)) static void FUNC_2(struct pending_request *VAR_10)
{
 struct hpsb_packet *VAR_11 = VAR_10->packet;
 int VAR_12 = (VAR_11->header[1] >> 12) & 0xf;

 switch (VAR_11->ack_code) {
 case 130:
 case 129:
  VAR_10->req.error = VAR_2;
  break;
 case 131:
  VAR_10->req.error = VAR_1;
  break;
 case 128:
  VAR_10->req.error = VAR_3;
  break;
 default:
  VAR_10->req.error = (VAR_11->ack_code << 16) | VAR_12;
  break;
 }

 if (!((VAR_11->ack_code == VAR_0) && (VAR_12 == VAR_9))) {
  VAR_10->req.length = 0;
 }

 if ((VAR_10->req.type == VAR_4) ||
     (VAR_10->req.type == VAR_6) ||
     (VAR_10->req.type == VAR_5) ||
     (VAR_10->req.type == VAR_7) ||
     (VAR_10->req.type == VAR_8))
  FUNC_0(VAR_11);

 FUNC_1(VAR_10);
}
