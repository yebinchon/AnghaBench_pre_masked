
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef size_t ssize_t ;
struct TYPE_3__ {int playpos; int pos; int * r; int * l; scalar_t__ nonblocking; } ;
typedef TYPE_1__ ctr_csnd_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static ssize_t FUNC_3(void *VAR_3, const void *VAR_4, size_t VAR_5)
{
   int VAR_6;
   uint32_t VAR_7 = 0;
   uint64_t VAR_8 = 0;
   const uint16_t *VAR_9 = VAR_4;
   ctr_csnd_audio_t *VAR_10 = (ctr_csnd_audio_t*)VAR_3;

   (void)VAR_3;
   (void)VAR_4;
   (void)VAR_7;
   (void)VAR_8;

   FUNC_1(VAR_10);

   if((((VAR_10->playpos - VAR_10->pos) & VAR_1) < (VAR_0 >> 2)) ||
      (((VAR_10->pos - VAR_10->playpos ) & VAR_1) < (VAR_0 >> 4)) ||
      (((VAR_10->playpos - VAR_10->pos) & VAR_1) < (VAR_5 >> 2)))
   {
      if (VAR_10->nonblocking)
         VAR_10->pos = (VAR_10->playpos + (VAR_0 >> 1)) & VAR_1;
      else
      {
         do{

            FUNC_2(1);
            FUNC_1(VAR_10);
         }while (((VAR_10->playpos - VAR_10->pos) & VAR_1) < (VAR_0 >> 1)
                 || (((VAR_10->pos - VAR_10->playpos) & VAR_1) < (VAR_0 >> 4)));
      }
   }

   for (VAR_6 = 0; VAR_6 < (VAR_5 >> 1); VAR_6 += 2)
   {
      VAR_10->l[VAR_10->pos] = VAR_9[VAR_6];
      VAR_10->r[VAR_10->pos] = VAR_9[VAR_6 + 1];
      VAR_10->pos++;
      VAR_10->pos &= VAR_1;
   }

   FUNC_0(VAR_10->l, VAR_2);
   FUNC_0(VAR_10->r, VAR_2);

   return VAR_5;
}
