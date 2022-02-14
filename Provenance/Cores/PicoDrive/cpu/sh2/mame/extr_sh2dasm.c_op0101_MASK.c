
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,char*,int,char*,char*) ;

__attribute__((used)) static UINT32 FUNC_1(char *VAR_3, UINT32 VAR_4, UINT16 VAR_5)
{
 FUNC_0(VAR_3, "MOV.L   @($%02X,%s),%s", (VAR_5 & 15) * 4, VAR_2[VAR_0], VAR_2[VAR_1]);
 return 0;
}
