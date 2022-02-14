
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dentry {scalar_t__ d_fsdata; scalar_t__ d_time; } ;



__attribute__((used)) static u64 FUNC_0(struct dentry *VAR_0)
{
 return (u64) VAR_0->d_time +
  ((u64) (unsigned long) VAR_0->d_fsdata << 32);
}
