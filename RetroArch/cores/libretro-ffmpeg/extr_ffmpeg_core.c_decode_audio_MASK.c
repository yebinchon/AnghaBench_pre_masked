
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef int int16_t ;
struct TYPE_13__ {TYPE_1__** streams; } ;
struct TYPE_12__ {int nb_samples; scalar_t__ data; } ;
struct TYPE_11__ {int data; int size; } ;
struct TYPE_10__ {int time_base; } ;
typedef int SwrContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,TYPE_3__*,int*,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int *,size_t) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int **,int,int const**,int) ;

__attribute__((used)) static int16_t *FUNC_13(AVCodecContext *VAR_11, AVPacket *VAR_12,
      AVFrame *VAR_13, int16_t *VAR_14, size_t *VAR_15,
      SwrContext *VAR_16)
{
   AVPacket VAR_17 = *VAR_12;
   int VAR_18 = 0;

   for (;;)
   {
      int64_t VAR_19;
      size_t VAR_20;
      int VAR_21 = FUNC_3(VAR_11, VAR_13, &VAR_18, &VAR_17);

      if (VAR_21 < 0)
         return VAR_14;

      VAR_17.data += VAR_21;
      VAR_17.size -= VAR_21;

      if (!VAR_18)
         break;

      VAR_20 = VAR_13->nb_samples * sizeof(int16_t) * 2;
      if (VAR_20 > *VAR_15)
      {
         VAR_14 = (int16_t*)FUNC_2(VAR_14, VAR_20);
         *VAR_15 = VAR_20;
      }

      FUNC_12(VAR_16,
            (uint8_t**)&VAR_14,
            VAR_13->nb_samples,
            (const uint8_t**)VAR_13->data,
            VAR_13->nb_samples);

      VAR_19 = FUNC_0(VAR_13);
      FUNC_10(VAR_9);

      while (!VAR_5 && FUNC_6(VAR_1) < VAR_20)
      {
         if (!VAR_10)
            FUNC_9(VAR_8, VAR_9);
         else
         {
            FUNC_7(VAR_0, "Thread: Audio deadlock detected ...\n");
            FUNC_4(VAR_1);
            break;
         }
      }

      VAR_4 = VAR_19 * FUNC_1(
            VAR_6->streams[VAR_2[VAR_3]]->time_base);

      if (!VAR_5)
         FUNC_5(VAR_1, VAR_14, VAR_20);

      FUNC_8(VAR_7);
      FUNC_11(VAR_9);
   }

   return VAR_14;
}
