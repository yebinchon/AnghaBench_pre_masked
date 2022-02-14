
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct nvidia_par {int Chipset; unsigned int CrystalFreqKHz; int PRAMDAC0; } ;
struct TYPE_5__ {char pix_bpp; int memory_type; int memory_width; int mem_latency; int mem_aligned; int mem_page_miss; unsigned int pclk_khz; unsigned int mclk_khz; unsigned int nvclk_khz; scalar_t__ gr_during_vid; scalar_t__ enable_mp; scalar_t__ enable_video; } ;
typedef TYPE_1__ nv10_sim_state ;
struct TYPE_6__ {int graphics_burst_size; int graphics_lwm; scalar_t__ valid; } ;
typedef TYPE_2__ nv10_fifo_info ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int) ;
 int FUNC_4 (struct pci_dev*,int,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(unsigned VAR_0,
         unsigned VAR_1,
         unsigned *VAR_2,
         unsigned *VAR_3,
         struct nvidia_par *VAR_4)
{
 nv10_fifo_info VAR_5;
 nv10_sim_state VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct pci_dev *VAR_14;

 if ((VAR_4->Chipset & 0x0FF0) == 0x01A0) {
  unsigned int VAR_15;
  VAR_14 = FUNC_3(0, 3);
  FUNC_4(VAR_14, 0x6C, &VAR_15);
  VAR_15 = (VAR_15 >> 8) & 0xf;

  if (!VAR_15)
   VAR_15 = 4;
  VAR_11 = 400000 / VAR_15;
 } else {
  VAR_14 = FUNC_3(0, 5);
  FUNC_4(VAR_14, 0x4c, &VAR_11);
  VAR_11 /= 1000;
 }
 FUNC_2(VAR_14);
 VAR_10 = FUNC_0(VAR_4->PRAMDAC0, 0x0500);
 VAR_7 = (VAR_10 >> 0) & 0xFF;
 VAR_8 = (VAR_10 >> 8) & 0xFF;
 VAR_9 = (VAR_10 >> 16) & 0x0F;
 VAR_12 = (VAR_8 * VAR_4->CrystalFreqKHz / VAR_7) >> VAR_9;
 VAR_6.pix_bpp = (char)VAR_1;
 VAR_6.enable_video = 0;
 VAR_6.enable_mp = 0;
 VAR_14 = FUNC_3(0, 1);
 FUNC_4(VAR_14, 0x7C, &VAR_6.memory_type);
 FUNC_2(VAR_14);
 VAR_6.memory_type = (VAR_6.memory_type >> 12) & 1;
 VAR_6.memory_width = 64;

 VAR_14 = FUNC_3(0, 3);
 FUNC_4(VAR_14, 0, &VAR_13);
 FUNC_2(VAR_14);
 VAR_13 >>= 16;

 if ((VAR_13 == 0x1A9) || (VAR_13 == 0x1AB) || (VAR_13 == 0x1ED)) {
  u32 VAR_16[3];

  VAR_14 = FUNC_3(0, 2);
  FUNC_4(VAR_14, 0x40, &VAR_16[0]);
  VAR_16[0] = (VAR_16[0] >> 8) & 0x4f;
  FUNC_4(VAR_14, 0x44, &VAR_16[1]);
  VAR_16[1] = (VAR_16[1] >> 8) & 0x4f;
  FUNC_4(VAR_14, 0x48, &VAR_16[2]);
  VAR_16[2] = (VAR_16[2] >> 8) & 0x4f;

  if ((VAR_16[0] + VAR_16[1]) != VAR_16[2]) {
   FUNC_5("nvidiafb: your nForce DIMMs are not arranged "
          "in optimal banks!\n");
  }
  FUNC_2(VAR_14);
 }

 VAR_6.mem_latency = 3;
 VAR_6.mem_aligned = 1;
 VAR_6.mem_page_miss = 10;
 VAR_6.gr_during_vid = 0;
 VAR_6.pclk_khz = VAR_0;
 VAR_6.mclk_khz = VAR_11;
 VAR_6.nvclk_khz = VAR_12;
 FUNC_1(&VAR_5, &VAR_6);
 if (VAR_5.valid) {
  int VAR_17 = VAR_5.graphics_burst_size >> 4;
  *VAR_2 = 0;
  while (VAR_17 >>= 1)
   (*VAR_2)++;
  *VAR_3 = VAR_5.graphics_lwm >> 3;
 }
}
