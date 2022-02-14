
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int,int,int) ;
 scalar_t__ FUNC_1 (struct block_device*,unsigned int,int*) ;

int FUNC_2(struct scsi_device *VAR_2, struct block_device *VAR_3,
        sector_t VAR_4, int *VAR_5)
{
 unsigned int VAR_6 = VAR_4;

 if (VAR_1 || (FUNC_1(VAR_3, VAR_4, VAR_5) < 0)) {
  VAR_5[0] = 255;
  VAR_5[1] = 63;
  VAR_5[2] = VAR_6 / (VAR_5[0] * VAR_5[1]);
 }





 return 0;
}
