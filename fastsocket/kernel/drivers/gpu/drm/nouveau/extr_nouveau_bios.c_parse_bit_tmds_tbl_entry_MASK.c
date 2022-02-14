
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_2__ {void* output1_script_ptr; void* output0_script_ptr; } ;
struct nvbios {int* data; TYPE_1__ tmds; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int length; size_t offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (struct nouveau_drm*,char*,int,int) ;
 int FUNC_2 (struct nouveau_drm*,char*) ;
 void* FUNC_3 (int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, struct nvbios *VAR_3, struct bit_entry *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_4(VAR_2);
 uint16_t VAR_6, VAR_7, VAR_8;

 if (VAR_4->length != 2) {
  FUNC_0(VAR_5, "Do not understand BIT TMDS table\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_3->data[VAR_4->offset]);
 if (!VAR_6) {
  FUNC_0(VAR_5, "Pointer to TMDS table invalid\n");
  return -VAR_0;
 }

 FUNC_1(VAR_5, "TMDS table version %d.%d\n",
  VAR_3->data[VAR_6] >> 4, VAR_3->data[VAR_6] & 0xf);


 if (VAR_3->data[VAR_6] != 0x11)
  return -VAR_1;





 VAR_7 = FUNC_3(VAR_3->data[VAR_6 + 7]);
 VAR_8 = FUNC_3(VAR_3->data[VAR_6 + 9]);
 if (VAR_3->data[VAR_7] != 'q' || VAR_3->data[VAR_8] != 'q')
  FUNC_2(VAR_5, "TMDS table script pointers not stubbed\n");

 VAR_3->tmds.output0_script_ptr = FUNC_3(VAR_3->data[VAR_6 + 11]);
 VAR_3->tmds.output1_script_ptr = FUNC_3(VAR_3->data[VAR_6 + 13]);

 return 0;
}
