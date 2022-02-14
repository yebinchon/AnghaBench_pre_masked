
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_transport_template {int dummy; } ;
struct iscsi_transport {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scsi_transport_template* FUNC_0 (struct iscsi_transport*) ;
 int FUNC_1 (int,char*,int ,struct scsi_transport_template**) ;
 int FUNC_2 (char*,int ,struct iscsi_transport*) ;

int FUNC_3(struct iscsi_transport *VAR_2,
   struct scsi_transport_template **VAR_3)
{
 *VAR_3 = FUNC_0(VAR_2);
 if (*VAR_3 == ((void*)0)) {
  FUNC_2("unable to register %s transport 0x%p.\n",
   VAR_2->name, VAR_2);
  return -VAR_1;
 }
 FUNC_1(1 << VAR_0,
  "%s, registered iscsi transport 0x%p.\n",
  VAR_2->name, VAR_3);
 return 0;
}
