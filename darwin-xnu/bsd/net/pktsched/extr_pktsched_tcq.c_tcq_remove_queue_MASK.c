
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tcq_if {int tif_ifq; } ;
struct tcq_class {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcq_if*,struct tcq_class*) ;
 struct tcq_class* FUNC_2 (struct tcq_if*,int ) ;

int
FUNC_3(struct tcq_if *VAR_1, u_int32_t VAR_2)
{
 struct tcq_class *VAR_3;

 FUNC_0(VAR_1->tif_ifq);

 if ((VAR_3 = FUNC_2(VAR_1, VAR_2)) == ((void*)0))
  return (VAR_0);

 return (FUNC_1(VAR_1, VAR_3));
}
