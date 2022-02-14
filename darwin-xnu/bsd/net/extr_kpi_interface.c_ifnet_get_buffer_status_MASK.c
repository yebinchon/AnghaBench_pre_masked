
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ifnet_t ;
struct TYPE_8__ {scalar_t__ buf_interface; int buf_sndbuf; } ;
typedef TYPE_2__ ifnet_buffer_status_t ;
typedef int errno_t ;
struct TYPE_7__ {int if_eflags; scalar_t__ if_sndbyte_unsent; int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_2__*,int) ;

errno_t
FUNC_3(const ifnet_t VAR_3, ifnet_buffer_status_t *VAR_4)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_4, sizeof (*VAR_4));

 if (!FUNC_1(VAR_3))
  return (VAR_1);

 if (VAR_3->if_eflags & VAR_2)
  VAR_4->buf_interface = FUNC_0(&VAR_3->if_snd);

 VAR_4->buf_sndbuf = ((VAR_4->buf_interface != 0) ||
     (VAR_3->if_sndbyte_unsent != 0)) ? 1 : 0;

 return (0);
}
