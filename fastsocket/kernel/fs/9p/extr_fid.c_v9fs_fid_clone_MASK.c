
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 struct p9_fid* FUNC_1 (struct p9_fid*,int ,int *,int) ;
 struct p9_fid* FUNC_2 (struct dentry*) ;

struct p9_fid *FUNC_3(struct dentry *VAR_0)
{
 struct p9_fid *VAR_1, *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1))
  return VAR_1;

 VAR_2 = FUNC_1(VAR_1, 0, ((void*)0), 1);
 return VAR_2;
}
