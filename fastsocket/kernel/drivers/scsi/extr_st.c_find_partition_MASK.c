
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_tape*,unsigned int*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_tape *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5;

 if ((VAR_3 = FUNC_0(VAR_2, &VAR_5, &VAR_4, 1)) < 0)
  return VAR_3;
 if (VAR_4 >= VAR_1)
  return (-VAR_0);
 return VAR_4;
}
