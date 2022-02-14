
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rec_frame_size; scalar_t__ rec_codec; int intercom; int read_buffer_ready; scalar_t__* ixj_signals; int poll_q; int read_q; int frameswritten; scalar_t__ DSPbase; void** read_buffer; int framesread; } ;
typedef TYPE_1__ IXJ ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,size_t,int ) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(IXJ *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->read_buffer) {
  for (VAR_4 = 0; VAR_4 < VAR_3->rec_frame_size * 2; VAR_4 += 2) {
   if (!(VAR_4 % 16) && !FUNC_0(VAR_3)) {
    VAR_5 = 0;
    while (!FUNC_0(VAR_3)) {
     if (VAR_5++ > 5) {
      VAR_5 = 0;
      break;
     }
     FUNC_6(10);
    }
   }

   if (VAR_3->rec_codec == VAR_0 && (VAR_4 == 0 || VAR_4 == 10 || VAR_4 == 20)) {
    FUNC_3(VAR_3->DSPbase + 0x0E);
    FUNC_3(VAR_3->DSPbase + 0x0F);
   }
   *(VAR_3->read_buffer + VAR_4) = FUNC_3(VAR_3->DSPbase + 0x0E);
   *(VAR_3->read_buffer + VAR_4 + 1) = FUNC_3(VAR_3->DSPbase + 0x0F);
  }
  ++VAR_3->framesread;
  if (VAR_3->intercom != -1) {
   if (FUNC_1(FUNC_2(VAR_3->intercom))) {
    for (VAR_4 = 0; VAR_4 < VAR_3->rec_frame_size * 2; VAR_4 += 2) {
     if (!(VAR_4 % 16) && !FUNC_1(VAR_3)) {
      VAR_5 = 0;
      while (!FUNC_1(VAR_3)) {
       if (VAR_5++ > 5) {
        VAR_5 = 0;
        break;
       }
       FUNC_6(10);
      }
     }
     FUNC_5(*(VAR_3->read_buffer + VAR_4), FUNC_2(VAR_3->intercom)->DSPbase + 0x0C);
     FUNC_5(*(VAR_3->read_buffer + VAR_4 + 1), FUNC_2(VAR_3->intercom)->DSPbase + 0x0D);
    }
    FUNC_2(VAR_3->intercom)->frameswritten++;
   }
  } else {
   VAR_3->read_buffer_ready = 1;
   FUNC_7(&VAR_3->read_q);

   FUNC_7(&VAR_3->poll_q);

   if(VAR_3->ixj_signals[VAR_2])
    FUNC_4(VAR_3, VAR_2, VAR_1);
  }
 }
}
