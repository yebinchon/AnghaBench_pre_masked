
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int word ;
typedef int byte ;
struct TYPE_3__ {scalar_t__ req_in; scalar_t__ req_in_start; int* RBuffer; } ;
typedef TYPE_1__ PLCI ;



__attribute__((used)) static void FUNC_0(PLCI * VAR_0, byte VAR_1, byte * VAR_2, word VAR_3)
{
  word VAR_4;

  if(!(VAR_1 &0x80) && !VAR_3) return;

  if(VAR_0->req_in==VAR_0->req_in_start) {
    VAR_0->req_in +=2;
  }
  else {
    VAR_0->req_in--;
  }
  VAR_0->RBuffer[VAR_0->req_in++] = VAR_1;

  if(VAR_2) {
    VAR_0->RBuffer[VAR_0->req_in++] = (byte)VAR_3;
    for(VAR_4=0;VAR_4<VAR_3;VAR_4++) VAR_0->RBuffer[VAR_0->req_in++] = VAR_2[1+VAR_4];
  }

  VAR_0->RBuffer[VAR_0->req_in++] = 0;
}
