
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct ihex_binrec {int data; int len; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_5__ {int chipset; unsigned long* warp_pipe_phys; TYPE_1__* warp; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_4__ {unsigned char* handle; unsigned long offset; unsigned int size; } ;


 int FUNC_0 (char*,unsigned long,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_2 (struct platform_device*) ;



 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct platform_device*) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 struct ihex_binrec* FUNC_7 (struct ihex_binrec const*) ;
 int FUNC_8 (unsigned char*,int ,unsigned int) ;
 int FUNC_9 (unsigned long*,int ,int) ;
 struct platform_device* FUNC_10 (char*,int ,int *,int ) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (struct firmware const**,char const*,int *) ;

int FUNC_14(drm_mga_private_t *VAR_6)
{
 unsigned char *VAR_7 = VAR_6->warp->handle;
 unsigned long VAR_8 = VAR_6->warp->offset;
 const char *VAR_9;
 struct platform_device *VAR_10;
 const struct firmware *VAR_11 = ((void*)0);
 const struct ihex_binrec *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = 0;

 switch (VAR_6->chipset) {
 case 129:
 case 128:
  VAR_9 = VAR_3;
  VAR_14 = VAR_5;
  break;
 case 130:
  VAR_9 = VAR_2;
  VAR_14 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_10("mga_warp", 0, ((void*)0), 0);
 if (FUNC_2(VAR_10)) {
  FUNC_1("mga: Failed to register microcode\n");
  return FUNC_4(VAR_10);
 }
 VAR_16 = FUNC_13(&VAR_11, VAR_9, &VAR_10->dev);
 FUNC_11(VAR_10);
 if (VAR_16) {
  FUNC_1("mga: Failed to load microcode \"%s\"\n",
     VAR_9);
  return VAR_16;
 }

 VAR_13 = 0;
 VAR_15 = 0;
 for (VAR_12 = (const struct ihex_binrec *)VAR_11->data;
      VAR_12;
      VAR_12 = FUNC_7(VAR_12)) {
  VAR_13 += FUNC_5(FUNC_6(VAR_12->len));
  VAR_15++;
 }

 if (VAR_15 != VAR_14) {
  FUNC_1("mga: Invalid microcode \"%s\"\n", VAR_9);
  VAR_16 = -VAR_0;
  goto out;
 }
 VAR_13 = FUNC_3(VAR_13);
 FUNC_0("MGA ucode size = %d bytes\n", VAR_13);
 if (VAR_13 > VAR_6->warp->size) {
  FUNC_1("microcode too large! (%u > %lu)\n",
     VAR_13, VAR_6->warp->size);
  VAR_16 = -VAR_1;
  goto out;
 }

 FUNC_9(VAR_6->warp_pipe_phys, 0, sizeof(VAR_6->warp_pipe_phys));

 VAR_15 = 0;
 for (VAR_12 = (const struct ihex_binrec *)VAR_11->data;
      VAR_12;
      VAR_12 = FUNC_7(VAR_12)) {
  unsigned int VAR_17, VAR_18;

  FUNC_0(" pcbase = 0x%08lx  vcbase = %p\n", VAR_8, VAR_7);
  VAR_6->warp_pipe_phys[VAR_15] = VAR_8;
  VAR_17 = FUNC_6(VAR_12->len);
  VAR_18 = FUNC_5(VAR_17);
  FUNC_8(VAR_7, VAR_12->data, VAR_17);
  VAR_8 += VAR_18;
  VAR_7 += VAR_18;
  VAR_15++;
 }

out:
 FUNC_12(VAR_11);
 return VAR_16;
}
