
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x_vector; int y_vector; } ;
typedef TYPE_1__ INLINE_MOTION_VECTOR ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 unsigned char FUNC_2 (int ) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (unsigned char,int *) ;
 int FUNC_6 (char*,long,int,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 long FUNC_8 (int *) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,char*,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int) ;

int FUNC_13(int VAR_2, const char **VAR_3)
{
   if(VAR_2!=5)
   {
      FUNC_11("usage: %s data.imv mbx mby out.pgm\n",VAR_3[0]);
      return 0;
   }
   int VAR_4=FUNC_0(VAR_3[2]);
   int VAR_5=FUNC_0(VAR_3[3]);




   FILE *VAR_6 = FUNC_3(VAR_3[1], "rb");
   FUNC_7(VAR_6, 0, VAR_0);
   long VAR_7 = FUNC_8(VAR_6);
   FUNC_7(VAR_6, 0, VAR_1);
   char *VAR_8 = FUNC_9(VAR_7 + 1);
   FUNC_6(VAR_8, VAR_7, 1, VAR_6);
   FUNC_1(VAR_6);
   VAR_8[VAR_7] = 0;




   if(VAR_7<(VAR_4+1)*VAR_5*4)
   {
      FUNC_11("File to short!\n");
      return 0;
   }
   INLINE_MOTION_VECTOR *VAR_9;
   VAR_9 = FUNC_9((VAR_4+1)*VAR_5*sizeof(INLINE_MOTION_VECTOR));
   FUNC_10 ( &VAR_9[0], &VAR_8[0], (VAR_4+1)*VAR_5*sizeof(INLINE_MOTION_VECTOR) );




   FILE *VAR_10 = FUNC_3(VAR_3[4], "w");
   FUNC_4(VAR_10,"P5\n%d %d\n255\n",VAR_4,VAR_5);
   int VAR_11,VAR_12;
   for(VAR_12=0;VAR_12<VAR_5; VAR_12++)
      for(VAR_11=0;VAR_11<VAR_4; VAR_11++)
   {
         unsigned char VAR_13=FUNC_2(FUNC_12(VAR_9[VAR_11+(VAR_4+1)*VAR_12].x_vector*VAR_9[VAR_11+(VAR_4+1)*VAR_12].x_vector+VAR_9[VAR_11+(VAR_4+1)*VAR_12].y_vector*VAR_9[VAR_11+(VAR_4+1)*VAR_12].y_vector));
         FUNC_5(VAR_13,VAR_10);
   }
   FUNC_1(VAR_10);
 return 0;

}
