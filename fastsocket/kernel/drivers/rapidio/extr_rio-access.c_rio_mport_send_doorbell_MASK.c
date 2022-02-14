
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rio_mport {int id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dsend ) (struct rio_mport*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct rio_mport*,int ,int ,int ) ;

int FUNC_3(struct rio_mport *VAR_1, u16 VAR_2, u16 VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_0, VAR_5);
 VAR_4 = VAR_1->ops->dsend(VAR_1, VAR_1->id, VAR_2, VAR_3);
 FUNC_1(&VAR_0, VAR_5);

 return VAR_4;
}
