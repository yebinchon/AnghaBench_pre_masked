
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_device*,unsigned char*,int ,void*,int,int *,int ,int ,int *) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_5, int VAR_6,
    void *VAR_7, int VAR_8)
{
 u32 VAR_9;

 unsigned char VAR_10[] = {
  VAR_2,
  0x10,
  0,
  VAR_8 >> 8,
  VAR_8 & 0xff,
  0
 };

 VAR_9 = FUNC_0(VAR_5, VAR_10, VAR_0, VAR_7, VAR_8,
      ((void*)0), VAR_4, VAR_3, ((void*)0));
 if (VAR_9)
  FUNC_1(VAR_1, VAR_5, "SEND DIAGNOSTIC result: %8x\n",
       VAR_9);
 return VAR_9;
}
