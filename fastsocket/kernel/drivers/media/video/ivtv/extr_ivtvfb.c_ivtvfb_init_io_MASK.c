
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_info {int video_rbase; int video_buffer_size; int video_pbase; int video_vbase; int fb_start_aligned_physaddr; int fb_end_aligned_physaddr; } ;
struct ivtv {int base_addr; int dec_mem; int serialize_lock; struct osd_info* osd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct ivtv*) ;
 scalar_t__ FUNC_3 (struct ivtv*,int*,int*) ;
 int FUNC_4 (int,int ,int) ;
 scalar_t__ FUNC_5 (int,int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ivtv *VAR_4)
{
 struct osd_info *VAR_5 = VAR_4->osd_info;

 FUNC_6(&VAR_4->serialize_lock);
 if (FUNC_2(VAR_4)) {
  FUNC_7(&VAR_4->serialize_lock);
  FUNC_0("Failed to initialize ivtv\n");
  return -VAR_1;
 }
 FUNC_7(&VAR_4->serialize_lock);

 if (FUNC_3(VAR_4, &VAR_5->video_rbase,
     &VAR_5->video_buffer_size) < 0) {
  FUNC_0("Firmware failed to respond\n");
  return -VAR_0;
 }




 VAR_5->video_buffer_size = 1704960;

 VAR_5->video_pbase = VAR_4->base_addr + VAR_2 + VAR_5->video_rbase;
 VAR_5->video_vbase = VAR_4->dec_mem + VAR_5->video_rbase;

 if (!VAR_5->video_vbase) {
  FUNC_0("abort, video memory 0x%x @ 0x%lx isn't mapped!\n",
       VAR_5->video_buffer_size, VAR_5->video_pbase);
  return -VAR_0;
 }

 FUNC_1("Framebuffer at 0x%lx, mapped to 0x%p, size %dk\n",
   VAR_5->video_pbase, VAR_5->video_vbase,
   VAR_5->video_buffer_size / 1024);
 FUNC_4(VAR_5->video_vbase, 0, VAR_5->video_buffer_size);

 return 0;
}
