
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long FUNC_0 (int ,char*,int) ;
 long FUNC_1 (char*,long) ;

__attribute__((used)) static inline long FUNC_2(void)
{
 char VAR_1[256];
 long VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, 255);
 if (VAR_2 < 0)
  return VAR_2;
 return FUNC_1(VAR_1, VAR_2 & 255);
}
