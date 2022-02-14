
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,void*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_6, char *VAR_7)
{
 int VAR_8;
 FUNC_1(VAR_7, 0, VAR_0);

 if (FUNC_0(VAR_6 + 0x00) == 0x5ad &&
     FUNC_0(VAR_6 + 0xde) == 0x5ad) {
  FUNC_2(VAR_7, VAR_6 + 0x20, VAR_0);
 } else {





  for (VAR_8 = 0; VAR_8 < 4; ++VAR_8)
   ((u32 *) VAR_7)[VAR_8] =
    FUNC_3(*(u32 *) (VAR_6 + 0xd0 + VAR_8 * 4));
 }
}
