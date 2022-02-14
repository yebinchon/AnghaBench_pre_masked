
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int read_pos; int zeroBuffer; int buffer; int cond_lock; int cond; int fifo_lock; scalar_t__ write_pos; scalar_t__ running; int rate; } ;
typedef TYPE_1__ psp_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(void *VAR_5)
{
   psp_audio_t* VAR_6 = (psp_audio_t*)VAR_5;
   FUNC_6(VAR_1, VAR_6->rate, 2);


   while (VAR_6->running)
   {
      bool VAR_7 = 0;
      uint16_t VAR_8 = VAR_6->read_pos;
      uint16_t VAR_9 = VAR_6->read_pos;

      FUNC_9(VAR_6->fifo_lock);

      VAR_7 = ((uint16_t)(VAR_6->write_pos - VAR_8) & VAR_0)
            < (VAR_1 * 2);

      if (!VAR_7)
      {
         VAR_8 += VAR_1;
         VAR_8 &= VAR_0;
         VAR_6->read_pos = VAR_8;
      }

      FUNC_10(VAR_6->fifo_lock);
      FUNC_9(VAR_6->cond_lock);
      FUNC_8(VAR_6->cond);
      FUNC_10(VAR_6->cond_lock);






      FUNC_7(VAR_2, VAR_7 ? (VAR_6->zeroBuffer)
            : (VAR_6->buffer + VAR_8));

   }






   FUNC_5();


   return;
}
