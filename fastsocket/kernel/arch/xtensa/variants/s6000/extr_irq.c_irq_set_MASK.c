
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 const signed char *VAR_6 = VAR_1[VAR_3];

 if (!VAR_6)
  return;
 VAR_5 = VAR_4 ? VAR_2[VAR_3] : 0;
 while (*VAR_6 >= 0) {
  FUNC_1(VAR_5, VAR_0 + FUNC_0(*VAR_6));
  VAR_6++;
 }
}
