
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fq_mbufq; scalar_t__ fq_ptype; } ;
typedef TYPE_1__ fq_t ;
typedef scalar_t__ classq_pkt_type_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

fq_t *
FUNC_4(classq_pkt_type_t VAR_5)
{
 fq_t *VAR_6 = ((void*)0);
 VAR_6 = FUNC_3(VAR_3, VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_0, "%s: unable to allocate from flowq_cache\n");
  return (((void*)0));
 }

 FUNC_1(VAR_6, VAR_4);
 VAR_6->fq_ptype = VAR_5;
 if (VAR_5 == VAR_2) {
  FUNC_0(&VAR_6->fq_mbufq);
 }
 return (VAR_6);
}
