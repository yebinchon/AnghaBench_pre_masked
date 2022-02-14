
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storvsc_device {struct Scsi_Host* host; } ;
struct hv_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 struct storvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct hv_device*) ;

__attribute__((used)) static int FUNC_4(struct hv_device *VAR_0)
{
 struct storvsc_device *VAR_1 = FUNC_0(VAR_0);
 struct Scsi_Host *VAR_2 = VAR_1->host;

 FUNC_2(VAR_2);
 FUNC_3(VAR_0);
 FUNC_1(VAR_2);

 return 0;
}
