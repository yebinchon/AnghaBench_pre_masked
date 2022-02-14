
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ payload_size; int header_size; int skip_payload; scalar_t__ max_payload_size; int header; } ;
struct uvc_streaming {TYPE_1__ bulk; int queue; } ;
struct uvc_buffer {scalar_t__ state; } ;
struct urb {int actual_length; int transfer_buffer_length; int * transfer_buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 struct uvc_buffer* FUNC_1 (int *,struct uvc_buffer*) ;
 int FUNC_2 (struct uvc_streaming*,struct uvc_buffer*,int *,int) ;
 int FUNC_3 (struct uvc_streaming*,struct uvc_buffer*,int ,scalar_t__) ;
 int FUNC_4 (struct uvc_streaming*,struct uvc_buffer*,int *,int) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_2, struct uvc_streaming *VAR_3,
 struct uvc_buffer *VAR_4)
{
 u8 *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->actual_length == 0)
  return;

 VAR_5 = VAR_2->transfer_buffer;
 VAR_6 = VAR_2->actual_length;
 VAR_3->bulk.payload_size += VAR_6;




 if (VAR_3->bulk.header_size == 0 && !VAR_3->bulk.skip_payload) {
  do {
   VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
   if (VAR_7 == -VAR_0)
    VAR_4 = FUNC_1(&VAR_3->queue,
           VAR_4);
  } while (VAR_7 == -VAR_0);


  if (VAR_7 < 0 || VAR_4 == ((void*)0)) {
   VAR_3->bulk.skip_payload = 1;
  } else {
   FUNC_0(VAR_3->bulk.header, VAR_5, VAR_7);
   VAR_3->bulk.header_size = VAR_7;

   VAR_5 += VAR_7;
   VAR_6 -= VAR_7;
  }
 }







 if (!VAR_3->bulk.skip_payload && VAR_4 != ((void*)0))
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);




 if (VAR_2->actual_length < VAR_2->transfer_buffer_length ||
     VAR_3->bulk.payload_size >= VAR_3->bulk.max_payload_size) {
  if (!VAR_3->bulk.skip_payload && VAR_4 != ((void*)0)) {
   FUNC_3(VAR_3, VAR_4, VAR_3->bulk.header,
    VAR_3->bulk.payload_size);
   if (VAR_4->state == VAR_1)
    VAR_4 = FUNC_1(&VAR_3->queue,
           VAR_4);
  }

  VAR_3->bulk.header_size = 0;
  VAR_3->bulk.skip_payload = 0;
  VAR_3->bulk.payload_size = 0;
 }
}
