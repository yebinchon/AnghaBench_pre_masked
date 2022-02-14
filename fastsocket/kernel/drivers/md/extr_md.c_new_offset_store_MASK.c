
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {unsigned long long dev_sectors; int reshape_backwards; size_t major_version; scalar_t__ persistent; scalar_t__ pers; scalar_t__ sync_thread; } ;
struct md_rdev {unsigned long long data_offset; unsigned long long sectors; unsigned long long new_data_offset; struct mddev* mddev; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* allow_new_offset ) (struct md_rdev*,unsigned long long) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;
 int FUNC_1 (struct md_rdev*,unsigned long long) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static ssize_t FUNC_2(struct md_rdev *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 unsigned long long VAR_7;
 struct mddev *VAR_8 = VAR_4->mddev;

 if (FUNC_0(VAR_5, 10, &VAR_7) < 0)
  return -VAR_2;

 if (VAR_8->sync_thread)
  return -VAR_1;
 if (VAR_7 == VAR_4->data_offset)

  ;
 else if (VAR_7 > VAR_4->data_offset) {

  if (VAR_7 - VAR_4->data_offset
      + VAR_8->dev_sectors > VAR_4->sectors)
    return -VAR_0;
 }





 if (VAR_7 < VAR_4->data_offset &&
     VAR_8->reshape_backwards)
  return -VAR_2;




 if (VAR_7 > VAR_4->data_offset &&
     !VAR_8->reshape_backwards)
  return -VAR_2;

 if (VAR_8->pers && VAR_8->persistent &&
     !VAR_3[VAR_8->major_version]
     .allow_new_offset(VAR_4, VAR_7))
  return -VAR_0;
 VAR_4->new_data_offset = VAR_7;
 if (VAR_7 > VAR_4->data_offset)
  VAR_8->reshape_backwards = 1;
 else if (VAR_7 < VAR_4->data_offset)
  VAR_8->reshape_backwards = 0;

 return VAR_6;
}
