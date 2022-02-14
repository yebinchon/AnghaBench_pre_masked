
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uncompressed_size; } ;
typedef TYPE_1__ unz_file_info ;
typedef int unzFile ;
typedef int gzFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*,char*,int,int *,int ,int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned char*,int) ;

int FUNC_13(char *VAR_1, unsigned char *VAR_2, int VAR_3, char *VAR_4)
{
  int VAR_5 = 0;

  if(FUNC_0(VAR_1))
  {
    unz_file_info VAR_6;
    int VAR_7 = 0;
    char VAR_8[256];


    unzFile *VAR_9 = FUNC_10(VAR_1);
    if (!VAR_9) return 0;


    VAR_7 = FUNC_9(VAR_9);
    if(VAR_7 != VAR_0)
    {
      FUNC_6(VAR_9);
      return 0;
    }


    VAR_7 = FUNC_8(VAR_9, &VAR_6, VAR_8, 256, ((void*)0), 0, ((void*)0), 0);
    if(VAR_7 != VAR_0)
    {
      FUNC_6(VAR_9);
      return 0;
    }


    if (VAR_4)
    {
      FUNC_5(VAR_4, &VAR_8[FUNC_4(VAR_8) - 3], 3);
      VAR_4[3] = 0;
    }


    VAR_7 = FUNC_11(VAR_9);
    if(VAR_7 != VAR_0)
    {
      FUNC_6(VAR_9);
      return 0;
    }


    VAR_5 = VAR_6.uncompressed_size;
    if(VAR_5 > VAR_3)
    {
      VAR_5 = VAR_3;
    }


    VAR_7 = FUNC_12(VAR_9, VAR_2, VAR_5);
    if(VAR_7 != VAR_5)
    {
      FUNC_7(VAR_9);
      FUNC_6(VAR_9);
      return 0;
    }


    VAR_7 = FUNC_7(VAR_9);
    if(VAR_7 != VAR_0)
    {
      FUNC_6(VAR_9);
      return 0;
    }


    VAR_7 = FUNC_6(VAR_9);
    if(VAR_7 != VAR_0) return 0;
  }
  else
  {

    gzFile *VAR_10 = FUNC_2(VAR_1, "rb");
    if (!VAR_10) return 0;


    VAR_5 = FUNC_3(VAR_10, VAR_2, VAR_3);


    if (VAR_4)
    {
      FUNC_5(VAR_4, &VAR_1[FUNC_4(VAR_1) - 3], 3);
      VAR_4[3] = 0;
    }


    FUNC_1(VAR_10);
  }


  return VAR_5;
}
