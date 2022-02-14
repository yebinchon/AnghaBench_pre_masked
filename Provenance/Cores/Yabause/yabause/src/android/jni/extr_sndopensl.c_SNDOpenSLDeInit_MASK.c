
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JNIEnv ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
   int VAR_2;
   JNIEnv * VAR_3;

   for( VAR_2=0; VAR_2< VAR_0; VAR_2++ )
   {
      FUNC_0(VAR_1[VAR_2]);
      VAR_1[VAR_2] = ((void*)0);
   }

}
