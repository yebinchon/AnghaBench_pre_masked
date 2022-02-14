
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct memtype {int type; } ;
struct TYPE_2__ {scalar_t__ (* is_untracked_pat_range ) (int,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int VAR_4 ;
 struct memtype* FUNC_1 (int *,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 struct page* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static unsigned long FUNC_7(u64 VAR_7)
{
 int VAR_8 = VAR_3;
 struct memtype *VAR_9;

 if (VAR_6.is_untracked_pat_range(VAR_7, VAR_7 + VAR_1))
  return VAR_8;

 if (FUNC_2(VAR_7, VAR_7 + VAR_1)) {
  struct page *VAR_10;
  VAR_10 = FUNC_3(VAR_7 >> VAR_0);
  VAR_8 = FUNC_0(VAR_10);




  if (VAR_8 == -1)
   VAR_8 = VAR_3;

  return VAR_8;
 }

 FUNC_4(&VAR_4);

 VAR_9 = FUNC_1(&VAR_5, VAR_7);
 if (VAR_9 != ((void*)0))
  VAR_8 = VAR_9->type;
 else
  VAR_8 = VAR_2;

 FUNC_5(&VAR_4);
 return VAR_8;
}
