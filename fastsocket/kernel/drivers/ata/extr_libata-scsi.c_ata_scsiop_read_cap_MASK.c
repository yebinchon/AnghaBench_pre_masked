
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ata_scsi_args {int id; TYPE_1__* cmd; struct ata_device* dev; } ;
struct ata_device {int n_sectors; int id; } ;
struct TYPE_2__ {scalar_t__* cmnd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct ata_scsi_args *VAR_1, u8 *VAR_2)
{
 struct ata_device *VAR_3 = VAR_1->dev;
 u64 VAR_4 = VAR_3->n_sectors - 1;
 u32 VAR_5;
 u8 VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_5(VAR_3->id);
 VAR_6 = FUNC_3(VAR_3->id);
 VAR_7 = FUNC_4(VAR_3->id, VAR_6);

 FUNC_0("ENTER\n");

 if (VAR_1->cmd->cmnd[0] == VAR_0) {
  if (VAR_4 >= 0xffffffffULL)
   VAR_4 = 0xffffffff;


  VAR_2[0] = VAR_4 >> (8 * 3);
  VAR_2[1] = VAR_4 >> (8 * 2);
  VAR_2[2] = VAR_4 >> (8 * 1);
  VAR_2[3] = VAR_4;


  VAR_2[4] = VAR_5 >> (8 * 3);
  VAR_2[5] = VAR_5 >> (8 * 2);
  VAR_2[6] = VAR_5 >> (8 * 1);
  VAR_2[7] = VAR_5;
 } else {

  VAR_2[0] = VAR_4 >> (8 * 7);
  VAR_2[1] = VAR_4 >> (8 * 6);
  VAR_2[2] = VAR_4 >> (8 * 5);
  VAR_2[3] = VAR_4 >> (8 * 4);
  VAR_2[4] = VAR_4 >> (8 * 3);
  VAR_2[5] = VAR_4 >> (8 * 2);
  VAR_2[6] = VAR_4 >> (8 * 1);
  VAR_2[7] = VAR_4;


  VAR_2[ 8] = VAR_5 >> (8 * 3);
  VAR_2[ 9] = VAR_5 >> (8 * 2);
  VAR_2[10] = VAR_5 >> (8 * 1);
  VAR_2[11] = VAR_5;

  VAR_2[12] = 0;
  VAR_2[13] = VAR_6;
  VAR_2[14] = (VAR_7 >> 8) & 0x3f;
  VAR_2[15] = VAR_7;

  if (FUNC_1(VAR_1->id)) {
   VAR_2[14] |= 0x80;

   if (FUNC_2(VAR_1->id))
    VAR_2[14] |= 0x40;
  }
 }

 return 0;
}
