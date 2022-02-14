
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ablkcipher_request {int dummy; } ;
struct TYPE_2__ {int queue_th; int lock; int queue; } ;


 int FUNC_0 (int *,struct ablkcipher_request*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ablkcipher_request *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_3 = FUNC_0(&VAR_0->queue, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_3(VAR_0->queue_th);
 return VAR_3;
}
