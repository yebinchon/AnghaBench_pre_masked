
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {scalar_t__ hostdata; } ;
typedef int TW_Device_Extension ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_0, struct block_device *VAR_1, sector_t VAR_2, int VAR_3[])
{
 int VAR_4, VAR_5, VAR_6;
 TW_Device_Extension *VAR_7;

 VAR_7 = (TW_Device_Extension *)VAR_0->host->hostdata;

 if (VAR_2 >= 0x200000) {
  VAR_4 = 255;
  VAR_5 = 63;
  VAR_6 = FUNC_0(VAR_2, VAR_4 * VAR_5);
 } else {
  VAR_4 = 64;
  VAR_5 = 32;
  VAR_6 = FUNC_0(VAR_2, VAR_4 * VAR_5);
 }

 VAR_3[0] = VAR_4;
 VAR_3[1] = VAR_5;
 VAR_3[2] = VAR_6;

 return 0;
}
