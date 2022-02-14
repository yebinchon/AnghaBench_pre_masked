
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int x1; int x2; scalar_t__ scale; scalar_t__ gz; scalar_t__ gzt; int gy; int gx; } ;
typedef TYPE_1__ vissprite_t ;
typedef scalar_t__ fixed_t ;
struct TYPE_9__ {int x1; int x2; int silhouette; scalar_t__ scale1; scalar_t__ scale2; scalar_t__ bsilheight; scalar_t__ tsilheight; short* sprbottomclip; short* sprtopclip; scalar_t__ maskedtexturecol; int curline; } ;
typedef TYPE_2__ drawseg_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 short* VAR_5 ;
 short* VAR_6 ;
 short VAR_7 ;

void FUNC_3 (vissprite_t* VAR_8)
{
    drawseg_t* VAR_9;
    short VAR_10[VAR_0];
    short VAR_11[VAR_0];
    int VAR_12;
    int VAR_13;
    int VAR_14;
    fixed_t VAR_15;
    fixed_t VAR_16;
    int VAR_17;

    for (VAR_12 = VAR_8->x1 ; VAR_12<=VAR_8->x2 ; VAR_12++)
 VAR_10[VAR_12] = VAR_11[VAR_12] = -2;




    for (VAR_9=VAR_4-1 ; VAR_9 >= VAR_3 ; VAR_9--)
    {

 if (VAR_9->x1 > VAR_8->x2
     || VAR_9->x2 < VAR_8->x1
     || (!VAR_9->silhouette
  && !VAR_9->maskedtexturecol) )
 {

     continue;
 }

 VAR_13 = VAR_9->x1 < VAR_8->x1 ? VAR_8->x1 : VAR_9->x1;
 VAR_14 = VAR_9->x2 > VAR_8->x2 ? VAR_8->x2 : VAR_9->x2;

 if (VAR_9->scale1 > VAR_9->scale2)
 {
     VAR_16 = VAR_9->scale2;
     VAR_15 = VAR_9->scale1;
 }
 else
 {
     VAR_16 = VAR_9->scale1;
     VAR_15 = VAR_9->scale2;
 }

 if (VAR_15 < VAR_8->scale
     || ( VAR_16 < VAR_8->scale
   && !FUNC_1 (VAR_8->gx, VAR_8->gy, VAR_9->curline) ) )
 {

     if (VAR_9->maskedtexturecol)
  FUNC_2 (VAR_9, VAR_13, VAR_14);

     continue;
 }



 VAR_17 = VAR_9->silhouette;

 if (VAR_8->gz >= VAR_9->bsilheight)
     VAR_17 &= ~VAR_1;

 if (VAR_8->gzt <= VAR_9->tsilheight)
     VAR_17 &= ~VAR_2;

 if (VAR_17 == 1)
 {

     for (VAR_12=VAR_13 ; VAR_12<=VAR_14 ; VAR_12++)
  if (VAR_10[VAR_12] == -2)
      VAR_10[VAR_12] = VAR_9->sprbottomclip[VAR_12];
 }
 else if (VAR_17 == 2)
 {

     for (VAR_12=VAR_13 ; VAR_12<=VAR_14 ; VAR_12++)
  if (VAR_11[VAR_12] == -2)
      VAR_11[VAR_12] = VAR_9->sprtopclip[VAR_12];
 }
 else if (VAR_17 == 3)
 {

     for (VAR_12=VAR_13 ; VAR_12<=VAR_14 ; VAR_12++)
     {
  if (VAR_10[VAR_12] == -2)
      VAR_10[VAR_12] = VAR_9->sprbottomclip[VAR_12];
  if (VAR_11[VAR_12] == -2)
      VAR_11[VAR_12] = VAR_9->sprtopclip[VAR_12];
     }
 }

    }




    for (VAR_12 = VAR_8->x1 ; VAR_12<=VAR_8->x2 ; VAR_12++)
    {
 if (VAR_10[VAR_12] == -2)
     VAR_10[VAR_12] = VAR_7;

 if (VAR_11[VAR_12] == -2)
     VAR_11[VAR_12] = -1;
    }

    VAR_6 = VAR_10;
    VAR_5 = VAR_11;
    FUNC_0 (VAR_8, VAR_8->x1, VAR_8->x2);
}
