
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct beiscsi_hba {scalar_t__ db_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_6,
      unsigned int VAR_7, unsigned int VAR_8,
      unsigned int VAR_9,
      unsigned char VAR_10, unsigned char VAR_11)
{
 u32 VAR_12 = 0;
 VAR_12 |= VAR_7 & VAR_5;
 if (VAR_10)
  VAR_12 |= 1 << VAR_4;
 if (VAR_8)
  VAR_12 |= 1 << VAR_0;
 if (VAR_11)
  VAR_12 |= 1 << VAR_1;
 VAR_12 |= VAR_9 << VAR_2;
 FUNC_0(VAR_12, VAR_6->db_va + VAR_3);
}
