
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int*) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1, bool VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_0[(long) VAR_1] + 0x100;

 if (!VAR_2)
  VAR_4 |= 0xff0000;

 return FUNC_0(0x124, VAR_4, &VAR_3);
}
