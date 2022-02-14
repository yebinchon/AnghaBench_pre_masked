
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fuse_conn {int reqctr; } ;



__attribute__((used)) static u64 FUNC_0(struct fuse_conn *VAR_0)
{
 VAR_0->reqctr++;

 if (VAR_0->reqctr == 0)
  VAR_0->reqctr = 1;

 return VAR_0->reqctr;
}
