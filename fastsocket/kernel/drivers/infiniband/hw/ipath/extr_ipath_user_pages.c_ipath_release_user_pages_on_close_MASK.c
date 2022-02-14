
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct ipath_user_pages_work {size_t num_pages; int work; struct mm_struct* mm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct page**,size_t,int) ;
 int VAR_1 ;
 struct mm_struct* FUNC_2 (int ) ;
 int VAR_2 ;
 struct ipath_user_pages_work* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;

void FUNC_6(struct page **VAR_4, size_t VAR_5)
{
 struct ipath_user_pages_work *VAR_6;
 struct mm_struct *VAR_7;

 FUNC_1(VAR_4, VAR_5, 1);

 VAR_7 = FUNC_2(VAR_1);
 if (!VAR_7)
  return;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  goto bail_mm;

 FUNC_0(&VAR_6->work, VAR_3);
 VAR_6->mm = VAR_7;
 VAR_6->num_pages = VAR_5;

 FUNC_5(VAR_2, &VAR_6->work);
 return;

bail_mm:
 FUNC_4(VAR_7);
 return;
}
