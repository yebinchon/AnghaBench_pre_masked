
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cond; int lock; int buffer; } ;
typedef TYPE_2__ coreaudio_t ;
typedef int UInt32 ;
struct TYPE_7__ {int mNumberBuffers; TYPE_1__* mBuffers; } ;
struct TYPE_5__ {unsigned int mDataByteSize; void* mData; } ;
typedef int OSStatus ;
typedef int AudioUnitRenderActionFlags ;
typedef int AudioTimeStamp ;
typedef TYPE_3__ AudioBufferList ;


 int FUNC_0 (int ,void*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (void*,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static OSStatus FUNC_6(void *VAR_2,
      AudioUnitRenderActionFlags *VAR_3,
      const AudioTimeStamp *VAR_4, UInt32 VAR_5,
      UInt32 VAR_6, AudioBufferList *VAR_7)
{
   unsigned VAR_8;
   void *VAR_9 = ((void*)0);
   coreaudio_t *VAR_10 = (coreaudio_t*)VAR_2;

   (void)VAR_4;
   (void)VAR_5;
   (void)VAR_6;

   if (!VAR_7 || VAR_7->mNumberBuffers != 1)
      return VAR_1;

   VAR_8 = VAR_7->mBuffers[0].mDataByteSize;
   VAR_9 = VAR_7->mBuffers[0].mData;

   FUNC_4(VAR_10->lock);

   if (FUNC_1(VAR_10->buffer) < VAR_8)
   {
      *VAR_3 = VAR_0;


      FUNC_2(VAR_9, 0, VAR_8);

      FUNC_5(VAR_10->lock);


      FUNC_3(VAR_10->cond);
      return VAR_1;
   }

   FUNC_0(VAR_10->buffer, VAR_9, VAR_8);
   FUNC_5(VAR_10->lock);
   FUNC_3(VAR_10->cond);
   return VAR_1;
}
