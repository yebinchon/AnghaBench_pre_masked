
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 int FUNC_0 (char) ;

__attribute__((used)) static s32 FUNC_1(char **VAR_0, s32 *VAR_1)
{
 s32 VAR_2;
 s32 VAR_3,VAR_4;

 VAR_3 = 0;
 VAR_2 = 0;
 while(**VAR_0) {
  VAR_4 = FUNC_0(**VAR_0);
  if(VAR_4<0) break;

  VAR_3 = (VAR_3<<4)|VAR_4;
  VAR_2++;

  (*VAR_0)++;
 }
 *VAR_1 = VAR_3;
 return VAR_2;
}
