
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode_attr {int va_fsid; int va_fsid64; } ;


 scalar_t__ FUNC_0 (struct vnode_attr*,int ) ;
 int VAR_0 ;

__attribute__((used)) static uint64_t FUNC_1(struct vnode_attr *VAR_1)
{
 if (FUNC_0(VAR_1, VAR_0)) {
  return *(uint64_t *)&VAR_1->va_fsid64;
 } else {
  return VAR_1->va_fsid;
 }
}
