
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket_filter_entry {int sfe_flags; TYPE_2__* sfe_filter; struct socket_filter_entry* sfe_next_onsocket; } ;
typedef TYPE_3__* socket_t ;
typedef scalar_t__ sflt_handle ;
typedef int errno_t ;
struct TYPE_7__ {struct socket_filter_entry* so_filt; } ;
struct TYPE_5__ {scalar_t__ sf_handle; } ;
struct TYPE_6__ {TYPE_1__ sf_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct socket_filter_entry*) ;
 int VAR_2 ;

errno_t
FUNC_3(socket_t VAR_3, sflt_handle VAR_4)
{
 struct socket_filter_entry *VAR_5;
 errno_t VAR_6 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == 0)
  return (VAR_0);

 FUNC_0(VAR_2);
 for (VAR_5 = VAR_3->so_filt; VAR_5; VAR_5 = VAR_5->sfe_next_onsocket) {
  if (VAR_5->sfe_filter->sf_filter.sf_handle == VAR_4 &&
      (VAR_5->sfe_flags & VAR_1) != 0) {
   break;
  }
 }

 if (VAR_5 != ((void*)0)) {
  FUNC_2(VAR_5);
 }
 FUNC_1(VAR_2);

 return (VAR_6);
}
