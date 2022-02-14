
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long last_jiffies; scalar_t__ io_count; } ;
struct raid_set {TYPE_1__ recover; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 unsigned long VAR_3 ;

__attribute__((used)) static int FUNC_1(struct raid_set *VAR_4)
{
 unsigned long VAR_5 = VAR_3;


 if (VAR_5 > VAR_4->recover.last_jiffies + VAR_0 ||
     VAR_5 < VAR_4->recover.last_jiffies) {
  FUNC_0(VAR_4->recover.io_count + VAR_2, 0);
  FUNC_0(VAR_4->recover.io_count + VAR_1, 0);
  VAR_4->recover.last_jiffies = VAR_5;
  return 1;
 }

 return 0;
}
