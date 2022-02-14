
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sgivw_par {scalar_t__ cmap_fifo; TYPE_1__* regs; } ;
struct fb_info {scalar_t__ par; } ;
struct TYPE_2__ {scalar_t__ cm_fifo; int* cmap; } ;



__attribute__((used)) static int FUNC_0(u_int VAR_0, u_int VAR_1, u_int VAR_2,
        u_int VAR_3, u_int VAR_4,
        struct fb_info *VAR_5)
{
 struct sgivw_par *VAR_6 = (struct sgivw_par *) VAR_5->par;

 if (VAR_0 > 255)
  return 1;
 VAR_1 >>= 8;
 VAR_2 >>= 8;
 VAR_3 >>= 8;


 while (VAR_6->cmap_fifo == 0)
  VAR_6->cmap_fifo = VAR_6->regs->cm_fifo;

 VAR_6->regs->cmap[VAR_0] = (VAR_1 << 24) | (VAR_2 << 16) | (VAR_3 << 8);
 VAR_6->cmap_fifo--;
 return 0;
}
