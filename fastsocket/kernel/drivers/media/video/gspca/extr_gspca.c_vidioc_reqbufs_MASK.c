
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_requestbuffers {int memory; scalar_t__ count; } ;
struct gspca_dev {int const memory; int nframes; int streaming; int queue_lock; int usb_lock; scalar_t__ usb_err; TYPE_1__* frame; struct file* capt_file; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ vma_use_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;

 int FUNC_0 (int ,char*,int,scalar_t__) ;


 int FUNC_1 (struct gspca_dev*,struct file*,int const,scalar_t__) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5, void *VAR_6,
     struct v4l2_requestbuffers *VAR_7)
{
 struct gspca_dev *VAR_8 = VAR_6;
 int VAR_9, VAR_10 = 0, VAR_11;

 VAR_9 = VAR_7->memory;
 switch (VAR_9) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return -VAR_2;
 }
 if (FUNC_6(&VAR_8->queue_lock))
  return -VAR_3;

 if (VAR_8->memory != VAR_4
     && VAR_8->memory != 130
     && VAR_8->memory != VAR_7->memory) {
  VAR_10 = -VAR_1;
  goto out;
 }


 if (VAR_8->capt_file != ((void*)0)
     && VAR_8->capt_file != VAR_5) {
  VAR_10 = -VAR_1;
  goto out;
 }


 for (VAR_9 = 0; VAR_9 < VAR_8->nframes; VAR_9++) {
  if (VAR_8->frame[VAR_9].vma_use_count) {
   VAR_10 = -VAR_1;
   goto out;
  }
 }


 VAR_11 = VAR_8->streaming;
 if (VAR_11) {
  FUNC_5(&VAR_8->usb_lock);
  VAR_8->usb_err = 0;
  FUNC_4(VAR_8);
  FUNC_7(&VAR_8->usb_lock);
 }

 if (VAR_8->memory == 130)
  VAR_11 = 0;


 if (VAR_8->nframes != 0)
  FUNC_2(VAR_8);
 if (VAR_7->count == 0)
  goto out;
 VAR_10 = FUNC_1(VAR_8, VAR_5, VAR_7->memory, VAR_7->count);
 if (VAR_10 == 0) {
  VAR_7->count = VAR_8->nframes;
  if (VAR_11)
   VAR_10 = FUNC_3(VAR_8);
 }
out:
 FUNC_7(&VAR_8->queue_lock);
 FUNC_0(VAR_0, "reqbufs st:%d c:%d", VAR_10, VAR_7->count);
 return VAR_10;
}
