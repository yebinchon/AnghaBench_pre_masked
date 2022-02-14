
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(u8 *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_1, VAR_0, 0, " String=[ ");
 for (VAR_5 = VAR_4; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(VAR_1, VAR_0, 0, "%02x ", VAR_2[VAR_5]);
 FUNC_0(VAR_1, VAR_0, 0, "]\n");

 return 0;
}
