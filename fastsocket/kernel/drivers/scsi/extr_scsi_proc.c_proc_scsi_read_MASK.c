
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {TYPE_1__* hostt; } ;
typedef int off_t ;
struct TYPE_2__ {int (* proc_info ) (struct Scsi_Host*,char*,char**,int ,int,int ) ;} ;


 int FUNC_0 (struct Scsi_Host*,char*,char**,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char **VAR_1, off_t VAR_2,
     int VAR_3, int *VAR_4, void *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5;
 int VAR_7;

 VAR_7 = VAR_6->hostt->proc_info(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3, 0);
 *VAR_4 = (VAR_7 < VAR_3);

 return VAR_7;
}
