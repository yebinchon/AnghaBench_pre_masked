
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwc_device {int ptrlock; TYPE_1__* fill_frame; TYPE_1__* full_frames; TYPE_1__* empty_frames; TYPE_1__* full_frames_tail; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct pwc_device *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 VAR_2 = 0;
 FUNC_1(&VAR_1->ptrlock, VAR_3);
 if (VAR_1->fill_frame != ((void*)0)) {

  if (VAR_1->full_frames == ((void*)0)) {
   VAR_1->full_frames = VAR_1->fill_frame;
   VAR_1->full_frames_tail = VAR_1->full_frames;
  }
  else {
   VAR_1->full_frames_tail->next = VAR_1->fill_frame;
   VAR_1->full_frames_tail = VAR_1->fill_frame;
  }
 }
 if (VAR_1->empty_frames != ((void*)0)) {

  VAR_1->fill_frame = VAR_1->empty_frames;
  VAR_1->empty_frames = VAR_1->empty_frames->next;
 }
 else {


  if (VAR_1->full_frames == ((void*)0)) {
   FUNC_0("Neither empty or full frames available!\n");
   FUNC_2(&VAR_1->ptrlock, VAR_3);
   return -VAR_0;
  }
  VAR_1->fill_frame = VAR_1->full_frames;
  VAR_1->full_frames = VAR_1->full_frames->next;
  VAR_2 = 1;
 }
 VAR_1->fill_frame->next = ((void*)0);
 FUNC_2(&VAR_1->ptrlock, VAR_3);
 return VAR_2;
}
