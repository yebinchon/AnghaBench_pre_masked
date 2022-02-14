
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_4__ {int if_eflags; int if_snd; scalar_t__ if_sndbyte_unsent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

errno_t
FUNC_2(ifnet_t VAR_3, int64_t *VAR_4)
{
 int64_t VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_5 = *VAR_4 = 0;

 if (!FUNC_1(VAR_3))
  return (VAR_1);

 VAR_5 = VAR_3->if_sndbyte_unsent;

 if (VAR_3->if_eflags & VAR_2)
  VAR_5 += FUNC_0(&VAR_3->if_snd);
 *VAR_4 = VAR_5;

 return (0);
}
