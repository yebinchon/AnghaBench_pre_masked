
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {unsigned int smem_len; scalar_t__ smem_start; } ;
struct fb_info {unsigned int screen_size; int * screen_base; TYPE_1__ fix; int device; int mm_lock; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int *,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int * FUNC_2 (int ,unsigned int,scalar_t__*,int ) ;
 int FUNC_3 (char*,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_2, unsigned int VAR_3,
      bool VAR_4)
{
 int VAR_5 = 0;
 dma_addr_t VAR_6;

 VAR_2->screen_base = FUNC_2(VAR_2->device,
        VAR_3,
        &VAR_6, VAR_1);

 if (!VAR_2->screen_base) {
  FUNC_1(VAR_2->device, "Cannot allocate %u bytes framebuffer memory\n",
   VAR_3);
  VAR_5 = -VAR_0;
  goto err0;
 }

 if (VAR_4)
  FUNC_4(&VAR_2->mm_lock);
 VAR_2->fix.smem_start = VAR_6;
 VAR_2->fix.smem_len = VAR_3;
 if (VAR_4)
  FUNC_5(&VAR_2->mm_lock);

 FUNC_0(VAR_2->device, "allocated fb @ p=0x%08x, v=0x%p, size=%d.\n",
  (uint32_t) VAR_2->fix.smem_start, VAR_2->screen_base, VAR_2->fix.smem_len);

 VAR_2->screen_size = VAR_2->fix.smem_len;


 FUNC_3((char *)VAR_2->screen_base, 0, VAR_2->fix.smem_len);

 return 0;

err0:
 VAR_2->fix.smem_len = 0;
 VAR_2->fix.smem_start = 0;
 VAR_2->screen_base = ((void*)0);
 return VAR_5;
}
