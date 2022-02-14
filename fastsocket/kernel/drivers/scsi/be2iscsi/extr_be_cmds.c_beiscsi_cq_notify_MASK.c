
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct beiscsi_hba {scalar_t__ db_va; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_4, u16 VAR_5, bool VAR_6,
         u16 VAR_7)
{
 u32 VAR_8 = 0;
 VAR_8 |= VAR_5 & VAR_3;
 if (VAR_6)
  VAR_8 |= 1 << VAR_2;
 VAR_8 |= VAR_7 << VAR_0;
 FUNC_0(VAR_8, VAR_4->db_va + VAR_1);
}
