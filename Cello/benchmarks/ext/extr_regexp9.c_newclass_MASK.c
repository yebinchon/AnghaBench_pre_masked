
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Reclass ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static Reclass*
FUNC_1(void)
{
 if(VAR_2 >= VAR_0)
  FUNC_0("too many character classes; limit", VAR_0+'0');
 return &(VAR_1[VAR_2++]);
}
