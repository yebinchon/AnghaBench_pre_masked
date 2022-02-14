
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ http_major; scalar_t__ http_minor; int flags; } ;
typedef TYPE_1__ http_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;

int
FUNC_1 (const http_parser *VAR_2)
{
  if (VAR_2->http_major > 0 && VAR_2->http_minor > 0) {

    if (VAR_2->flags & VAR_0) {
      return 0;
    }
  } else {

    if (!(VAR_2->flags & VAR_1)) {
      return 0;
    }
  }

  return !FUNC_0(VAR_2);
}
