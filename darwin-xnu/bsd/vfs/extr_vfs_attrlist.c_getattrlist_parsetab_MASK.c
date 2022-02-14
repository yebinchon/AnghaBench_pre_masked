
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_attr {int va_active; } ;
struct user64_timespec {int dummy; } ;
struct user32_timespec {int dummy; } ;
struct getattrlist_attrtab {scalar_t__ attr; scalar_t__ size; int action; int bits; } ;
typedef int ssize_t ;
typedef int kauth_action_t ;
typedef int attrgroup_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct getattrlist_attrtab *VAR_2, attrgroup_t VAR_3,
    struct vnode_attr *VAR_4, ssize_t *VAR_5, kauth_action_t *VAR_6,
    int VAR_7, unsigned int VAR_8)
{
 attrgroup_t VAR_9;
 VAR_9 = 0;
 if (!VAR_2)
  return VAR_1;

 do {

  if (VAR_2->attr & VAR_3) {
   VAR_9 |= VAR_2->attr;
   if (VAR_4)
    VAR_4->va_active |= VAR_2->bits;
   if (VAR_5) {
    if (VAR_2->size == VAR_0) {
     if (VAR_7) {
      *VAR_5 += sizeof(
          struct user64_timespec);
     } else {
      *VAR_5 += sizeof(
          struct user32_timespec);
     }
    } else {
     *VAR_5 += VAR_2->size;
    }
   }
   if (VAR_6)
    *VAR_6 |= VAR_2->action;
   if (VAR_3 == VAR_9)
    break;
  }
 } while (((++VAR_2)->attr != 0) && (--VAR_8 > 0));


 if (VAR_3 & ~VAR_9)
  return(VAR_1);
 return(0);
}
