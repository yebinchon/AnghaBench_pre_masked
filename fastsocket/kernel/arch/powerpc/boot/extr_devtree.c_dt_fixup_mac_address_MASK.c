
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int index ;


 void* FUNC_0 (int *,char*,void*,int) ;
 int FUNC_1 (char*,int,int const,int const,int const,int const,int const,int const) ;
 int FUNC_2 (void*,char*,int const*,int) ;

void FUNC_3(u32 VAR_0, const u8 *VAR_1)
{
 void *VAR_2 = FUNC_0(((void*)0), "linux,network-index",
                                      (void*)&VAR_0, sizeof(VAR_0));

 if (VAR_2) {
  FUNC_1("ENET%d: local-mac-address <-"
         " %02x:%02x:%02x:%02x:%02x:%02x\n\r", VAR_0,
         VAR_1[0], VAR_1[1], VAR_1[2],
         VAR_1[3], VAR_1[4], VAR_1[5]);

  FUNC_2(VAR_2, "local-mac-address", VAR_1, 6);
 }
}
