
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmComResPSFormatDescrHeader {scalar_t__ bPackDataType; scalar_t__ wPackLength; scalar_t__ wPacketLength; scalar_t__ bFormatIndex; } ;
struct TYPE_2__ {int buffercount; scalar_t__ BARLocation; } ;
struct saa7164_port {scalar_t__ nr; TYPE_1__ hwcfg; scalar_t__ bufptr64; scalar_t__ bufptr32h; scalar_t__ bufptr32l; scalar_t__ bufoffset; scalar_t__ bufsize; scalar_t__ pitch; scalar_t__ bufcounter; } ;
struct saa7164_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

int FUNC_1(struct saa7164_dev *VAR_1,
 struct saa7164_port *VAR_2,
 struct tmComResPSFormatDescrHeader *VAR_3)
{
 FUNC_0(VAR_0, "    bFormatIndex = 0x%x\n", VAR_3->bFormatIndex);
 FUNC_0(VAR_0, "    wPacketLength= 0x%x\n", VAR_3->wPacketLength);
 FUNC_0(VAR_0, "    wPackLength=   0x%x\n", VAR_3->wPackLength);
 FUNC_0(VAR_0, "    bPackDataType= 0x%x\n", VAR_3->bPackDataType);



 VAR_2->bufcounter = VAR_2->hwcfg.BARLocation;
 VAR_2->pitch = VAR_2->hwcfg.BARLocation + (2 * sizeof(u32));
 VAR_2->bufsize = VAR_2->hwcfg.BARLocation + (3 * sizeof(u32));
 VAR_2->bufoffset = VAR_2->hwcfg.BARLocation + (4 * sizeof(u32));
 VAR_2->bufptr32l = VAR_2->hwcfg.BARLocation +
  (4 * sizeof(u32)) +
  (sizeof(u32) * VAR_2->hwcfg.buffercount) + sizeof(u32);
 VAR_2->bufptr32h = VAR_2->hwcfg.BARLocation +
  (4 * sizeof(u32)) +
  (sizeof(u32) * VAR_2->hwcfg.buffercount);
 VAR_2->bufptr64 = VAR_2->hwcfg.BARLocation +
  (4 * sizeof(u32)) +
  (sizeof(u32) * VAR_2->hwcfg.buffercount);
 FUNC_0(VAR_0, "   = port->hwcfg.BARLocation = 0x%x\n",
  VAR_2->hwcfg.BARLocation);

 FUNC_0(VAR_0, "   = VS_FORMAT_MPEGPS (becomes dev->enc[%d])\n",
  VAR_2->nr);

 return 0;
}
