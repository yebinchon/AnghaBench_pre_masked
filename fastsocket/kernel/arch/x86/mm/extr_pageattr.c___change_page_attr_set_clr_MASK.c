
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {int numpages; int flags; int* vaddr; int curpage; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cpa_data*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct cpa_data*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cpa_data *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = VAR_5->numpages;

 while (VAR_8) {




  VAR_5->numpages = VAR_8;

  if (VAR_5->flags & (VAR_0 | VAR_1))
   VAR_5->numpages = 1;

  if (!VAR_4)
   FUNC_3(&VAR_3);
  VAR_7 = FUNC_1(VAR_5, VAR_6);
  if (!VAR_4)
   FUNC_4(&VAR_3);
  if (VAR_7)
   return VAR_7;

  if (VAR_6) {
   VAR_7 = FUNC_2(VAR_5);
   if (VAR_7)
    return VAR_7;
  }






  FUNC_0(VAR_5->numpages > VAR_8);
  VAR_8 -= VAR_5->numpages;
  if (VAR_5->flags & (VAR_1 | VAR_0))
   VAR_5->curpage++;
  else
   *VAR_5->vaddr += VAR_5->numpages * VAR_2;

 }
 return 0;
}
