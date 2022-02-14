
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WildcardData {int state; int * customptr; int * pattern; int * path; int filelist; int * protdata; int (* dtor ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct WildcardData *VAR_1)
{
  if(!VAR_1)
    return;

  if(VAR_1->dtor) {
    VAR_1->dtor(VAR_1->protdata);
    VAR_1->dtor = FUNC_2;
    VAR_1->protdata = ((void*)0);
  }
  FUNC_1(VAR_1->protdata == ((void*)0));

  FUNC_0(&VAR_1->filelist, ((void*)0));


  FUNC_3(VAR_1->path);
  VAR_1->path = ((void*)0);
  FUNC_3(VAR_1->pattern);
  VAR_1->pattern = ((void*)0);

  VAR_1->customptr = ((void*)0);
  VAR_1->state = VAR_0;
}
