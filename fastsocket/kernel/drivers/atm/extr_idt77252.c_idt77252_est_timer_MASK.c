
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct vc_map {scalar_t__ max_er; scalar_t__ lacr; int index; int lock; struct rate_estimator* estimator; struct idt77252_dev* card; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct rate_estimator {int interval; long avcps; long ewma_log; int cps; int maxcps; TYPE_1__ timer; scalar_t__ last_cells; scalar_t__ cells; } ;
struct idt77252_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct idt77252_dev*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_4)
{
 struct vc_map *VAR_5 = (struct vc_map *)VAR_4;
 struct idt77252_dev *VAR_6 = VAR_5->card;
 struct rate_estimator *VAR_7;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;
 u64 VAR_11;
 u8 VAR_12;

 FUNC_2(&VAR_5->lock, VAR_8);
 VAR_7 = VAR_5->estimator;
 if (!VAR_7)
  goto out;

 VAR_11 = VAR_7->cells;

 VAR_9 = ((u32)(VAR_11 - VAR_7->last_cells)) << (7 - VAR_7->interval);
 VAR_7->last_cells = VAR_11;
 VAR_7->avcps += ((long)VAR_9 - (long)VAR_7->avcps) >> VAR_7->ewma_log;
 VAR_7->cps = (VAR_7->avcps + 0x1f) >> 5;

 VAR_10 = VAR_7->cps;
 if (VAR_10 < (VAR_7->maxcps >> 4))
  VAR_10 = VAR_7->maxcps >> 4;

 VAR_12 = FUNC_1(VAR_6, VAR_10);
 if (VAR_12 > VAR_5->max_er)
  VAR_12 = VAR_5->max_er;

 if (VAR_12 != VAR_5->lacr) {
  VAR_5->lacr = VAR_12;
  FUNC_4(VAR_2|(VAR_5->lacr << 16)|VAR_5->index, VAR_1);
 }

 VAR_7->timer.expires = VAR_3 + ((VAR_0 / 4) << VAR_7->interval);
 FUNC_0(&VAR_7->timer);

out:
 FUNC_3(&VAR_5->lock, VAR_8);
}
