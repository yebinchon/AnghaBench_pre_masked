
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * info; int * title; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 size_t FUNC_2 (unsigned char*,int,long,int *) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (long) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_8 (unsigned char*,long,int,int) ;
 int FUNC_9 (int ) ;

int FUNC_10(char *VAR_4, int VAR_5, int VAR_6)
{
 long VAR_7;
 FILE *VAR_8 = FUNC_1(VAR_4, "rb");
 unsigned char *VAR_9;
 int VAR_10;
   int VAR_11;
   size_t VAR_12 = 0;

 if (!VAR_8)
  return 0;


 FUNC_4(VAR_8, 0, VAR_1);
 VAR_7 = FUNC_5(VAR_8);
 FUNC_4(VAR_8, 0, VAR_2);

 VAR_9 = (unsigned char *)FUNC_6(VAR_7);

 if (VAR_9 == ((void*)0))
 {
  FUNC_0(VAR_8);
  return 0;
 }

   VAR_12 = FUNC_2(VAR_9, 1, VAR_7, VAR_8);
 FUNC_0(VAR_8);


 if (VAR_9[0] != 0x50 || VAR_9[1] != 0x53 ||
  VAR_9[2] != 0x46 || VAR_9[3] != 0x11)
 {

  return 0;
 }

 if ((VAR_10 = FUNC_8(VAR_9, VAR_7, VAR_5, VAR_6)) != VAR_0)
 {
  FUNC_3(VAR_9);
  return VAR_10;
 }

   FUNC_7(&VAR_3);

   for (VAR_11 = 0; VAR_11 < 9; VAR_11++)
   {
      FUNC_9(VAR_3.title[VAR_11]);
      FUNC_9(VAR_3.info[VAR_11]);
   }

 return 1;
}
