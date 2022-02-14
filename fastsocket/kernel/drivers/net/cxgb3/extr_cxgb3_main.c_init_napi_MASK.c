
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int poll; } ;
struct sge_qset {TYPE_2__ napi; int netdev; scalar_t__ adap; } ;
struct TYPE_3__ {struct sge_qset* qs; } ;
struct adapter {int flags; TYPE_1__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct sge_qset *VAR_4 = &VAR_2->sge.qs[VAR_3];

  if (VAR_4->adap)
   FUNC_0(VAR_4->netdev, &VAR_4->napi, VAR_4->napi.poll,
           64);
 }






 VAR_2->flags |= VAR_0;
}
