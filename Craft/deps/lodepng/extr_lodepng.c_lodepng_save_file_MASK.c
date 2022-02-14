
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,size_t,int *) ;

unsigned FUNC_3(const unsigned char* VAR_0, size_t VAR_1, const char* VAR_2)
{
  FILE* VAR_3;
  VAR_3 = FUNC_1(VAR_2, "wb" );
  if(!VAR_3) return 79;
  FUNC_2((char*)VAR_0 , 1 , VAR_1, VAR_3);
  FUNC_0(VAR_3);
  return 0;
}
