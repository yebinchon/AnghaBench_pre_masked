
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifclassq {int dummy; } ;
typedef int errno_t ;
typedef int classq_pkt_type_t ;
typedef int boolean_t ;


 int FUNC_0 (struct ifclassq*,void*,int ,int ,int *) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;


errno_t
FUNC_4(struct ifclassq *VAR_0, void *VAR_1, classq_pkt_type_t VAR_2,
    boolean_t *VAR_3)
{
 errno_t VAR_4;

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_0);
  break;

 default:
  FUNC_1(VAR_0);
  break;
 }

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
 FUNC_3(VAR_0);
 return (VAR_4);
}
