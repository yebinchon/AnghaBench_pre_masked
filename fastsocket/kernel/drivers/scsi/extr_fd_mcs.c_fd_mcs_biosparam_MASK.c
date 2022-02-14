
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (struct block_device*) ;

__attribute__((used)) static int FUNC_2(struct scsi_device * VAR_0, struct block_device *VAR_1,
       sector_t VAR_2, int *VAR_3)
{
 unsigned char *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = VAR_2;




 if (VAR_4 && VAR_4[65] == 0xaa && VAR_4[64] == 0x55
     && VAR_4[4]) {
  VAR_3[0] = VAR_4[5] + 1;
  VAR_3[1] = VAR_4[6] & 0x3f;
 } else {



  if ((unsigned int) VAR_5 >= 0x7e0000U)
  {
   VAR_3[0] = 0xff;
   VAR_3[1] = 0x3f;
  } else if ((unsigned int) VAR_5 >= 0x200000U) {
   VAR_3[0] = 0x80;
   VAR_3[1] = 0x3f;
  } else {
   VAR_3[0] = 0x40;
   VAR_3[1] = 0x20;
  }
 }

 VAR_3[2] = (unsigned int) VAR_5 / (VAR_3[0] * VAR_3[1]);
 FUNC_0(VAR_4);
 return 0;
}
