
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct scsi_qla_host {scalar_t__ response_ptr; } ;
struct response {int signature; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct scsi_qla_host *VAR_2)
{
 uint16_t VAR_3;
 struct response *VAR_4;

 VAR_4 = (struct response *)VAR_2->response_ptr;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4->signature = VAR_0;
  VAR_4++;
 }
}
