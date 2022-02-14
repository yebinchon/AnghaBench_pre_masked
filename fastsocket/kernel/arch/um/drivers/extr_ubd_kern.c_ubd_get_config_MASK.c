
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* file; } ;
struct ubd {char* file; TYPE_1__ cow; } ;


 int FUNC_0 (char*,int,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char**) ;
 struct ubd* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(char *VAR_3, char *VAR_4, int VAR_5, char **VAR_6)
{
 struct ubd *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_8 = FUNC_3(&VAR_3);
 if((VAR_8 >= VAR_0) || (VAR_8 < 0)){
  *VAR_6 = "ubd_get_config : device number out of range";
  return -1;
 }

 VAR_7 = &VAR_1[VAR_8];
 FUNC_1(&VAR_2);

 if(VAR_7->file == ((void*)0)){
  FUNC_0(VAR_4, VAR_5, VAR_9, "", 1);
  goto out;
 }

 FUNC_0(VAR_4, VAR_5, VAR_9, VAR_7->file, 0);

 if(VAR_7->cow.file != ((void*)0)){
  FUNC_0(VAR_4, VAR_5, VAR_9, ",", 0);
  FUNC_0(VAR_4, VAR_5, VAR_9, VAR_7->cow.file, 1);
 }
 else FUNC_0(VAR_4, VAR_5, VAR_9, "", 1);

 out:
 FUNC_2(&VAR_2);
 return VAR_9;
}
