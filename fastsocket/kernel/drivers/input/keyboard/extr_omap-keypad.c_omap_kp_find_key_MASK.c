
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int ) ;
 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, 0);
 for (VAR_3 = 0; VAR_0[VAR_3] != 0; VAR_3++)
  if ((VAR_0[VAR_3] & 0xff000000) == VAR_4)
   return VAR_0[VAR_3] & 0x00ffffff;
 return -1;
}
