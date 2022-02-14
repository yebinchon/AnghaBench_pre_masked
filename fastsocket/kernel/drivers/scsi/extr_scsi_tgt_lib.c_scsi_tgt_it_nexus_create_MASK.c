
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct Scsi_Host {int host_no; } ;


 int FUNC_0 (char*,int ,unsigned long long) ;
 int FUNC_1 (int ,scalar_t__,int ,char*) ;

int FUNC_2(struct Scsi_Host *VAR_0, u64 VAR_1,
        char *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_0->host_no, VAR_1, 0,
          VAR_2);
 if (VAR_3 < 0)
  FUNC_0("The i_t_neuxs request lost, %d %llx!\n",
   VAR_0->host_no, (unsigned long long)VAR_1);
 return VAR_3;
}
