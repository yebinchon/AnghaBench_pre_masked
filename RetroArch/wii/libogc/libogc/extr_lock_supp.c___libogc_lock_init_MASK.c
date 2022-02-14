
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;
typedef scalar_t__ mutex_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ) ;
 int VAR_2 ;

int FUNC_1(int *VAR_3,int VAR_4)
{
 s32 VAR_5;
 mutex_t VAR_6 = VAR_1;

 if(!VAR_3) return -1;

 *VAR_3 = 0;
 VAR_5 = FUNC_0(&VAR_6,(VAR_4?VAR_2:VAR_0));
 if(VAR_5==0) *VAR_3 = (int)VAR_6;

 return VAR_5;
}
