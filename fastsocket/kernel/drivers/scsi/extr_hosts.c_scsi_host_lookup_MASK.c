
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,int *,unsigned short*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct Scsi_Host* FUNC_3 (int ) ;
 int VAR_1 ;

struct Scsi_Host *FUNC_4(unsigned short VAR_2)
{
 struct device *VAR_3;
 struct Scsi_Host *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(&VAR_1, ((void*)0), &VAR_2,
     VAR_0);
 if (VAR_3) {
  VAR_4 = FUNC_3(FUNC_1(VAR_3));
  FUNC_2(VAR_3);
 }
 return VAR_4;
}
