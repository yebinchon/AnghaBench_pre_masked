
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 void FUNC_0 (int,void*) ;

__attribute__((used)) static int
FUNC_1(
 unsigned long long int VAR_2,
 int VAR_3,
 void (*VAR_4)(int, void *),
 void *VAR_5)
{
 char VAR_6[VAR_0];
 char * VAR_7 = &VAR_6[VAR_0-1];
 int VAR_8 = 0;

 do {
     *VAR_7-- = VAR_1[VAR_2 % VAR_3];
     VAR_2 /= VAR_3;
 } while (VAR_2 != 0);

 while (++VAR_7 != &VAR_6[VAR_0]) {
     (*VAR_4)(*VAR_7, VAR_5);
     VAR_8++;
 }

 return VAR_8;
}
