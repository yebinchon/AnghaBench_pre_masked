
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; } ;
struct dentry {int d_lock; int d_flags; } ;
struct dcookie_struct {struct path path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dcookie_struct*) ;
 struct dcookie_struct* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct dcookie_struct *FUNC_5(struct path *VAR_3)
{
 struct dcookie_struct *VAR_4 = FUNC_1(VAR_2,
       VAR_1);
 struct dentry *VAR_5;
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = VAR_3->dentry;
 FUNC_3(&VAR_5->d_lock);
 VAR_5->d_flags |= VAR_0;
 FUNC_4(&VAR_5->d_lock);

 VAR_4->path = *VAR_3;
 FUNC_2(VAR_3);
 FUNC_0(VAR_4);
 return VAR_4;
}
