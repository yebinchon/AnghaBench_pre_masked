
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
struct fileproc {int f_flags; void* f_wset; } ;
typedef int f_wq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct waitq**,void**,int) ;
 int FUNC_1 (char*,void**,struct fileproc*,struct waitq_set*) ;
 int VAR_3 ;
 int FUNC_2 (struct waitq*) ;
 int FUNC_3 (struct waitq*) ;
 int FUNC_4 (int *,struct waitq_set*,int ,int *) ;

__attribute__((used)) static uint64_t FUNC_5(struct fileproc *VAR_4, void **VAR_5, struct waitq_set *VAR_6)
{
 struct waitq *VAR_7 = ((void*)0);

 if ((VAR_4->f_flags & VAR_0) != VAR_0) {
  if (VAR_5)
   FUNC_1("non-null data:%p on fp:%p not in select?!"
         "(wqset:%p)", VAR_5, VAR_4, VAR_6);
  return 0;
 }

 if ((VAR_4->f_flags & VAR_1) == VAR_1) {
  FUNC_4(&VAR_3, VAR_6, VAR_2, ((void*)0));
 }
 if (VAR_5) {
  FUNC_0(&VAR_7, VAR_5, sizeof(VAR_7));
  if (!FUNC_3(VAR_7))
   VAR_7 = ((void*)0);
 }


 if (!VAR_4->f_wset)
  VAR_4->f_wset = (void *)VAR_6;


 return FUNC_2(VAR_7);
}
