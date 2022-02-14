
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct packet_command {int* cmd; int block_desc_length; int density; int block_length_med; int block_length_lo; unsigned char* buffer; int buflen; int timeout; int data_direction; } ;
struct ccs_modesel_head {int* cmd; int block_desc_length; int density; int block_length_med; int block_length_lo; unsigned char* buffer; int buflen; int timeout; int data_direction; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {scalar_t__ vendor; TYPE_2__ cdi; TYPE_1__* device; } ;
struct TYPE_6__ {int sector_size; } ;
typedef TYPE_3__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 int FUNC_2 (struct packet_command*,int ,int) ;
 int FUNC_3 (char*,int ,int,...) ;
 int FUNC_4 (TYPE_3__*,struct packet_command*) ;

int FUNC_5(Scsi_CD *VAR_7, int VAR_8)
{
 unsigned char *VAR_9;
 struct packet_command VAR_10;
 struct ccs_modesel_head *VAR_11;
 int VAR_12, VAR_13 = 0;






 VAR_9 = FUNC_1(512, VAR_3 | VAR_2);
 if (!VAR_9)
  return -VAR_1;




 FUNC_2(&VAR_10, 0, sizeof(struct packet_command));
 VAR_10.cmd[0] = VAR_4;
 VAR_10.cmd[1] = (1 << 4);
 VAR_10.cmd[4] = 12;
 VAR_11 = (struct ccs_modesel_head *) VAR_9;
 FUNC_2(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->block_desc_length = 0x08;
 VAR_11->density = VAR_13;
 VAR_11->block_length_med = (VAR_8 >> 8) & 0xff;
 VAR_11->block_length_lo = VAR_8 & 0xff;
 VAR_10.buffer = VAR_9;
 VAR_10.buflen = sizeof(*VAR_11);
 VAR_10.data_direction = VAR_0;
 VAR_10.timeout = VAR_5;
 if (0 == (VAR_12 = FUNC_4(VAR_7, &VAR_10))) {
  VAR_7->device->sector_size = VAR_8;
 }





 FUNC_0(VAR_9);
 return VAR_12;
}
