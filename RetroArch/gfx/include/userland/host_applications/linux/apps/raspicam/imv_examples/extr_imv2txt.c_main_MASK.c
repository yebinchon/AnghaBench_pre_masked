
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x_vector; int y_vector; int sad; } ;
typedef TYPE_1__ INLINE_MOTION_VECTOR ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,long,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 long FUNC_6 (int *) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (char*,...) ;

int FUNC_10(int VAR_2, const char **VAR_3)
{
   if(VAR_2!=5)
   {
      FUNC_9("usage: %s data.imv mbx mby out.dat\n",VAR_3[0]);
      return 0;
   }
   int VAR_4=FUNC_0(VAR_3[2]);
   int VAR_5=FUNC_0(VAR_3[3]);




   FILE *VAR_6 = FUNC_2(VAR_3[1], "rb");
   FUNC_5(VAR_6, 0, VAR_0);
   long VAR_7 = FUNC_6(VAR_6);
   FUNC_5(VAR_6, 0, VAR_1);
   char *VAR_8 = FUNC_7(VAR_7 + 1);
   FUNC_4(VAR_8, VAR_7, 1, VAR_6);
   FUNC_1(VAR_6);
   VAR_8[VAR_7] = 0;




   if(VAR_7<(VAR_4+1)*VAR_5*4)
   {
      FUNC_9("File to short!\n");
      return 0;
   }
   INLINE_MOTION_VECTOR *VAR_9;
   VAR_9 = FUNC_7((VAR_4+1)*VAR_5*sizeof(INLINE_MOTION_VECTOR));
   FUNC_8 ( &VAR_9[0], &VAR_8[0], (VAR_4+1)*VAR_5*sizeof(INLINE_MOTION_VECTOR) );




   FILE *VAR_10 = FUNC_2(VAR_3[4], "w");
   FUNC_3(VAR_10,"#x y u v sad\n");
   int VAR_11,VAR_12;
   for(VAR_12=0;VAR_12<VAR_5; VAR_12++)
      for(VAR_11=0;VAR_11<VAR_4; VAR_11++)
   {
      FUNC_3(VAR_10,"%g %g %d %d %d\n",(VAR_11+0.5)*16.,(VAR_5-VAR_12-0.5)*16.,-VAR_9[VAR_11+(VAR_4+1)*VAR_12].x_vector,VAR_9[VAR_11+(VAR_4+1)*VAR_12].y_vector,VAR_9[VAR_11+(VAR_4+1)*VAR_12].sad);
   }
   FUNC_1(VAR_10);
 return 0;

}
