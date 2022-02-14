
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int timestamp; int callback; scalar_t__ ack; int generation; int speed; } ;
struct fw_request {int length; int request_header; int data; int ack; TYPE_1__ response; } ;
struct fw_packet {int* header; int* payload; int timestamp; int ack; int generation; int speed; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;





 int VAR_1 ;
 int FUNC_2 (char*,int,int,int) ;
 struct fw_request* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static struct fw_request *FUNC_5(struct fw_packet *VAR_2)
{
 struct fw_request *VAR_3;
 u32 *VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_2->header[0]);
 switch (VAR_6) {
 case 128:
  VAR_4 = &VAR_2->header[3];
  VAR_5 = 4;
  break;

 case 129:
 case 132:
  VAR_4 = VAR_2->payload;
  VAR_5 = FUNC_0(VAR_2->header[3]);
  break;

 case 130:
  VAR_4 = ((void*)0);
  VAR_5 = 4;
  break;

 case 131:
  VAR_4 = ((void*)0);
  VAR_5 = FUNC_0(VAR_2->header[3]);
  break;

 default:
  FUNC_2("ERROR - corrupt request received - %08x %08x %08x\n",
    VAR_2->header[0], VAR_2->header[1], VAR_2->header[2]);
  return ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(*VAR_3) + VAR_5, VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_7 = (VAR_2->timestamp & 0x1fff) + 4000;
 if (VAR_7 >= 8000)
  VAR_7 = (VAR_2->timestamp & ~0x1fff) + 0x2000 + VAR_7 - 8000;
 else
  VAR_7 = (VAR_2->timestamp & ~0x1fff) + VAR_7;

 VAR_3->response.speed = VAR_2->speed;
 VAR_3->response.timestamp = VAR_7;
 VAR_3->response.generation = VAR_2->generation;
 VAR_3->response.ack = 0;
 VAR_3->response.callback = VAR_1;
 VAR_3->ack = VAR_2->ack;
 VAR_3->length = VAR_5;
 if (VAR_4)
  FUNC_4(VAR_3->data, VAR_4, VAR_5);

 FUNC_4(VAR_3->request_header, VAR_2->header, sizeof(VAR_2->header));

 return VAR_3;
}
