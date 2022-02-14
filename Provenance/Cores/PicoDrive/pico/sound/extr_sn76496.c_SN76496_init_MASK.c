
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN76496 {int* Register; int SampleRate; int* Output; int RNG; int UpdateStep; int * Count; int * Period; scalar_t__ LastRegister; scalar_t__* Volume; } ;


 int VAR_0 ;
 int FUNC_0 (struct SN76496*,int) ;
 int FUNC_1 (struct SN76496*,int ) ;
 struct SN76496 VAR_1 ;
 int* VAR_2 ;

int FUNC_2(int VAR_3,int VAR_4)
{
 struct SN76496 *VAR_5 = &VAR_1;
 int VAR_6;


 VAR_2 = VAR_5->Register;

 VAR_5->SampleRate = VAR_4;
 FUNC_0(VAR_5,VAR_3);

 for (VAR_6 = 0;VAR_6 < 4;VAR_6++) VAR_5->Volume[VAR_6] = 0;

 VAR_5->LastRegister = 0;
 for (VAR_6 = 0;VAR_6 < 8;VAR_6+=2)
 {
  VAR_5->Register[VAR_6] = 0;
  VAR_5->Register[VAR_6 + 1] = 0x0f;
 }

 for (VAR_6 = 0;VAR_6 < 4;VAR_6++)
 {
  VAR_5->Output[VAR_6] = 0;
  VAR_5->Period[VAR_6] = VAR_5->Count[VAR_6] = VAR_5->UpdateStep;
 }
 VAR_5->RNG = VAR_0;
 VAR_5->Output[3] = VAR_5->RNG & 1;


 FUNC_1(VAR_5, 0);

 return 0;
}
