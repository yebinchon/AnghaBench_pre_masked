
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct scsi_device {int sdev_gendev; } ;
struct TYPE_2__ {int parent; } ;
struct enclosure_device {TYPE_1__ edev; } ;
struct efd {int addr; int * dev; } ;
typedef enum scsi_protocol { ____Placeholder_scsi_protocol } scsi_protocol ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct efd*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct scsi_device*,int,unsigned char*,unsigned int) ;
 int FUNC_4 (struct enclosure_device*,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct enclosure_device *VAR_4,
       struct scsi_device *VAR_5)
{
 unsigned char *VAR_6;
 unsigned char *VAR_7;
 unsigned int VAR_8;
 struct efd VAR_9 = {
  .addr = 0,
 };

 VAR_6 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_6 || FUNC_3(VAR_5, 0x83, VAR_6, VAR_1))
  goto free;

 FUNC_4(VAR_4, FUNC_5(VAR_4->edev.parent), 0);

 VAR_8 = ((VAR_6[2] << 8) | VAR_6[3]) + 4;
 FUNC_1(VAR_6);
 VAR_6 = FUNC_2(VAR_8, VAR_0);
 if (!VAR_6 ||FUNC_3(VAR_5, 0x83, VAR_6, VAR_8))
  goto free;

 VAR_7 = VAR_6 + 4;
 while (VAR_7 < VAR_6 + VAR_8) {
  enum scsi_protocol VAR_10 = VAR_7[0] >> 4;
  u8 VAR_11 = VAR_7[0] & 0x0f;
  u8 VAR_12 = VAR_7[1] & 0x80;
  u8 VAR_13 = (VAR_7[1] & 0x30) >> 4;
  u8 VAR_14 = VAR_7[1] & 0x0f;
  u8 VAR_15 = VAR_7[3];

  if (VAR_12 && VAR_11 == 1 && VAR_13 == 1
      && VAR_10 == VAR_2 && VAR_14 == 3 && VAR_15 == 8)
   VAR_9.addr = (u64)VAR_7[4] << 56 |
    (u64)VAR_7[5] << 48 |
    (u64)VAR_7[6] << 40 |
    (u64)VAR_7[7] << 32 |
    (u64)VAR_7[8] << 24 |
    (u64)VAR_7[9] << 16 |
    (u64)VAR_7[10] << 8 |
    (u64)VAR_7[11];

  VAR_7 += VAR_15 + 4;
 }
 if (!VAR_9.addr)
  goto free;

 VAR_9.dev = &VAR_5->sdev_gendev;

 FUNC_0(VAR_3, &VAR_9);
 free:
 FUNC_1(VAR_6);
}
