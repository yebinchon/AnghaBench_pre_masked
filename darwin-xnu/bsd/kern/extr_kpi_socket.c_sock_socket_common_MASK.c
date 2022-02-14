
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* socket_t ;
typedef int * sock_upcall ;
typedef int errno_t ;
struct TYPE_7__ {int nas_socket_in_kernel_os_total; int nas_socket_in_kernel_total; } ;
struct TYPE_6__ {scalar_t__ last_upid; scalar_t__ last_pid; int so_flags1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,void*) ;
 int FUNC_2 (int,TYPE_1__**,int,int) ;

errno_t
FUNC_3(int VAR_3, int VAR_4, int VAR_5, sock_upcall VAR_6,
    void *VAR_7, socket_t *VAR_8, bool VAR_9)
{
 int VAR_10 = 0;

 if (VAR_8 == ((void*)0))
  return (VAR_0);


 VAR_10 = FUNC_2(VAR_3, VAR_8, VAR_4, VAR_5);
 if (VAR_10 == 0) {



  (*VAR_8)->so_flags1 |= VAR_1;
  FUNC_0(VAR_2.nas_socket_in_kernel_total);
  if (VAR_9) {
   FUNC_0(VAR_2.nas_socket_in_kernel_os_total);
  }


  if (VAR_6 != ((void*)0)) {
   FUNC_1(*VAR_8, VAR_6, VAR_7);
  }




  (*VAR_8)->last_pid = 0;
  (*VAR_8)->last_upid = 0;
 }
 return (VAR_10);
}
