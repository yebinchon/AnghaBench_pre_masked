
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_1 (char *VAR_1, u8 *VAR_2)
{
 int VAR_3, VAR_4=0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_2++)
  VAR_4 += FUNC_0(VAR_1 + VAR_4 , "0x%02x ", *VAR_2);
 VAR_4 += FUNC_0(VAR_1 + VAR_4, "\n");
 return VAR_4;
}
