
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {size_t chan; TYPE_3__* ncci_list; } ;
typedef TYPE_2__ capidrv_plci ;
struct TYPE_11__ {size_t chan; struct TYPE_11__* next; scalar_t__ datahandle; TYPE_2__* plcip; int state; int ncci; } ;
typedef TYPE_3__ capidrv_ncci ;
struct TYPE_12__ {TYPE_1__* bchans; } ;
typedef TYPE_4__ capidrv_contr ;
struct TYPE_9__ {TYPE_3__* nccip; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int,int ) ;

__attribute__((used)) static inline capidrv_ncci *FUNC_1(capidrv_contr * VAR_2,
         capidrv_plci * VAR_3,
         u32 VAR_4)
{
 capidrv_ncci *VAR_5;

 VAR_5 = FUNC_0(sizeof(capidrv_ncci), VAR_0);

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->ncci = VAR_4;
 VAR_5->state = VAR_1;
 VAR_5->plcip = VAR_3;
 VAR_5->chan = VAR_3->chan;
 VAR_5->datahandle = 0;

 VAR_5->next = VAR_3->ncci_list;
 VAR_3->ncci_list = VAR_5;

 VAR_2->bchans[VAR_3->chan].nccip = VAR_5;

 return VAR_5;
}
