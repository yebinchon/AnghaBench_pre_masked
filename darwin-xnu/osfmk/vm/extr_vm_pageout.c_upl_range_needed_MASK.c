
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* upl_t ;
struct TYPE_5__ {int needed; } ;
typedef TYPE_2__ upl_page_info_t ;
struct upl {int dummy; } ;
struct TYPE_4__ {int flags; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(
 upl_t VAR_3,
 int VAR_4,
 int VAR_5)
{
 upl_page_info_t *VAR_6;
 int VAR_7;

 if ( !(VAR_3->flags & VAR_2) || VAR_5 <= 0)
  return;

 VAR_7 = VAR_3->size / VAR_0;

 VAR_6 = (upl_page_info_t *) (((uintptr_t)VAR_3) + sizeof(struct upl));

 while (VAR_5-- && VAR_4 < VAR_7)
  VAR_6[VAR_4++].needed = VAR_1;
}
