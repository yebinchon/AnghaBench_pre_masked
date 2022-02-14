
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int vm_flags; int nss_name; } ;
struct TYPE_5__ {TYPE_1__ ccw; } ;
struct TYPE_6__ {TYPE_2__ ipl_info; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int,int) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_4,
        struct kobj_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 int VAR_8;


 VAR_8 = VAR_7;
 if ((VAR_7 > 0) && (VAR_6[VAR_7 - 1] == '\n'))
  VAR_8--;

 if (VAR_8 > VAR_2)
  return -VAR_1;

 FUNC_3(VAR_3->ipl_info.ccw.nss_name, 0x40, VAR_2);
 if (VAR_8 > 0) {
  VAR_3->ipl_info.ccw.vm_flags |=
   VAR_0;
  FUNC_2(VAR_3->ipl_info.ccw.nss_name, VAR_6, VAR_8);
  FUNC_0(VAR_3->ipl_info.ccw.nss_name, VAR_8);
  FUNC_1(VAR_3->ipl_info.ccw.nss_name, VAR_8);
 } else {
  VAR_3->ipl_info.ccw.vm_flags &=
   ~VAR_0;
 }

 return VAR_7;
}
