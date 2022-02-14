
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int DontBackup; void* lock; void* Io; void* FileName; void* FileNameW; } ;
typedef int FOLDER ;
typedef TYPE_1__ CFG_RW ;


 int * FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int) ;
 void* FUNC_5 () ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int) ;

CFG_RW *FUNC_8(FOLDER **VAR_0, wchar_t *VAR_1, bool VAR_2, wchar_t *VAR_3)
{
 CFG_RW *VAR_4;
 FOLDER *VAR_5;
 bool VAR_6 = 0;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5 == ((void*)0))
 {

  if (FUNC_6(VAR_3) == 0)
  {
   VAR_5 = FUNC_0(VAR_3);
   if (VAR_5 != ((void*)0))
   {
    VAR_6 = 1;

    goto LABEL_CONTINUE;
   }
  }

  VAR_4 = FUNC_7(sizeof(CFG_RW));
  VAR_4->lock = FUNC_5();
  VAR_4->FileNameW = FUNC_1(VAR_1);
  VAR_4->FileName = FUNC_2(VAR_1);
  VAR_4->Io = FUNC_3(VAR_1);
  *VAR_0 = ((void*)0);
  VAR_4->DontBackup = VAR_2;

  return VAR_4;
 }

LABEL_CONTINUE:
 VAR_4 = FUNC_7(sizeof(CFG_RW));
 VAR_4->FileNameW = FUNC_1(VAR_1);
 VAR_4->FileName = FUNC_2(VAR_1);
 if (VAR_6 == 0)
 {
  VAR_4->Io = FUNC_4(VAR_1, 0);
 }
 else
 {
  VAR_4->Io = FUNC_3(VAR_1);
 }
 VAR_4->lock = FUNC_5();

 *VAR_0 = VAR_5;

 VAR_4->DontBackup = VAR_2;

 return VAR_4;
}
