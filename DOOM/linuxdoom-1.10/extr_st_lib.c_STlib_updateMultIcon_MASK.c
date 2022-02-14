
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oldinum; int* inum; int x; int y; TYPE_2__** p; scalar_t__* on; } ;
typedef TYPE_1__ st_multicon_t ;
typedef scalar_t__ boolean ;
struct TYPE_5__ {int height; int width; int topoffset; int leftoffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int,int,int ,int,int,int,int,int ) ;
 int FUNC_3 (int,int,int ,TYPE_2__*) ;

void
FUNC_4
( st_multicon_t* VAR_3,
  boolean VAR_4 )
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;

    if (*VAR_3->on
 && (VAR_3->oldinum != *VAR_3->inum || VAR_4)
 && (*VAR_3->inum!=-1))
    {
 if (VAR_3->oldinum != -1)
 {
     VAR_7 = VAR_3->x - FUNC_1(VAR_3->p[VAR_3->oldinum]->leftoffset);
     VAR_8 = VAR_3->y - FUNC_1(VAR_3->p[VAR_3->oldinum]->topoffset);
     VAR_5 = FUNC_1(VAR_3->p[VAR_3->oldinum]->width);
     VAR_6 = FUNC_1(VAR_3->p[VAR_3->oldinum]->height);

     if (VAR_8 - VAR_2 < 0)
  FUNC_0("updateMultIcon: y - ST_Y < 0");

     FUNC_2(VAR_7, VAR_8-VAR_2, VAR_0, VAR_5, VAR_6, VAR_7, VAR_8, VAR_1);
 }
 FUNC_3(VAR_3->x, VAR_3->y, VAR_1, VAR_3->p[*VAR_3->inum]);
 VAR_3->oldinum = *VAR_3->inum;
    }
}
