
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fuse_conn {int lock; int attr_version; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u64 FUNC_2(struct fuse_conn *VAR_0)
{
 u64 VAR_1;





 FUNC_0(&VAR_0->lock);
 VAR_1 = VAR_0->attr_version;
 FUNC_1(&VAR_0->lock);

 return VAR_1;
}
