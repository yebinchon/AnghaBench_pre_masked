
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int InitialStatusLength; unsigned int CurrentStatusLength; unsigned int CombinedStatusBufferLength; unsigned char* CombinedStatusBuffer; unsigned char* CurrentStatusBuffer; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static bool FUNC_4(DAC960_Controller_T *VAR_2,
     unsigned int VAR_3)
{
  unsigned char *VAR_4;
  if (VAR_2->InitialStatusLength + 1 +
      VAR_2->CurrentStatusLength + VAR_3 + 1 <=
      VAR_2->CombinedStatusBufferLength)
    return 1;
  if (VAR_2->CombinedStatusBufferLength == 0)
    {
      unsigned int VAR_5 = VAR_0;
      while (VAR_5 < VAR_3)
 VAR_5 *= 2;
      VAR_2->CombinedStatusBuffer = FUNC_2(VAR_5,
        VAR_1);
      if (VAR_2->CombinedStatusBuffer == ((void*)0)) return 0;
      VAR_2->CombinedStatusBufferLength = VAR_5;
      return 1;
    }
  VAR_4 = FUNC_2(2 * VAR_2->CombinedStatusBufferLength,
        VAR_1);
  if (VAR_4 == ((void*)0))
    {
      FUNC_0("Unable to expand Combined Status Buffer - Truncating\n",
       VAR_2);
      return 0;
    }
  FUNC_3(VAR_4, VAR_2->CombinedStatusBuffer,
  VAR_2->CombinedStatusBufferLength);
  FUNC_1(VAR_2->CombinedStatusBuffer);
  VAR_2->CombinedStatusBuffer = VAR_4;
  VAR_2->CombinedStatusBufferLength *= 2;
  VAR_2->CurrentStatusBuffer =
    &VAR_4[VAR_2->InitialStatusLength + 1];
  return 1;
}
