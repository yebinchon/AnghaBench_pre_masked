
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fqs_pkt_droplimit; int fqs_ifq; } ;
typedef TYPE_1__ fq_if_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;

inline boolean_t
FUNC_1(fq_if_t *VAR_2)
{
 return (((FUNC_0(VAR_2->fqs_ifq) >= VAR_2->fqs_pkt_droplimit) ?
     VAR_1 : VAR_0));
}
