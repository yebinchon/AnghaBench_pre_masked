
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ byte ;
struct TYPE_8__ {int ReadyInt; int ReqInput; int ReqOutput; } ;
struct TYPE_7__ {int ReadyInt; int (* ram_inc ) (TYPE_1__*,int *) ;scalar_t__ (* ram_in ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ ADAPTER ;


 TYPE_6__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static byte FUNC_3(ADAPTER * VAR_1)
{
  byte VAR_2;
  VAR_2 = (byte)(VAR_1->ram_in(VAR_1, &VAR_0->ReqOutput) -
                      VAR_1->ram_in(VAR_1, &VAR_0->ReqInput));
  if(!VAR_2) {
    if(!VAR_1->ReadyInt) {
      VAR_1->ram_inc(VAR_1, &VAR_0->ReadyInt);
      VAR_1->ReadyInt++;
    }
  }
  return VAR_2;
}
