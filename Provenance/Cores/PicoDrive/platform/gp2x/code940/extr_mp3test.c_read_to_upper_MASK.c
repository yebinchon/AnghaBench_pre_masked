
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (void*,int,int,int *) ;
 int FUNC_1 (unsigned char*,void*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, void *VAR_1, int VAR_2, FILE *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 while(1)
 {
  VAR_4 = FUNC_0(VAR_1, 1, VAR_2, VAR_3);
  if(VAR_4 <= 0)
   break;
  FUNC_1((unsigned char *)VAR_0 + VAR_5, VAR_1, VAR_4);
  VAR_5 += VAR_4;
 }

 return VAR_5;
}
