
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucvector ;


 int FUNC_0 (size_t*,int *,unsigned char) ;

__attribute__((used)) static void FUNC_1(size_t* VAR_0, ucvector* VAR_1, unsigned VAR_2, size_t VAR_3)
{
  size_t VAR_4;
  for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) FUNC_0(VAR_0, VAR_1, (unsigned char)((VAR_2 >> VAR_4) & 1));
}
