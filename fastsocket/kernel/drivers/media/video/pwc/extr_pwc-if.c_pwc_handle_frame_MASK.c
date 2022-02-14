
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwc_device {int ptrlock; TYPE_1__* read_frame; TYPE_1__* empty_frames_tail; TYPE_1__* empty_frames; TYPE_1__* full_frames; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pwc_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct pwc_device *VAR_0)
{
 int VAR_1 = 0;
 unsigned long VAR_2;

 FUNC_2(&VAR_0->ptrlock, VAR_2);


 if (VAR_0->read_frame != ((void*)0)) {

  FUNC_0("Huh? Read frame still in use?\n");
  FUNC_3(&VAR_0->ptrlock, VAR_2);
  return VAR_1;
 }


 if (VAR_0->full_frames == ((void*)0)) {
  FUNC_0("Woops. No frames ready.\n");
 }
 else {
  VAR_0->read_frame = VAR_0->full_frames;
  VAR_0->full_frames = VAR_0->full_frames->next;
  VAR_0->read_frame->next = ((void*)0);
 }

 if (VAR_0->read_frame != ((void*)0)) {




  FUNC_3(&VAR_0->ptrlock, VAR_2);
  VAR_1 = FUNC_1(VAR_0);
  FUNC_2(&VAR_0->ptrlock, VAR_2);


  if (VAR_0->empty_frames == ((void*)0)) {
   VAR_0->empty_frames = VAR_0->read_frame;
   VAR_0->empty_frames_tail = VAR_0->empty_frames;
  }
  else {
   VAR_0->empty_frames_tail->next = VAR_0->read_frame;
   VAR_0->empty_frames_tail = VAR_0->read_frame;
  }
  VAR_0->read_frame = ((void*)0);
 }
 FUNC_3(&VAR_0->ptrlock, VAR_2);
 return VAR_1;
}
