
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nv_sim_state {int pclk_khz; int mclk_khz; int nvclk_khz; int bpp; int memory_type; int memory_width; int mem_latency; int mem_page_miss; int two_heads; } ;
struct nv_fifo_info {int burst; int lwm; } ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int pci_device; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct nv_fifo_info*,struct nv_sim_state*) ;
 int FUNC_5 (struct nv_fifo_info*,struct nv_sim_state*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (struct nouveau_device*,int ) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,int*) ;

__attribute__((used)) static void
FUNC_11(struct drm_device *VAR_6, int VAR_7, int VAR_8,
  int *VAR_9, int *VAR_10)
{
 struct nouveau_drm *VAR_11 = FUNC_2(VAR_6);
 struct nouveau_device *VAR_12 = FUNC_1(VAR_6);
 struct nv_fifo_info VAR_13;
 struct nv_sim_state VAR_14;
 int VAR_15 = FUNC_3(VAR_6, VAR_5);
 int VAR_16 = FUNC_3(VAR_6, VAR_4);
 uint32_t VAR_17 = FUNC_7(VAR_12, VAR_1);

 VAR_14.pclk_khz = VAR_7;
 VAR_14.mclk_khz = VAR_15;
 VAR_14.nvclk_khz = VAR_16;
 VAR_14.bpp = VAR_8;
 VAR_14.two_heads = FUNC_8(VAR_6);
 if ((VAR_6->pci_device & 0xffff) == 0x01a0 ||
     (VAR_6->pci_device & 0xffff) == 0x01f0 ) {
  uint32_t VAR_18;

  FUNC_10(FUNC_9(0, 1), 0x7c, &VAR_18);

  VAR_14.memory_type = (VAR_18 >> 12) & 1;
  VAR_14.memory_width = 64;
  VAR_14.mem_latency = 3;
  VAR_14.mem_page_miss = 10;
 } else {
  VAR_14.memory_type = FUNC_7(VAR_12, VAR_0) & 0x1;
  VAR_14.memory_width = (FUNC_7(VAR_12, VAR_3) & 0x10) ? 128 : 64;
  VAR_14.mem_latency = VAR_17 & 0xf;
  VAR_14.mem_page_miss = ((VAR_17 >> 4) & 0xf) + ((VAR_17 >> 31) & 0x1);
 }

 if (FUNC_6(VAR_11->device)->card_type == VAR_2)
  FUNC_4(&VAR_13, &VAR_14);
 else
  FUNC_5(&VAR_13, &VAR_14);

 *VAR_9 = FUNC_0(VAR_13.burst >> 4);
 *VAR_10 = VAR_13.lwm >> 3;
}
