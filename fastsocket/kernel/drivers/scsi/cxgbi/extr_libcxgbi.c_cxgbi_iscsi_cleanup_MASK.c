
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_transport_template {int dummy; } ;
struct iscsi_transport {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_transport*) ;
 int FUNC_1 (int,char*,struct iscsi_transport*,int ,struct scsi_transport_template*) ;

void FUNC_2(struct iscsi_transport *VAR_1,
   struct scsi_transport_template **VAR_2)
{
 if (*VAR_2) {
  FUNC_1(1 << VAR_0,
   "de-register transport 0x%p, %s, stt 0x%p.\n",
   VAR_1, VAR_1->name, *VAR_2);
  *VAR_2 = ((void*)0);
  FUNC_0(VAR_1);
 }
}
