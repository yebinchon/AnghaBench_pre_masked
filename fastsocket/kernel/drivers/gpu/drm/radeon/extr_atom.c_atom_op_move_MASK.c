
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int atom_exec_context ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int*,int*,int ) ;
 int FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int *,int,int,int*,int,int) ;
 int FUNC_5 (int *,int,int,int*) ;

__attribute__((used)) static void FUNC_6(atom_exec_context *VAR_1, int *VAR_2, int VAR_3)
{
 uint8_t VAR_4 = FUNC_1((*VAR_2)++);
 uint32_t VAR_5, VAR_6;
 int VAR_7 = *VAR_2;
 if (((VAR_4 >> 3) & 7) != VAR_0)
  FUNC_2(VAR_1, VAR_3, VAR_4, VAR_2, &VAR_6, 0);
 else {
  FUNC_5(VAR_1, VAR_3, VAR_4, VAR_2);
  VAR_6 = 0xCDCDCDCD;
 }
 FUNC_0("   src: ");
 VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_2);
 FUNC_0("   dst: ");
 FUNC_4(VAR_1, VAR_3, VAR_4, &VAR_7, VAR_5, VAR_6);
}
