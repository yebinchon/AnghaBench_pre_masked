
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_3__ {TYPE_2__* virt; } ;
struct i2o_controller {TYPE_1__ status_block; } ;
struct TYPE_4__ {int org_id; int i2o_version; int iop_id; int host_unit_id; int segment_number; int iop_state; int msg_type; int inbound_frame_size; int max_inbound_frames; int cur_inbound_frames; int max_outbound_frames; int expected_lct_size; int iop_capabilities; int desired_mem_size; int current_mem_size; int current_mem_base; int desired_io_size; int current_io_size; int current_io_base; int product_id; } ;
typedef TYPE_2__ i2o_status_block ;


 int FUNC_0 (struct i2o_controller*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct i2o_controller *VAR_2 = (struct i2o_controller *)VAR_0->private;
 char VAR_3[25];
 int VAR_4;
 i2o_status_block *VAR_5 = VAR_2->status_block.virt;

 FUNC_0(VAR_2);

 FUNC_2(VAR_0, "Organization ID        : %0#6x\n", VAR_5->org_id);

 VAR_4 = VAR_5->i2o_version;
 FUNC_2(VAR_0, "IOP ID                 : %0#5x\n", VAR_5->iop_id);
 FUNC_2(VAR_0, "Host Unit ID           : %0#6x\n", VAR_5->host_unit_id);
 FUNC_2(VAR_0, "Segment Number         : %0#5x\n", VAR_5->segment_number);

 FUNC_2(VAR_0, "I2O version            : ");
 switch (VAR_4) {
 case 0x00:
  FUNC_2(VAR_0, "1.0\n");
  break;
 case 0x01:
  FUNC_2(VAR_0, "1.5\n");
  break;
 case 0x02:
  FUNC_2(VAR_0, "2.0\n");
  break;
 default:
  FUNC_2(VAR_0, "Unknown version\n");
 }

 FUNC_2(VAR_0, "IOP State              : ");
 switch (VAR_5->iop_state) {
 case 0x01:
  FUNC_2(VAR_0, "INIT\n");
  break;

 case 0x02:
  FUNC_2(VAR_0, "RESET\n");
  break;

 case 0x04:
  FUNC_2(VAR_0, "HOLD\n");
  break;

 case 0x05:
  FUNC_2(VAR_0, "READY\n");
  break;

 case 0x08:
  FUNC_2(VAR_0, "OPERATIONAL\n");
  break;

 case 0x10:
  FUNC_2(VAR_0, "FAILED\n");
  break;

 case 0x11:
  FUNC_2(VAR_0, "FAULTED\n");
  break;

 default:
  FUNC_2(VAR_0, "Unknown\n");
  break;
 }

 FUNC_2(VAR_0, "Messenger Type         : ");
 switch (VAR_5->msg_type) {
 case 0x00:
  FUNC_2(VAR_0, "Memory mapped\n");
  break;
 case 0x01:
  FUNC_2(VAR_0, "Memory mapped only\n");
  break;
 case 0x02:
  FUNC_2(VAR_0, "Remote only\n");
  break;
 case 0x03:
  FUNC_2(VAR_0, "Memory mapped and remote\n");
  break;
 default:
  FUNC_2(VAR_0, "Unknown\n");
 }

 FUNC_2(VAR_0, "Inbound Frame Size     : %d bytes\n",
     VAR_5->inbound_frame_size << 2);
 FUNC_2(VAR_0, "Max Inbound Frames     : %d\n",
     VAR_5->max_inbound_frames);
 FUNC_2(VAR_0, "Current Inbound Frames : %d\n",
     VAR_5->cur_inbound_frames);
 FUNC_2(VAR_0, "Max Outbound Frames    : %d\n",
     VAR_5->max_outbound_frames);


 FUNC_1(VAR_3, VAR_5->product_id, 24);
 VAR_3[24] = '\0';
 FUNC_2(VAR_0, "Product ID             : %s\n", VAR_3);
 FUNC_2(VAR_0, "Expected LCT Size      : %d bytes\n",
     VAR_5->expected_lct_size);

 FUNC_2(VAR_0, "IOP Capabilities\n");
 FUNC_2(VAR_0, "    Context Field Size Support : ");
 switch (VAR_5->iop_capabilities & 0x0000003) {
 case 0:
  FUNC_2(VAR_0, "Supports only 32-bit context fields\n");
  break;
 case 1:
  FUNC_2(VAR_0, "Supports only 64-bit context fields\n");
  break;
 case 2:
  FUNC_2(VAR_0, "Supports 32-bit and 64-bit context fields, "
      "but not concurrently\n");
  break;
 case 3:
  FUNC_2(VAR_0, "Supports 32-bit and 64-bit context fields "
      "concurrently\n");
  break;
 default:
  FUNC_2(VAR_0, "0x%08x\n", VAR_5->iop_capabilities);
 }
 FUNC_2(VAR_0, "    Current Context Field Size : ");
 switch (VAR_5->iop_capabilities & 0x0000000C) {
 case 0:
  FUNC_2(VAR_0, "not configured\n");
  break;
 case 4:
  FUNC_2(VAR_0, "Supports only 32-bit context fields\n");
  break;
 case 8:
  FUNC_2(VAR_0, "Supports only 64-bit context fields\n");
  break;
 case 12:
  FUNC_2(VAR_0, "Supports both 32-bit or 64-bit context fields "
      "concurrently\n");
  break;
 default:
  FUNC_2(VAR_0, "\n");
 }
 FUNC_2(VAR_0, "    Inbound Peer Support       : %s\n",
     (VAR_5->
      iop_capabilities & 0x00000010) ? "Supported" :
     "Not supported");
 FUNC_2(VAR_0, "    Outbound Peer Support      : %s\n",
     (VAR_5->
      iop_capabilities & 0x00000020) ? "Supported" :
     "Not supported");
 FUNC_2(VAR_0, "    Peer to Peer Support       : %s\n",
     (VAR_5->
      iop_capabilities & 0x00000040) ? "Supported" :
     "Not supported");

 FUNC_2(VAR_0, "Desired private memory size   : %d kB\n",
     VAR_5->desired_mem_size >> 10);
 FUNC_2(VAR_0, "Allocated private memory size : %d kB\n",
     VAR_5->current_mem_size >> 10);
 FUNC_2(VAR_0, "Private memory base address   : %0#10x\n",
     VAR_5->current_mem_base);
 FUNC_2(VAR_0, "Desired private I/O size      : %d kB\n",
     VAR_5->desired_io_size >> 10);
 FUNC_2(VAR_0, "Allocated private I/O size    : %d kB\n",
     VAR_5->current_io_size >> 10);
 FUNC_2(VAR_0, "Private I/O base address      : %0#10x\n",
     VAR_5->current_io_base);

 return 0;
}
