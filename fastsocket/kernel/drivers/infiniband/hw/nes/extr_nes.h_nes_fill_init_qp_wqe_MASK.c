
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nes_qp {int dummy; } ;
struct nes_hw_qp_wqe {int wqe_words; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (unsigned long) ;

__attribute__((used)) static inline void
FUNC_2(struct nes_hw_qp_wqe *VAR_2, struct nes_qp *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 VAR_5 = ((u32)((unsigned long) VAR_3)) | VAR_4;
 FUNC_0(VAR_2->wqe_words, VAR_0,
   (u32)(FUNC_1((unsigned long)(VAR_3))));
 FUNC_0(VAR_2->wqe_words, VAR_1, VAR_5);
}
