
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {char* d_name; scalar_t__ d_type; } ;
struct TYPE_4__ {int flags; int filename; } ;
typedef int FILEENTRIES ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

int FUNC_8(void)
{
  int VAR_5 = 0;


  DIR *VAR_6 = FUNC_2(VAR_3);
  if (VAR_6 == ((void*)0))
  {
    return -1;
  }

  struct dirent *VAR_7 = FUNC_4(VAR_6);


  while ((VAR_7 != ((void*)0))&& (VAR_5 < VAR_2))
  {

    if ((VAR_7->d_name[0] != '.')
       && FUNC_7(".wav", &VAR_7->d_name[FUNC_6(VAR_7->d_name) - 4], 4)
       && FUNC_7(".ogg", &VAR_7->d_name[FUNC_6(VAR_7->d_name) - 4], 4)
       && FUNC_7(".mp3", &VAR_7->d_name[FUNC_6(VAR_7->d_name) - 4], 4))
    {
      FUNC_1(&VAR_4[VAR_5], 0, sizeof (FILEENTRIES));
      FUNC_5(VAR_4[VAR_5].filename,"%s",VAR_7->d_name);
      if (VAR_7->d_type == VAR_0)
      {
        VAR_4[VAR_5].flags = 1;
      }
      VAR_5++;
    }


    VAR_7 = FUNC_4(VAR_6);
  }


  FUNC_0(VAR_6);


  FUNC_3(VAR_4, VAR_5, sizeof(FILEENTRIES), VAR_1);

  return VAR_5;
}
