
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int polled; int * callback; int arqhandle; } ;
typedef int ARQRequest ;
typedef TYPE_1__ ARQM_Info ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(ARQRequest *VAR_3)
{
 u32 VAR_4;
 ARQM_Info *VAR_5 = ((void*)0);

 for(VAR_4=0;VAR_4<VAR_0;VAR_4++) {
  VAR_5 = &VAR_2[VAR_4];
  if(VAR_3==&VAR_5->arqhandle) break;
 }
 if(VAR_4>=VAR_0) return;

 VAR_5->callback = ((void*)0);
 VAR_5->polled = VAR_1;
}
