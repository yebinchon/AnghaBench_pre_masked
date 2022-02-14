
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct scsi_device*,unsigned char*,int ,unsigned char*,unsigned int,int *,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_4, unsigned char *VAR_5,
       u8 VAR_6, unsigned VAR_7)
{
 int VAR_8;
 unsigned char VAR_9[16];

 VAR_9[0] = VAR_3;
 VAR_9[1] = 1;
 VAR_9[2] = VAR_6;
 VAR_9[3] = VAR_7 >> 8;
 VAR_9[4] = VAR_7 & 0xff;
 VAR_9[5] = 0;





 VAR_8 = FUNC_0(VAR_4, VAR_9, VAR_0, VAR_5,
      VAR_7, ((void*)0), 30 * VAR_2, 3, ((void*)0));
 if (VAR_8)
  return VAR_8;


 if (VAR_5[1] != VAR_6)
  return -VAR_1;

 return 0;
}
