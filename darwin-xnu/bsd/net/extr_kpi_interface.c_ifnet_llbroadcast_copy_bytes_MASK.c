
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* ifnet_t ;
typedef int errno_t ;
struct TYPE_5__ {int ptr; int buffer; } ;
struct TYPE_6__ {size_t length; TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ if_broadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int) ;

errno_t
FUNC_1(ifnet_t VAR_3, void *VAR_4, size_t VAR_5,
    size_t *VAR_6)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_0);

 *VAR_6 = VAR_3->if_broadcast.length;

 if (VAR_5 < VAR_3->if_broadcast.length)
  return (VAR_1);

 if (VAR_3->if_broadcast.length == 0)
  return (VAR_2);

 if (VAR_3->if_broadcast.length <=
     sizeof (VAR_3->if_broadcast.u.buffer)) {
  FUNC_0(VAR_3->if_broadcast.u.buffer, VAR_4,
      VAR_3->if_broadcast.length);
 } else {
  FUNC_0(VAR_3->if_broadcast.u.ptr, VAR_4,
      VAR_3->if_broadcast.length);
 }

 return (0);
}
