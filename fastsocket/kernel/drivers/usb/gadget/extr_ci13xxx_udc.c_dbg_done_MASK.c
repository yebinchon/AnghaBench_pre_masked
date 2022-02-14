
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int msg ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (char*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_3(u8 VAR_3, const u32 VAR_4, int VAR_5)
{
 char VAR_6[VAR_0];

 FUNC_2(VAR_6, sizeof(VAR_6), "%d %02X",
    (int)(VAR_4 & VAR_2) >> FUNC_1(VAR_2),
    (int)(VAR_4 & VAR_1) >> FUNC_1(VAR_1));
 FUNC_0(VAR_3, "DONE", VAR_5, VAR_6);
}
