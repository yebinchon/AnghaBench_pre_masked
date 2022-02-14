
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vinfo_stat {scalar_t__ vst_dev; scalar_t__ vst_ino; } ;
typedef TYPE_2__* fdOpenInfoRef ;
struct TYPE_4__ {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_5__ {int flags; TYPE_1__ match_stat; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(fdOpenInfoRef VAR_1, struct vinfo_stat *VAR_2)
{
 if (VAR_2->vst_dev == 0) {

  return 0;
 }

 if (VAR_2->vst_dev != VAR_1->match_stat.st_dev) {

  return 0;
 }

 if (!(VAR_1->flags & VAR_0) &&
     (VAR_2->vst_ino != VAR_1->match_stat.st_ino)) {

  return 0;
 }

 return 1;
}
