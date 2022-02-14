
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slow_work_ops {int dummy; } ;
struct page {int dummy; } ;
struct cifs_readdata {int work; int done; int list; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cifs_readdata* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct slow_work_ops const*) ;

__attribute__((used)) static struct cifs_readdata *
FUNC_5(unsigned int VAR_1, const struct slow_work_ops *VAR_2)
{
 struct cifs_readdata *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3) + (sizeof(struct page *) * VAR_1),
   VAR_0);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(&VAR_3->refcount);
  FUNC_0(&VAR_3->list);
  FUNC_1(&VAR_3->done);
  FUNC_4(&VAR_3->work, VAR_2);
 }

 return VAR_3;
}
