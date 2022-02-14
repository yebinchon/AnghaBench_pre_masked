
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ oldval; scalar_t__* val; int x; int y; TYPE_2__* p; scalar_t__* on; } ;
typedef TYPE_1__ st_binicon_t ;
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
( st_binicon_t* VAR_3,
  boolean VAR_4 )
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;

    if (*VAR_3->on
 && (VAR_3->oldval != *VAR_3->val || VAR_4))
    {
 VAR_5 = VAR_3->x - FUNC_1(VAR_3->p->leftoffset);
 VAR_6 = VAR_3->y - FUNC_1(VAR_3->p->topoffset);
 VAR_7 = FUNC_1(VAR_3->p->width);
 VAR_8 = FUNC_1(VAR_3->p->height);

 if (VAR_6 - VAR_2 < 0)
     FUNC_0("updateBinIcon: y - ST_Y < 0");

 if (*VAR_3->val)
     FUNC_3(VAR_3->x, VAR_3->y, VAR_1, VAR_3->p);
 else
     FUNC_2(VAR_5, VAR_6-VAR_2, VAR_0, VAR_7, VAR_8, VAR_5, VAR_6, VAR_1);

 VAR_3->oldval = *VAR_3->val;
    }

}
