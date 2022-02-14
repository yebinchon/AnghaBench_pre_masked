
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int nChannels; unsigned int nSamplesPerSec; unsigned int nAvgBytesPerSec; int nBlockAlign; int wBitsPerSample; int cbSize; int wFormatTag; } ;
struct TYPE_5__ {int wValidBitsPerSample; } ;
struct TYPE_7__ {TYPE_2__ Format; int SubFormat; int dwChannelMask; TYPE_1__ Samples; } ;
typedef TYPE_3__ WAVEFORMATEXTENSIBLE ;
typedef int GUID ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(WAVEFORMATEXTENSIBLE *VAR_4,
      bool VAR_5, unsigned VAR_6)
{
   VAR_4->Format.nChannels = 2;
   VAR_4->Format.nSamplesPerSec = VAR_6;

   if (VAR_5)
   {
      VAR_4->Format.wFormatTag = VAR_2;
      VAR_4->Format.nAvgBytesPerSec = VAR_6 * 8;
      VAR_4->Format.nBlockAlign = 8;
      VAR_4->Format.wBitsPerSample = 32;
      VAR_4->Format.cbSize = sizeof(WORD) + sizeof(DWORD) + sizeof(GUID);
      VAR_4->Samples.wValidBitsPerSample = 32;
      VAR_4->dwChannelMask = VAR_0;
      VAR_4->SubFormat = VAR_1;
   }
   else
   {
      VAR_4->Format.wFormatTag = VAR_3;
      VAR_4->Format.nAvgBytesPerSec = VAR_6 * 4;
      VAR_4->Format.nBlockAlign = 4;
      VAR_4->Format.wBitsPerSample = 16;
      VAR_4->Format.cbSize = 0;
   }
}
