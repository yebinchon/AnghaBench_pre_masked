
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VH_OPTION ;
typedef int UINT ;
struct TYPE_4__ {int Virtual; int lock; int Option; } ;
typedef TYPE_1__ NAT ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

UINT FUNC_5(NAT *VAR_1, VH_OPTION *VAR_2)
{
 UINT VAR_3 = VAR_0;

 FUNC_1(VAR_1->lock);
 {
  FUNC_0(&VAR_1->Option, VAR_2, sizeof(VH_OPTION));
 }
 FUNC_4(VAR_1->lock);

 FUNC_3(VAR_1->Virtual, VAR_2);

 FUNC_2(VAR_1);

 return VAR_3;
}
