
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* pos_in_central_dir; void* num_file; int current_file_ok; } ;
typedef TYPE_1__ unz_s ;
typedef int * unzFile ;
typedef void* uLong ;
typedef int szCurrentFileName ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,int *,char*,int,int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;

extern int FUNC_5 (unzFile VAR_4, const char *VAR_5, int VAR_6)
{
 unz_s* VAR_7;
 int VAR_8;


 uLong VAR_9;
 uLong VAR_10;


 if (VAR_4==((void*)0))
  return VAR_3;

    if (FUNC_0(VAR_5)>=VAR_1)
        return VAR_3;

 VAR_7=(unz_s*)VAR_4;
 if (!VAR_7->current_file_ok)
  return VAR_0;

 VAR_9 = VAR_7->num_file;
 VAR_10 = VAR_7->pos_in_central_dir;

 VAR_8 = FUNC_2(VAR_4);

 while (VAR_8 == VAR_2)
 {
  char VAR_11[VAR_1+1];
  FUNC_1(VAR_4,((void*)0),
        VAR_11,sizeof(VAR_11)-1,
        ((void*)0),0,((void*)0),0);
  if (FUNC_4(VAR_11,
          VAR_5,VAR_6)==0)
   return VAR_2;
  VAR_8 = FUNC_3(VAR_4);
 }

 VAR_7->num_file = VAR_9 ;
 VAR_7->pos_in_central_dir = VAR_10 ;
 return VAR_8;
}
