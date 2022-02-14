
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_map {int dummy; } ;
struct TYPE_3__ {unsigned long data; scalar_t__ expires; int function; } ;
struct rate_estimator {int maxcps; int cps; int avcps; int interval; int ewma_log; TYPE_1__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 struct rate_estimator* FUNC_2 (int,int ) ;

__attribute__((used)) static struct rate_estimator *
FUNC_3(struct vc_map *VAR_4, int VAR_5)
{
 struct rate_estimator *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct rate_estimator), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->maxcps = VAR_5 < 0 ? -VAR_5 : VAR_5;
 VAR_6->cps = VAR_6->maxcps;
 VAR_6->avcps = VAR_6->cps << 5;

 VAR_6->interval = 2;
 VAR_6->ewma_log = 2;
 FUNC_1(&VAR_6->timer);
 VAR_6->timer.data = (unsigned long)VAR_4;
 VAR_6->timer.function = VAR_2;

 VAR_6->timer.expires = VAR_3 + ((VAR_1 / 4) << VAR_6->interval);
 FUNC_0(&VAR_6->timer);

 return VAR_6;
}
