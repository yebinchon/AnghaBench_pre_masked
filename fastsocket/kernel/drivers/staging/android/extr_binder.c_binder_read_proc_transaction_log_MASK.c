
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_transaction_log {int next; int * entry; scalar_t__ full; } ;
typedef int off_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char*,int *) ;

__attribute__((used)) static int FUNC_2(
 char *VAR_1, char **VAR_2, off_t VAR_3, int VAR_4, int *VAR_5, void *VAR_6)
{
 struct binder_transaction_log *VAR_7 = VAR_6;
 int VAR_8 = 0;
 int VAR_9;
 char *VAR_10 = VAR_1;
 char *VAR_11 = VAR_1 + VAR_0;

 if (VAR_3)
  return 0;

 if (VAR_7->full) {
  for (VAR_9 = VAR_7->next; VAR_9 < FUNC_0(VAR_7->entry); VAR_9++) {
   if (VAR_10 >= VAR_11)
    break;
   VAR_10 = FUNC_1(VAR_10, VAR_11,
        &VAR_7->entry[VAR_9]);
  }
 }
 for (VAR_9 = 0; VAR_9 < VAR_7->next; VAR_9++) {
  if (VAR_10 >= VAR_11)
   break;
  VAR_10 = FUNC_1(VAR_10, VAR_11,
        &VAR_7->entry[VAR_9]);
 }

 *VAR_2 = VAR_1 + VAR_3;

 VAR_8 = VAR_10 - VAR_1;
 if (VAR_8 > VAR_3)
  VAR_8 -= VAR_3;
 else
  VAR_8 = 0;

 return VAR_8 < VAR_4 ? VAR_8 : VAR_4;
}
