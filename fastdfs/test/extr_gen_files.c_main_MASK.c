
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; int bytes; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_5 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char*,int,int,int *) ;
 int FUNC_4 (unsigned char*,int,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;

int FUNC_8()
{

 int VAR_6;
 int VAR_7;
 int VAR_8;
 FILE *VAR_9;
 unsigned char VAR_10[(1 * 1024)];
 unsigned char *VAR_11;
 unsigned char *VAR_12;

 FUNC_7(VAR_3);
 VAR_12 = VAR_10 + (1 * 1024);
 for (VAR_6=0; VAR_6<VAR_1; VAR_6++)
 {
  VAR_9 = FUNC_2(VAR_5[VAR_6].filename, "wb");
  if (VAR_9 == ((void*)0))
  {
   FUNC_5("open file %s fail, errno: %d, error info: %s\n",
    VAR_5[VAR_6].filename, VAR_4, FUNC_0(VAR_4));
   return 1;
  }

  VAR_8 = VAR_5[VAR_6].bytes / (1 * 1024);
  for (VAR_7=0; VAR_7<VAR_8-1; VAR_7++)
  {
   for (VAR_11=VAR_10; VAR_11<VAR_12; VAR_11++)
   {
    *VAR_11 = (int)(255 * ((double)FUNC_6() / VAR_2));
   }

   if (FUNC_3(VAR_10, (1 * 1024), 1, VAR_9) != 1)
   {
    FUNC_5("write file %s fail, errno: %d, error info: %s\n",
     VAR_5[VAR_6].filename, VAR_4, FUNC_0(VAR_4));
          FUNC_1(VAR_9);
    return 1;
   }
  }

  FUNC_4(VAR_10, 0xFF, (1 * 1024));
  if (FUNC_3(VAR_10, (1 * 1024), 1, VAR_9) != 1)
  {
   FUNC_5("write file %s fail, errno: %d, error info: %s\n",
    VAR_5[VAR_6].filename, VAR_4, FUNC_0(VAR_4));
      FUNC_1(VAR_9);
   return 1;
  }

  FUNC_1(VAR_9);
 }

 FUNC_5("done.\n");

 return 0;
}
