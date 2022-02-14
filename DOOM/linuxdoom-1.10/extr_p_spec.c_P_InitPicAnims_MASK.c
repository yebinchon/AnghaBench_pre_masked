
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int istexture; int speed; int endname; int startname; } ;
struct TYPE_4__ {int picnum; int basepic; int istexture; int numpics; int speed; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_5 (void)
{
    int VAR_3;



    VAR_2 = VAR_1;
    for (VAR_3=0 ; VAR_0[VAR_3].istexture != -1 ; VAR_3++)
    {
 if (VAR_0[VAR_3].istexture)
 {

     if (FUNC_1(VAR_0[VAR_3].startname) == -1)
  continue;

     VAR_2->picnum = FUNC_3 (VAR_0[VAR_3].endname);
     VAR_2->basepic = FUNC_3 (VAR_0[VAR_3].startname);
 }
 else
 {
     if (FUNC_4(VAR_0[VAR_3].startname) == -1)
  continue;

     VAR_2->picnum = FUNC_2 (VAR_0[VAR_3].endname);
     VAR_2->basepic = FUNC_2 (VAR_0[VAR_3].startname);
 }

 VAR_2->istexture = VAR_0[VAR_3].istexture;
 VAR_2->numpics = VAR_2->picnum - VAR_2->basepic + 1;

 if (VAR_2->numpics < 2)
     FUNC_0 ("P_InitPicAnims: bad cycle from %s to %s",
       VAR_0[VAR_3].startname,
       VAR_0[VAR_3].endname);

 VAR_2->speed = VAR_0[VAR_3].speed;
 VAR_2++;
    }

}
