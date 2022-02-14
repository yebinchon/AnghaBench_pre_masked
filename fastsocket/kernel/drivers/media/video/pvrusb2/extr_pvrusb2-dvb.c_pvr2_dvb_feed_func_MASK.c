
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvr2_stream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* stream; } ;
struct pvr2_dvb_adapter {int buffer_wait_data; int * buffer_storage; int demux; TYPE_2__ channel; } ;
struct pvr2_buffer {int dummy; } ;
struct TYPE_3__ {struct pvr2_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_1 () ;
 unsigned int FUNC_2 (struct pvr2_buffer*) ;
 size_t FUNC_3 (struct pvr2_buffer*) ;
 int FUNC_4 (struct pvr2_buffer*) ;
 int FUNC_5 (struct pvr2_buffer*) ;
 struct pvr2_buffer* FUNC_6 (struct pvr2_stream*) ;
 scalar_t__ FUNC_7 (struct pvr2_stream*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct pvr2_dvb_adapter *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;
 struct pvr2_buffer *VAR_4;
 struct pvr2_stream *VAR_5;

 FUNC_8(VAR_0, "dvb feed thread started");
 FUNC_9();

 VAR_5 = VAR_1->channel.stream->stream;

 for (;;) {
  if (FUNC_1()) break;


  FUNC_10();

  VAR_4 = FUNC_6(VAR_5);
  if (VAR_4 != ((void*)0)) {
   VAR_3 = FUNC_2(VAR_4);
   if (VAR_3) {
    FUNC_0(
     &VAR_1->demux,
     VAR_1->buffer_storage[
         FUNC_3(VAR_4)],
     VAR_3);
   } else {
    VAR_2 = FUNC_4(VAR_4);
    if (VAR_2 < 0) break;
   }
   VAR_2 = FUNC_5(VAR_4);
   if (VAR_2 < 0) break;





   continue;
  }




  VAR_2 = FUNC_11(
      VAR_1->buffer_wait_data,
      (FUNC_7(VAR_5) > 0) ||
      FUNC_1());
  if (VAR_2 < 0) break;
 }




 FUNC_8(VAR_0, "dvb feed thread stopped");

 return 0;
}
