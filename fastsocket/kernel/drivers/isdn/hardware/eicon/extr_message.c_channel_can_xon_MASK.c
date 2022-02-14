
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef size_t byte ;
struct TYPE_7__ {int MaxBuffer; int* DataNCCI; } ;
struct TYPE_6__ {int* ch_ncci; scalar_t__ Id; } ;
struct TYPE_5__ {TYPE_2__* adapter; TYPE_3__* appl; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef TYPE_3__ APPL ;



__attribute__((used)) static int FUNC_0 (PLCI * VAR_0, byte VAR_1) {
  APPL * VAR_2;
  DIVA_CAPI_ADAPTER * VAR_3;
  word VAR_4;
  dword VAR_5;
  word VAR_6;
  word VAR_7;

  VAR_2 = VAR_0->appl;
  VAR_3 = VAR_0->adapter;

  if (!VAR_2)
    return (0);

  VAR_4 = VAR_3->ch_ncci[VAR_1] | (((word) VAR_3->Id) << 8);




  VAR_5 = 0;
  VAR_6 = 0xffff;
  for(VAR_7=0; VAR_7<VAR_2->MaxBuffer; VAR_7++) {
    if(VAR_4==VAR_2->DataNCCI[VAR_7]) VAR_5++;
    if(!VAR_2->DataNCCI[VAR_7] && VAR_6==0xffff) VAR_6 = VAR_7;
  }
  if ((VAR_5 > 2) || (VAR_6 == 0xffff)) {
    return (0);
  }
  return (1);
}
