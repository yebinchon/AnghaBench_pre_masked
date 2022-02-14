
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nBlockAlign; int wBitsPerSample; unsigned int nChannels; unsigned int nSamplesPerSec; int nAvgBytesPerSec; scalar_t__ cbSize; int wFormatTag; } ;
typedef TYPE_1__ WAVEFORMATEX ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(WAVEFORMATEX *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   VAR_1->wFormatTag = VAR_0;
   VAR_1->nBlockAlign = VAR_2 * sizeof(float);
   VAR_1->wBitsPerSample = sizeof(float) * 8;

   VAR_1->nChannels = VAR_2;
   VAR_1->nSamplesPerSec = VAR_3;
   VAR_1->nAvgBytesPerSec = VAR_1->nSamplesPerSec * VAR_1->nBlockAlign;
   VAR_1->cbSize = 0;
}
