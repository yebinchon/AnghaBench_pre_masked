
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int FILE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__,int,int ,int *) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,struct stat*) ;

void FUNC_7(void)
{



  FUNC_0();


  char VAR_4[VAR_3];
  FUNC_5(VAR_4,"%s/Bg_music.ogg",VAR_2);
  FILE *VAR_5 = FUNC_2(VAR_4,"rb");
  if (VAR_5)
  {
    struct stat VAR_6;
    FUNC_6(VAR_4, &VAR_6);
    VAR_1 = VAR_6.st_size;
    VAR_0 = FUNC_4(32,VAR_1);
    if (VAR_0)
    {
      FUNC_3(VAR_0,1,VAR_1,VAR_5);
    }
    FUNC_1(VAR_5);
  }
}
