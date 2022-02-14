
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (char*,...) ;

void FUNC_1(u32 *VAR_0, int VAR_1)
{
 int VAR_2;
 u8 *VAR_3 =(u8*)VAR_0;

 FUNC_0("ASCII BUFFER DUMP (len: %x):\n",VAR_1);

 for(VAR_2=0;VAR_2<VAR_1;VAR_2++)
  FUNC_0("%c",VAR_3[VAR_2]);

 FUNC_0("\nBINARY BUFFER DUMP (len: %x):\n",VAR_1);

 for(VAR_2=0;VAR_2<VAR_1;VAR_2++)
  FUNC_0("%x",VAR_3[VAR_2]);

 FUNC_0("\n");
}
