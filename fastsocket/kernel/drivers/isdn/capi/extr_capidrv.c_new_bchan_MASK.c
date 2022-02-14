
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nbchan; TYPE_1__* bchans; } ;
typedef TYPE_2__ capidrv_contr ;
struct TYPE_4__ {scalar_t__ disconnecting; int * plcip; } ;



__attribute__((used)) static inline int FUNC_0(capidrv_contr * VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nbchan; VAR_1++) {
  if (VAR_0->bchans[VAR_1].plcip == ((void*)0)) {
   VAR_0->bchans[VAR_1].disconnecting = 0;
   return VAR_1;
  }
 }
 return -1;
}
