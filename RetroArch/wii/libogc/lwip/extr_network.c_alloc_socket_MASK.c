
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netconn {int dummy; } ;
typedef size_t s32 ;
struct TYPE_2__ {int sendevt; scalar_t__ err; scalar_t__ flags; scalar_t__ rcvevt; scalar_t__ lastoffset; int * lastdata; struct netconn* conn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static s32 FUNC_2(struct netconn *VAR_3)
{
 s32 VAR_4;

 FUNC_1(VAR_1);

 for(VAR_4=0;VAR_4<VAR_0;VAR_4++) {
  if(!VAR_2[VAR_4].conn) {
   VAR_2[VAR_4].conn = VAR_3;
   VAR_2[VAR_4].lastdata = ((void*)0);
   VAR_2[VAR_4].lastoffset = 0;
   VAR_2[VAR_4].rcvevt = 0;
   VAR_2[VAR_4].sendevt = 1;
   VAR_2[VAR_4].flags = 0;
   VAR_2[VAR_4].err = 0;
   FUNC_0(VAR_1);
   return VAR_4;
  }
 }

 FUNC_0(VAR_1);
 return -1;
}
