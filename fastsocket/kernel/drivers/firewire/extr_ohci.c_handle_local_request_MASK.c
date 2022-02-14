
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct fw_packet {unsigned long long* header; int ack; int (* callback ) (struct fw_packet*,int *,int ) ;} ;
struct context {TYPE_1__* ohci; } ;
struct TYPE_3__ {int card; struct context at_response_ctx; struct context at_request_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long long) ;
 int FUNC_1 (int *,struct fw_packet*) ;
 int FUNC_2 (int *,struct fw_packet*) ;
 int FUNC_3 (TYPE_1__*,struct fw_packet*,int) ;
 int FUNC_4 (TYPE_1__*,struct fw_packet*,int) ;
 int FUNC_5 (struct fw_packet*,int *,int ) ;
 int FUNC_6 (struct fw_packet*,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct context *VAR_5, struct fw_packet *VAR_6)
{
 u64 VAR_7;
 u32 VAR_8;

 if (VAR_5 == &VAR_5->ohci->at_request_ctx) {
  VAR_6->ack = VAR_1;
  VAR_6->callback(VAR_6, &VAR_5->ohci->card, VAR_6->ack);
 }

 VAR_7 =
  ((unsigned long long)
   FUNC_0(VAR_6->header[1]) << 32) |
  VAR_6->header[2];
 VAR_8 = VAR_7 - VAR_4;


 if (VAR_8 >= VAR_2 && VAR_8 < VAR_3)
  FUNC_4(VAR_5->ohci, VAR_6, VAR_8);
 else switch (VAR_8) {
 case 130:
 case 131:
 case 129:
 case 128:
  FUNC_3(VAR_5->ohci, VAR_6, VAR_8);
  break;
 default:
  if (VAR_5 == &VAR_5->ohci->at_request_ctx)
   FUNC_1(&VAR_5->ohci->card, VAR_6);
  else
   FUNC_2(&VAR_5->ohci->card, VAR_6);
  break;
 }

 if (VAR_5 == &VAR_5->ohci->at_response_ctx) {
  VAR_6->ack = VAR_0;
  VAR_6->callback(VAR_6, &VAR_5->ohci->card, VAR_6->ack);
 }
}
