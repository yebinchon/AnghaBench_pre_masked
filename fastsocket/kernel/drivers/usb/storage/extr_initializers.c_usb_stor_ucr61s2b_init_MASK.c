
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_bulk_pipe; int send_bulk_pipe; scalar_t__ iobuf; } ;
struct bulk_cs_wrap {int Length; int CDB; scalar_t__ Lun; scalar_t__ Flags; void* DataTransferLength; scalar_t__ Tag; void* Signature; } ;
struct bulk_cb_wrap {int Length; int CDB; scalar_t__ Lun; scalar_t__ Flags; void* DataTransferLength; scalar_t__ Tag; void* Signature; } ;
typedef int init_string ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct us_data*,int ,struct bulk_cs_wrap*,int ,unsigned int*) ;

int FUNC_5(struct us_data *VAR_4)
{
 struct bulk_cb_wrap *VAR_5 = (struct bulk_cb_wrap*) VAR_4->iobuf;
 struct bulk_cs_wrap *VAR_6 = (struct bulk_cs_wrap*) VAR_4->iobuf;
 int VAR_7;
 unsigned int VAR_8;
 static char VAR_9[] = "\xec\x0a\x06\x00$PCCHIPS";

 FUNC_0("Sending UCR-61S2B initialization packet...\n");

 VAR_5->Signature = FUNC_1(VAR_1);
 VAR_5->Tag = 0;
 VAR_5->DataTransferLength = FUNC_1(0);
 VAR_5->Flags = VAR_5->Lun = 0;
 VAR_5->Length = sizeof(VAR_9) - 1;
 FUNC_3(VAR_5->CDB, 0, sizeof(VAR_5->CDB));
 FUNC_2(VAR_5->CDB, VAR_9, sizeof(VAR_9) - 1);

 VAR_7 = FUNC_4(VAR_4, VAR_4->send_bulk_pipe, VAR_5,
   VAR_2, &VAR_8);
 if (VAR_7)
  return -VAR_0;

 FUNC_0("Getting status packet...\n");
 VAR_7 = FUNC_4(VAR_4, VAR_4->recv_bulk_pipe, VAR_6,
   VAR_3, &VAR_8);
 if (VAR_7)
  return -VAR_0;

 return 0;
}
