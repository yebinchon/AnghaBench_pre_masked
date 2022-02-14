
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int epsd; int last; int next; int pnum; int maxkills; int maxitems; int maxsecret; int plyr; } ;
typedef TYPE_1__ wbstartstruct_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;

void FUNC_1(wbstartstruct_t* VAR_11)
{

    VAR_10 = VAR_11;
    VAR_1 = 0;
    VAR_3 = VAR_2 = 0;
    VAR_5 = 1;
    VAR_7 = VAR_10->pnum;
    VAR_8 = VAR_10->plyr;

    if (!VAR_10->maxkills)
 VAR_10->maxkills = 1;

    if (!VAR_10->maxitems)
 VAR_10->maxitems = 1;

    if (!VAR_10->maxsecret)
 VAR_10->maxsecret = 1;

    if ( VAR_6 != VAR_9 )
      if (VAR_10->epsd > 2)
 VAR_10->epsd -= 3;
}
