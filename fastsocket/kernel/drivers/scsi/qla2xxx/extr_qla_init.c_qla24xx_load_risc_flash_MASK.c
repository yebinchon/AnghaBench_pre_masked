
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct req_que {int dma; scalar_t__ ring; } ;
struct qla_hw_data {int fw_transfer_size; struct req_que** req_q_map; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*,int,...) ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int*,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(scsi_qla_host_t *VAR_5, uint32_t *VAR_6,
    uint32_t VAR_7)
{
 int VAR_8 = VAR_2;
 int VAR_9, VAR_10;
 uint32_t *VAR_11, VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 struct qla_hw_data *VAR_16 = VAR_5->hw;
 struct req_que *VAR_17 = VAR_16->req_q_map[0];

 FUNC_1(VAR_3, VAR_5, 0x008b,
     "FW: Loading firmware from flash (%x).\n", VAR_7);

 VAR_8 = VAR_2;

 VAR_9 = VAR_0;
 VAR_11 = (uint32_t *)VAR_17->ring;
 *VAR_6 = 0;


 FUNC_3(VAR_5, VAR_11, VAR_7 + 4, 4);
 for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
  VAR_11[VAR_15] = FUNC_0(VAR_11[VAR_15]);
 if ((VAR_11[0] == 0xffffffff && VAR_11[1] == 0xffffffff &&
     VAR_11[2] == 0xffffffff && VAR_11[3] == 0xffffffff) ||
     (VAR_11[0] == 0 && VAR_11[1] == 0 && VAR_11[2] == 0 &&
  VAR_11[3] == 0)) {
  FUNC_2(VAR_4, VAR_5, 0x008c,
      "Unable to verify the integrity of flash firmware "
      "image.\n");
  FUNC_2(VAR_4, VAR_5, 0x008d,
      "Firmware data: %08x %08x %08x %08x.\n",
      VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3]);

  return VAR_1;
 }

 while (VAR_9 && VAR_8 == VAR_2) {

  FUNC_3(VAR_5, VAR_11, VAR_7, 4);

  VAR_13 = FUNC_0(VAR_11[2]);
  *VAR_6 = *VAR_6 == 0 ? VAR_13 : *VAR_6;
  VAR_14 = FUNC_0(VAR_11[3]);

  VAR_10 = 0;
  while (VAR_14 > 0 && VAR_8 == VAR_2) {
   VAR_12 = (uint32_t)(VAR_16->fw_transfer_size >> 2);
   if (VAR_12 > VAR_14)
    VAR_12 = VAR_14;

   FUNC_1(VAR_3, VAR_5, 0x008e,
       "Loading risc segment@ risc addr %x "
       "number of dwords 0x%x offset 0x%x.\n",
       VAR_13, VAR_12, VAR_7);

   FUNC_3(VAR_5, VAR_11, VAR_7, VAR_12);
   for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
    VAR_11[VAR_15] = FUNC_5(VAR_11[VAR_15]);

   VAR_8 = FUNC_4(VAR_5, VAR_17->dma, VAR_13,
       VAR_12);
   if (VAR_8) {
    FUNC_2(VAR_4, VAR_5, 0x008f,
        "Failed to load segment %d of firmware.\n",
        VAR_10);
    break;
   }

   VAR_7 += VAR_12;
   VAR_13 += VAR_12;
   VAR_14 -= VAR_12;
   VAR_10++;
  }


  VAR_9--;
 }

 return VAR_8;
}
