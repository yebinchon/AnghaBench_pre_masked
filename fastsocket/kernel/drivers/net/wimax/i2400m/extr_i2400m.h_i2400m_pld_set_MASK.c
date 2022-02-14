
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_pld {int val; } ;
typedef enum i2400m_pt { ____Placeholder_i2400m_pt } i2400m_pt ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline
void FUNC_1(struct i2400m_pld *VAR_3, size_t VAR_4,
      enum i2400m_pt VAR_5)
{
 VAR_3->val = FUNC_0(
  ((VAR_5 << VAR_2) & VAR_1)
  | (VAR_4 & VAR_0));
}
