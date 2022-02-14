
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i810fb_par {TYPE_1__* chan; } ;
struct TYPE_2__ {int * par; int adapter; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct i810fb_par *VAR_0)
{
        if (VAR_0->chan[0].par)
  FUNC_0(&VAR_0->chan[0].adapter);
        VAR_0->chan[0].par = ((void*)0);

 if (VAR_0->chan[1].par)
  FUNC_0(&VAR_0->chan[1].adapter);
 VAR_0->chan[1].par = ((void*)0);

 if (VAR_0->chan[2].par)
  FUNC_0(&VAR_0->chan[2].adapter);
 VAR_0->chan[2].par = ((void*)0);
}
