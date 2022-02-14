
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cq_desc {int type_color; int completed_index; int q_number; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(const struct cq_desc *VAR_5,
 u8 *VAR_6, u8 *VAR_7, u16 *VAR_8, u16 *VAR_9)
{
 const struct cq_desc *VAR_10 = VAR_5;
 const u8 VAR_11 = VAR_10->type_color;

 *VAR_7 = (VAR_11 >> VAR_1) & VAR_0;
 FUNC_1();

 *VAR_6 = VAR_11 & VAR_4;
 *VAR_8 = FUNC_0(VAR_10->q_number) & VAR_3;
 *VAR_9 = FUNC_0(VAR_10->completed_index) &
  VAR_2;
}
