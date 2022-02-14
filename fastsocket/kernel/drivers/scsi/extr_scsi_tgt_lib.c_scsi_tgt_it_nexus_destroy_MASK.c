
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct Scsi_Host {int host_no; } ;


 int FUNC_0 (char*,int ,unsigned long long) ;
 int FUNC_1 (int ,scalar_t__,int,int *) ;

int FUNC_2(struct Scsi_Host *VAR_0, u64 VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_0->host_no,
          VAR_1, 1, ((void*)0));
 if (VAR_2 < 0)
  FUNC_0("The i_t_neuxs request lost, %d %llx!\n",
   VAR_0->host_no, (unsigned long long)VAR_1);
 return VAR_2;
}
