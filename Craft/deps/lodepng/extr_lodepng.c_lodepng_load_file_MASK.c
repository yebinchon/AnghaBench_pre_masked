
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (unsigned char*,int,size_t,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 long FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (int *) ;

unsigned FUNC_7(unsigned char** VAR_1, size_t* VAR_2, const char* VAR_3)
{
  FILE* VAR_4;
  long VAR_5;


  *VAR_1 = 0;
  *VAR_2 = 0;

  VAR_4 = FUNC_1(VAR_3, "rb");
  if(!VAR_4) return 78;


  FUNC_3(VAR_4 , 0 , VAR_0);
  VAR_5 = FUNC_4(VAR_4);
  FUNC_6(VAR_4);


  *VAR_2 = 0;
  *VAR_1 = (unsigned char*)FUNC_5((size_t)VAR_5);
  if(VAR_5 && (*VAR_1)) (*VAR_2) = FUNC_2(*VAR_1, 1, (size_t)VAR_5, VAR_4);

  FUNC_0(VAR_4);
  if(!(*VAR_1) && VAR_5) return 83;
  return 0;
}
