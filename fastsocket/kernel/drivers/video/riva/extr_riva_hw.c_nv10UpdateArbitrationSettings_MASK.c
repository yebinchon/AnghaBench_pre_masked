
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char pix_bpp; int memory_type; int memory_width; char mem_latency; int mem_aligned; char mem_page_miss; unsigned int pclk_khz; unsigned int mclk_khz; unsigned int nvclk_khz; scalar_t__ gr_during_vid; scalar_t__ enable_mp; scalar_t__ enable_video; } ;
typedef TYPE_1__ nv10_sim_state ;
struct TYPE_8__ {int graphics_burst_size; int graphics_lwm; scalar_t__ valid; } ;
typedef TYPE_2__ nv10_fifo_info ;
struct TYPE_9__ {unsigned int CrystalFreqKHz; int * PEXTDEV; int * PFB; int * PRAMDAC0; } ;
typedef TYPE_3__ RIVA_HW_INST ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2
(
    unsigned VAR_0,
    unsigned VAR_1,
    unsigned *VAR_2,
    unsigned *VAR_3,
    RIVA_HW_INST *VAR_4
)
{
    nv10_fifo_info VAR_5;
    nv10_sim_state VAR_6;
    unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_10 = FUNC_0(&VAR_4->PRAMDAC0[0x00000504/4], 0);
    VAR_7 = (VAR_10 >> 0) & 0xFF; VAR_8 = (VAR_10 >> 8) & 0xFF; VAR_9 = (VAR_10 >> 16) & 0x0F;
    VAR_11 = (VAR_8 * VAR_4->CrystalFreqKHz / VAR_7) >> VAR_9;
    VAR_10 = FUNC_0(&VAR_4->PRAMDAC0[0x00000500/4], 0);
    VAR_7 = (VAR_10 >> 0) & 0xFF; VAR_8 = (VAR_10 >> 8) & 0xFF; VAR_9 = (VAR_10 >> 16) & 0x0F;
    VAR_12 = (VAR_8 * VAR_4->CrystalFreqKHz / VAR_7) >> VAR_9;
    VAR_13 = FUNC_0(&VAR_4->PFB[0x00000204/4], 0);
    VAR_6.pix_bpp = (char)VAR_1;
    VAR_6.enable_video = 0;
    VAR_6.enable_mp = 0;
    VAR_6.memory_type = (FUNC_0(&VAR_4->PFB[0x00000200/4], 0) & 0x01) ?
 1 : 0;
    VAR_6.memory_width = (FUNC_0(&VAR_4->PEXTDEV[0x00000000/4], 0) & 0x10) ?
 128 : 64;
    VAR_6.mem_latency = (char)VAR_13 & 0x0F;
    VAR_6.mem_aligned = 1;
    VAR_6.mem_page_miss = (char)(((VAR_13 >> 4) &0x0F) + ((VAR_13 >> 31) & 0x01));
    VAR_6.gr_during_vid = 0;
    VAR_6.pclk_khz = VAR_0;
    VAR_6.mclk_khz = VAR_11;
    VAR_6.nvclk_khz = VAR_12;
    FUNC_1(&VAR_5, &VAR_6);
    if (VAR_5.valid)
    {
        int VAR_14 = VAR_5.graphics_burst_size >> 4;
        *VAR_2 = 0;
        while (VAR_14 >>= 1)
     (*VAR_2)++;
        *VAR_3 = VAR_5.graphics_lwm >> 3;
    }
}
