
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct scsi_device {unsigned char sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,int *,int ,int,int *) ;

__attribute__((used)) static void FUNC_4(struct se_device *VAR_5,
  struct scsi_device *VAR_6)
{
 unsigned char VAR_7[VAR_3], *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(12, VAR_1);
 if (!VAR_8)
  return;

 FUNC_2(VAR_7, 0, VAR_3);
 VAR_7[0] = VAR_4;
 VAR_7[4] = 0x0c;

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_0, VAR_8, 12, ((void*)0),
   VAR_2, 1, ((void*)0));
 if (VAR_9)
  goto out_free;




 VAR_6->sector_size = (VAR_8[9] << 16) | (VAR_8[10] << 8) | (VAR_8[11]);
 if (!VAR_6->sector_size)
  VAR_6->sector_size = 1024;
out_free:
 FUNC_0(VAR_8);
}
