
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; char* l; int needsupdate; } ;
typedef TYPE_1__ hu_textline_t ;
typedef int boolean ;


 size_t VAR_0 ;

boolean
FUNC_0
( hu_textline_t* VAR_1,
  char VAR_2 )
{

    if (VAR_1->len == VAR_0)
 return 0;
    else
    {
 VAR_1->l[VAR_1->len++] = VAR_2;
 VAR_1->l[VAR_1->len] = 0;
 VAR_1->needsupdate = 4;
 return 1;
    }

}
