
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long max_sectors; } ;
struct request_queue {int queue_lock; TYPE_1__ limits; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (unsigned long*,char const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct request_queue *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5,
  VAR_6 = FUNC_0(VAR_2) >> 1,
   VAR_7 = 1 << (VAR_1 - 10);
 ssize_t VAR_8 = FUNC_1(&VAR_5, VAR_3, VAR_4);

 if (VAR_5 > VAR_6 || VAR_5 < VAR_7)
  return -VAR_0;

 FUNC_2(VAR_2->queue_lock);
 VAR_2->limits.max_sectors = VAR_5 << 1;
 FUNC_3(VAR_2->queue_lock);

 return VAR_8;
}
