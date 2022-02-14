
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_attr {int f_active; } ;
struct user64_timespec {int dummy; } ;
struct user32_timespec {int dummy; } ;
struct getvolattrlist_attrtab {scalar_t__ attr; scalar_t__ size; int bits; } ;
typedef int ssize_t ;
typedef int attrgroup_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct getvolattrlist_attrtab *VAR_2, attrgroup_t VAR_3, struct vfs_attr *VAR_4,
  ssize_t *VAR_5, int VAR_6, unsigned int VAR_7)
{
 attrgroup_t VAR_8;

 VAR_8 = 0;
 do {

  if (VAR_2->attr & VAR_3) {
   VAR_8 |= VAR_2->attr;
   VAR_4->f_active |= VAR_2->bits;
   if (VAR_2->size == VAR_0) {
    if (VAR_6) {
     *VAR_5 += sizeof(struct user64_timespec);
    } else {
     *VAR_5 += sizeof(struct user32_timespec);
    }
   } else {
    *VAR_5 += VAR_2->size;
   }
  }
 } while (((++VAR_2)->attr != 0) && (--VAR_7 > 0));


 if (VAR_3 & ~VAR_8)
  return(VAR_1);
 return(0);
}
