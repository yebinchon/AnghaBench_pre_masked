
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int model ;
typedef int fw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned char*,int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (unsigned char*,char*) ;

__attribute__((used)) static int FUNC_3(u16 *VAR_5)
{
 unsigned char VAR_6[VAR_3 + 1], VAR_7[VAR_1 + 1];

 if (!VAR_4)
  return 0;
 if (!FUNC_1(VAR_5))
  return 0;

 FUNC_0(VAR_5, VAR_6, VAR_2, sizeof(VAR_6));
 FUNC_0(VAR_5, VAR_7, VAR_0, sizeof(VAR_7));

 if (FUNC_2(VAR_6, "Maxtor"))
  return 1;
 if (FUNC_2(VAR_7, "BANC1G10"))
  return 1;

 return 0;
}
