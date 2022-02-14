
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_request {int length; int data; } ;
struct fw_packet {scalar_t__ ack; unsigned long long* header; int speed; int generation; } ;
struct fw_card {int dummy; } ;
struct fw_address_handler {int callback_data; int (* address_callback ) (struct fw_card*,struct fw_request*,int,int,int,int ,int ,unsigned long long,int ,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long long) ;
 scalar_t__ FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (unsigned long long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fw_request* FUNC_4 (struct fw_packet*) ;
 int FUNC_5 (struct fw_card*,struct fw_request*,int ) ;
 struct fw_address_handler* FUNC_6 (int *,unsigned long long,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct fw_card*,struct fw_request*,int,int,int,int ,int ,unsigned long long,int ,int ,int ) ;

void FUNC_10(struct fw_card *VAR_5, struct fw_packet *VAR_6)
{
 struct fw_address_handler *VAR_7;
 struct fw_request *VAR_8;
 unsigned long long VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (VAR_6->ack != VAR_1 && VAR_6->ack != VAR_0)
  return;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 == ((void*)0)) {

  return;
 }

 VAR_9 =
  ((unsigned long long)
   FUNC_1(VAR_6->header[1]) << 32) | VAR_6->header[2];
 VAR_11 = FUNC_3(VAR_6->header[0]);
 VAR_12 = FUNC_0(VAR_6->header[0]);
 VAR_13 = FUNC_2(VAR_6->header[1]);

 FUNC_7(&VAR_4, VAR_10);
 VAR_7 = FUNC_6(&VAR_3,
         VAR_9, VAR_8->length);
 FUNC_8(&VAR_4, VAR_10);
 if (VAR_7 == ((void*)0))
  FUNC_5(VAR_5, VAR_8, VAR_2);
 else
  VAR_7->address_callback(VAR_5, VAR_8,
       VAR_11, VAR_12, VAR_13,
       VAR_6->generation, VAR_6->speed, VAR_9,
       VAR_8->data, VAR_8->length,
       VAR_7->callback_data);
}
