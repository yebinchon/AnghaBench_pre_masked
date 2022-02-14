
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dentry {int d_time; void* d_fsdata; } ;



__attribute__((used)) static void FUNC_0(struct dentry *VAR_0, u64 VAR_1)
{
 VAR_0->d_time = VAR_1;
 VAR_0->d_fsdata = (void *) (unsigned long) (VAR_1 >> 32);
}
