
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfs_attr {int f_supported; } ;
struct getvolattrlist_attrtab {scalar_t__ attr; int bits; } ;
struct TYPE_3__ {int commonattr; int volattr; } ;
typedef TYPE_1__ attribute_set_t ;


 struct getvolattrlist_attrtab* VAR_0 ;
 struct getvolattrlist_attrtab* VAR_1 ;

__attribute__((used)) static void
FUNC_0(attribute_set_t *VAR_2, struct vfs_attr *VAR_3)
{
 struct getvolattrlist_attrtab *VAR_4;

 if (VAR_2->commonattr) {
  VAR_4 = VAR_0;
  do {
   if ((VAR_4->attr & VAR_2->commonattr) &&
       (VAR_4->bits != 0) &&
       ((VAR_4->bits & VAR_3->f_supported) == 0)) {
    VAR_2->commonattr &= ~VAR_4->attr;
   }
  } while ((++VAR_4)->attr != 0);
 }
 if (VAR_2->volattr) {
  VAR_4 = VAR_1;
  do {
   if ((VAR_4->attr & VAR_2->volattr) &&
       (VAR_4->bits != 0) &&
       ((VAR_4->bits & VAR_3->f_supported) == 0)) {
    VAR_2->volattr &= ~VAR_4->attr;
   }
  } while ((++VAR_4)->attr != 0);
 }
}
