
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vfe_cmd_output_ack {int * chromabufaddr; int * ybufaddr; } ;
struct TYPE_3__ {scalar_t__ fragCount; int ackPending; int * nextFrameAddrBuf; } ;
struct TYPE_4__ {TYPE_1__ encPath; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_1(struct vfe_cmd_output_ack *VAR_2)
{
 const uint32_t *VAR_3;
 uint32_t *VAR_4;
 uint8_t VAR_5;

 VAR_4 = VAR_1->encPath.nextFrameAddrBuf;

 FUNC_0("output2_ack: ack addr = 0x%x\n", VAR_2->ybufaddr[0]);

 VAR_3 = VAR_2->ybufaddr;
 for (VAR_5 = 0; VAR_5 < VAR_1->encPath.fragCount; VAR_5++)
  *VAR_4++ = *VAR_3++;

 VAR_3 = VAR_2->chromabufaddr;
 for (VAR_5 = 0; VAR_5 < VAR_1->encPath.fragCount; VAR_5++)
  *VAR_4++ = *VAR_3++;

 VAR_1->encPath.ackPending = VAR_0;
}
