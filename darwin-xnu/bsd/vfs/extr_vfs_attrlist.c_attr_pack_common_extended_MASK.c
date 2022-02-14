
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vnode_attr {int va_fileid; int va_linkid; int va_private_size; } ;
struct vnode {int dummy; } ;
struct attrlist {int forkattr; } ;
struct TYPE_2__ {int forkattr; } ;
struct _attrlist_buf {TYPE_1__ actual; } ;
typedef int ssize_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _attrlist_buf,int ) ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ) ;
 int FUNC_2 (struct _attrlist_buf*,char const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static errno_t
FUNC_3(struct vnode *VAR_5, struct attrlist *VAR_6,
  struct _attrlist_buf *VAR_7, const char *VAR_8, ssize_t VAR_9,
  struct vnode_attr *VAR_10, int VAR_11, int VAR_12)
{
 if (VAR_5 && (VAR_6->forkattr & VAR_2)) {
  FUNC_2(VAR_7, VAR_8, VAR_9);
  VAR_7->actual.forkattr |= VAR_2;
 }

 if (VAR_6->forkattr & VAR_1) {
  if (FUNC_1(VAR_10, VAR_4)) {
   FUNC_0((*VAR_7), VAR_10->va_private_size);
   VAR_7->actual.forkattr |= VAR_1;
  } else if (!VAR_11 || VAR_12) {
   uint64_t VAR_13 = 0;
   FUNC_0((*VAR_7), VAR_13);
  }
 }

 if (VAR_6->forkattr & VAR_0) {
  uint64_t VAR_14;

  if (FUNC_1(VAR_10, VAR_3))
   VAR_14 = VAR_10->va_linkid;
  else
   VAR_14 = VAR_10->va_fileid;

  FUNC_0((*VAR_7), VAR_14);
  VAR_7->actual.forkattr |= VAR_0;
 }

 return 0;
}
