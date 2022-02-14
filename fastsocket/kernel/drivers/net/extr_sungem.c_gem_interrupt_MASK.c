
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct gem {int lock; int napi; scalar_t__ status; scalar_t__ regs; int running; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct gem* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct gem *VAR_6 = FUNC_4(VAR_5);
 unsigned long VAR_7;





 if (!VAR_6->running)
  return VAR_1;

 FUNC_6(&VAR_6->lock, VAR_7);

 if (FUNC_3(&VAR_6->napi)) {
  u32 VAR_8 = FUNC_5(VAR_6->regs + VAR_0);

  if (VAR_8 == 0) {
   FUNC_2(&VAR_6->napi);
   FUNC_7(&VAR_6->lock, VAR_7);
   return VAR_2;
  }
  VAR_6->status = VAR_8;
  FUNC_1(VAR_6);
  FUNC_0(&VAR_6->napi);
 }

 FUNC_7(&VAR_6->lock, VAR_7);





 return VAR_1;
}
