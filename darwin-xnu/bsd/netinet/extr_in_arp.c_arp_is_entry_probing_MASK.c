
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct llinfo_arp {TYPE_1__* la_llreach; } ;
typedef TYPE_2__* route_t ;
typedef int boolean_t ;
struct TYPE_5__ {struct llinfo_arp* rt_llinfo; } ;
struct TYPE_4__ {scalar_t__ lr_probes; } ;


 int VAR_0 ;
 int VAR_1 ;

boolean_t
FUNC_0 (route_t VAR_2)
{
 struct llinfo_arp *VAR_3 = VAR_2->rt_llinfo;

 if (VAR_3 != ((void*)0) &&
     VAR_3->la_llreach != ((void*)0) &&
     VAR_3->la_llreach->lr_probes != 0)
  return (VAR_1);

 return (VAR_0);
}
