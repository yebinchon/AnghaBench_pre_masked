
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode_attr {int va_active; int va_supported; } ;
struct getattrlist_attrtab {scalar_t__ attr; int bits; } ;
struct TYPE_3__ {int commonattr; int dirattr; int fileattr; int forkattr; } ;
typedef TYPE_1__ attribute_set_t ;


 struct getattrlist_attrtab* VAR_0 ;
 struct getattrlist_attrtab* VAR_1 ;
 struct getattrlist_attrtab* VAR_2 ;
 struct getattrlist_attrtab* VAR_3 ;

__attribute__((used)) static void
FUNC_0(attribute_set_t *VAR_4, struct vnode_attr *VAR_5, int VAR_6)
{
 struct getattrlist_attrtab *VAR_7;

 if (VAR_4->commonattr) {
  VAR_7 = VAR_1;
  do {
   if ((VAR_7->attr & VAR_4->commonattr) &&
       (VAR_7->bits & VAR_5->va_active) &&
       (VAR_7->bits & VAR_5->va_supported) == 0) {
    VAR_4->commonattr &= ~VAR_7->attr;
   }
  } while ((++VAR_7)->attr != 0);
 }
 if (VAR_4->dirattr) {
  VAR_7 = VAR_2;
  do {
   if ((VAR_7->attr & VAR_4->dirattr) &&
       (VAR_7->bits & VAR_5->va_active) &&
       (VAR_5->va_supported & VAR_7->bits) == 0) {
    VAR_4->dirattr &= ~VAR_7->attr;
   }
  } while ((++VAR_7)->attr != 0);
 }
 if (VAR_4->fileattr) {
  VAR_7 = VAR_3;
  do {
   if ((VAR_7->attr & VAR_4->fileattr) &&
       (VAR_7->bits & VAR_5->va_active) &&
       (VAR_5->va_supported & VAR_7->bits) == 0) {
    VAR_4->fileattr &= ~VAR_7->attr;
   }
  } while ((++VAR_7)->attr != 0);
 }
 if (VAR_6 && VAR_4->forkattr) {
  VAR_7 = VAR_0;
  do {
   if ((VAR_7->attr & VAR_4->forkattr) &&
       (VAR_7->bits & VAR_5->va_active) &&
       (VAR_5->va_supported & VAR_7->bits) == 0) {
    VAR_4->forkattr &= ~VAR_7->attr;
   }
  } while ((++VAR_7)->attr != 0);
 }
}
