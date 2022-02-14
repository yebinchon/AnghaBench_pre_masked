
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
struct workqueue {scalar_t__ wq_thidlecount; } ;
struct TYPE_2__ {scalar_t__ abstime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline uint64_t
FUNC_0(struct workqueue *VAR_3)
{
 uint64_t VAR_4 = VAR_2.abstime;
 uint16_t VAR_5 = VAR_3->wq_thidlecount;







 if (VAR_5 <= VAR_0) {
  return VAR_4;
 }

 if (VAR_1 > VAR_5 - VAR_0) {
  VAR_4 *= (VAR_1 - (VAR_5 - VAR_0));
 }
 return VAR_4 / VAR_1;
}
