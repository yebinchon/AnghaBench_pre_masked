
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int bufsize; unsigned int bufptr; int write_buffer; int buffers; int pSourceVoice; scalar_t__ buf; int hEvent; } ;
typedef TYPE_1__ xaudio2_t ;
struct TYPE_7__ {TYPE_1__* xa; scalar_t__ nonblock; } ;
typedef TYPE_2__ xa_t ;
typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_8__ {unsigned int AudioBytes; int * pContext; scalar_t__ LoopCount; scalar_t__ LoopLength; scalar_t__ LoopBegin; scalar_t__ PlayLength; scalar_t__ PlayBegin; scalar_t__ pAudioData; scalar_t__ Flags; } ;
typedef TYPE_3__ XAUDIO2_BUFFER ;
typedef int LONG ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*,int *) ;
 int FUNC_2 (int volatile*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int ,int ) ;
 size_t FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int const*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_7(void *VAR_3, const void *VAR_4, size_t VAR_5)
{
   unsigned VAR_6;
   xa_t *VAR_7 = (xa_t*)VAR_3;
   xaudio2_t *VAR_8 = VAR_7->xa;
   const uint8_t *VAR_9 = (const uint8_t*)VAR_4;

   if (VAR_7->nonblock)
   {
      size_t VAR_10 = FUNC_5(VAR_7->xa);

      if (VAR_10 == 0)
         return 0;
      if (VAR_10 < VAR_5)
         VAR_5 = VAR_10;
   }

   VAR_6 = VAR_5;

   while (VAR_6)
   {
      unsigned VAR_11 = FUNC_3(VAR_6, VAR_8->bufsize - VAR_8->bufptr);

      FUNC_6(VAR_8->buf + VAR_8->write_buffer *
            VAR_8->bufsize + VAR_8->bufptr,
            VAR_9, VAR_11);

      VAR_8->bufptr += VAR_11;
      VAR_9 += VAR_11;
      VAR_6 -= VAR_11;

      if (VAR_8->bufptr == VAR_8->bufsize)
      {
         XAUDIO2_BUFFER VAR_12;

         while (VAR_8->buffers == VAR_1 - 1)
            FUNC_4(VAR_8->hEvent, VAR_0);

         VAR_12.Flags = 0;
         VAR_12.AudioBytes = VAR_8->bufsize;
         VAR_12.pAudioData = VAR_8->buf + VAR_8->write_buffer * VAR_8->bufsize;
         VAR_12.PlayBegin = 0;
         VAR_12.PlayLength = 0;
         VAR_12.LoopBegin = 0;
         VAR_12.LoopLength = 0;
         VAR_12.LoopCount = 0;
         VAR_12.pContext = ((void*)0);

         if (FUNC_0(FUNC_1(
                     VAR_8->pSourceVoice, &VAR_12, ((void*)0))))
         {
            if (VAR_5 > 0)
               return -1;
            return 0;
         }

         FUNC_2((LONG volatile*)&VAR_8->buffers);
         VAR_8->bufptr = 0;
         VAR_8->write_buffer = (VAR_8->write_buffer + 1) & VAR_2;
      }
   }

   return VAR_5;
}
