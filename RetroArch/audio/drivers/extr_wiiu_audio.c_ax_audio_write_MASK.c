
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
typedef size_t ssize_t ;
struct TYPE_3__ {size_t written; size_t pos; int mvoice; int spinlock; int * buffer_r; int * buffer_l; scalar_t__ nonblocking; } ;
typedef TYPE_1__ ax_audio_t ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static ssize_t FUNC_8(void* VAR_3, const void* VAR_4, size_t VAR_5)
{
   uint32_t VAR_6;
   size_t VAR_7 = 0;
   ax_audio_t* VAR_8 = (ax_audio_t*)VAR_3;
   const uint16_t* VAR_9 = VAR_4;
   size_t VAR_10 = VAR_5 >> 2;

   if(!VAR_5 || (VAR_5 & 0x3))
      return 0;

   if(VAR_10 > VAR_1)
      VAR_10 = VAR_1;

   VAR_7 = ((VAR_8->written > VAR_1) ? 0 : (VAR_1 - VAR_8->written));

   if (VAR_8->nonblocking)
   {

      if(VAR_7 < VAR_2)
         VAR_10 = 0;
   }
   else if(VAR_7 < VAR_10)
   {

      while(FUNC_0(VAR_8->mvoice) && (VAR_7 < VAR_10))
      {
         FUNC_5();
         VAR_7 = (VAR_8->written > VAR_1 ? 0 : (VAR_1 - VAR_8->written));
      }
   }


   if(VAR_10 > VAR_7)
      VAR_10 = VAR_7;


   if(VAR_10 > 0)
   {

      size_t VAR_11 = VAR_8->pos;
      int VAR_12 = 0;
      int VAR_13 = 0;

      for (VAR_6 = 0; VAR_6 < (VAR_10 << 1); VAR_6 += 2)
      {
         VAR_8->buffer_l[VAR_8->pos] = VAR_9[VAR_6];
         VAR_8->buffer_r[VAR_8->pos] = VAR_9[VAR_6 + 1];
         VAR_8->pos = FUNC_6(VAR_8->pos + 1);


         if(VAR_8->pos == 0)
         {
            VAR_12 = 1;
            VAR_13 = ((VAR_10 << 1) - VAR_6);
            FUNC_2(VAR_8->buffer_l+VAR_11, (VAR_0-VAR_11) << 1);
            FUNC_2(VAR_8->buffer_r+VAR_11, (VAR_0-VAR_11) << 1);
         }
      }


      if(!VAR_12)
      {
         FUNC_2(VAR_8->buffer_l+VAR_11, VAR_10 << 1);
         FUNC_1(VAR_8->buffer_r+VAR_11, VAR_10 << 1);
      }

      else if(VAR_13 > 0)
      {
         FUNC_2(VAR_8->buffer_l, VAR_13);
         FUNC_1(VAR_8->buffer_r, VAR_13);
      }


      if(FUNC_3(&VAR_8->spinlock))
      {
         VAR_8->written += VAR_10;
         FUNC_4(&VAR_8->spinlock);
      }
   }





   if(!FUNC_0(VAR_8->mvoice))
      FUNC_7(VAR_8, 0);


   return (VAR_10 << 2);
}
