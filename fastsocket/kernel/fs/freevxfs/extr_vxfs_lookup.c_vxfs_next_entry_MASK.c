
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxfs_direct {int d_reclen; } ;



__attribute__((used)) static inline struct vxfs_direct *
FUNC_0(struct vxfs_direct *VAR_0)
{
 return ((struct vxfs_direct *)((char*)VAR_0 + VAR_0->d_reclen));
}
