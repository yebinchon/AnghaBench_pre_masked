
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viosrp_crq {int valid; int format; } ;
struct vio_port {TYPE_1__* dma_dev; } ;
struct srp_target {int dummy; } ;
struct TYPE_2__ {int unit_address; } ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct viosrp_crq*,struct srp_target*) ;
 struct vio_port* FUNC_4 (struct srp_target*) ;

__attribute__((used)) static void FUNC_5(struct viosrp_crq *VAR_0, struct srp_target *VAR_1)
{
 struct vio_port *VAR_2 = FUNC_4(VAR_1);
 FUNC_0("%x %x\n", VAR_0->valid, VAR_0->format);

 switch (VAR_0->valid) {
 case 0xC0:

  switch (VAR_0->format) {
  case 0x01:
   FUNC_2(VAR_2->dma_dev->unit_address,
       0xC002000000000000, 0);
   break;
  case 0x02:
   break;
  default:
   FUNC_1("Unknown format %u\n", VAR_0->format);
  }
  break;
 case 0xFF:

  break;
 case 0x80:

  switch (VAR_0->format) {
  case 128:
  case 130:
   FUNC_3(VAR_0, VAR_1);
   break;
  case 129:
  case 133:
  case 131:
  case 132:
   FUNC_1("Unsupported format %u\n", VAR_0->format);
   break;
  default:
   FUNC_1("Unknown format %u\n", VAR_0->format);
  }
  break;
 default:
  FUNC_1("unknown message type 0x%02x!?\n", VAR_0->valid);
 }
}
