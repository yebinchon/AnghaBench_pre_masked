
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct beiscsi_hba {scalar_t__ db_va; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6,
      unsigned char VAR_7, unsigned char VAR_8)
{
 u32 VAR_9 = 0;
 VAR_9 |= VAR_5 & VAR_3;
 if (VAR_7)
  VAR_9 |= 1 << VAR_2;
 VAR_9 |= VAR_6 << VAR_0;
 FUNC_0(VAR_9, VAR_4->db_va + VAR_1);
}
