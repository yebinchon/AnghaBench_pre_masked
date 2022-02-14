
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int UINT16 ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*,int,char*,int) ;

__attribute__((used)) static UINT32 FUNC_1(char *VAR_2, UINT32 VAR_3, UINT16 VAR_4)
{
 FUNC_0(VAR_2, "MOV.W   @($%02X,PC),%s  ; @$%08x", (VAR_4 & 0xff) * 2, VAR_1[VAR_0],
  VAR_3 + (VAR_4 & 0xff) * 2 + 2);
 return 0;
}
