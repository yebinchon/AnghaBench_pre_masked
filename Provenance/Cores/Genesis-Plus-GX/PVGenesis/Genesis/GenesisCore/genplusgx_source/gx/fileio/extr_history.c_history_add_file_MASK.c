
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {char* filepath; char* filename; int filetype; } ;
typedef TYPE_1__ t_history_entry ;
struct TYPE_6__ {TYPE_1__* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

void FUNC_4(char *VAR_3, char *VAR_4, u8 VAR_5)
{

  t_history_entry VAR_6;
  FUNC_3(VAR_6.filepath, VAR_3, VAR_0 - 1);
  FUNC_3(VAR_6.filename, VAR_4, VAR_0 - 1);
  VAR_6.filepath[VAR_0 - 1] = '\0';
  VAR_6.filename[VAR_0 - 1] = '\0';
  VAR_6.filetype = VAR_5;

  t_history_entry VAR_7;
  t_history_entry VAR_8;


  FUNC_1(&VAR_8, &VAR_6, sizeof(t_history_entry));

  int VAR_9;
  for(VAR_9=0; VAR_9 < VAR_1; VAR_9++)
  {

    FUNC_1(&VAR_7, &VAR_2.entries[VAR_9], sizeof(t_history_entry));


    FUNC_1(&VAR_2.entries[VAR_9], &VAR_8, sizeof(t_history_entry));


    FUNC_1(&VAR_8, &VAR_7, sizeof(t_history_entry));




    if(FUNC_2(VAR_6.filepath, VAR_8.filepath) == 0 && FUNC_2(VAR_6.filename, VAR_8.filename) == 0)
      break;
  }


  FUNC_0();
}
