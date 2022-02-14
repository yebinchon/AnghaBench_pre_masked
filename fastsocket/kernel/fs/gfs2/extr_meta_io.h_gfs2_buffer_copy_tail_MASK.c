
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct buffer_head *VAR_0,
      int VAR_1,
      struct buffer_head *VAR_2,
      int VAR_3)
{
 FUNC_0(VAR_3 < VAR_1);
 FUNC_1(VAR_0->b_data + VAR_1, VAR_2->b_data + VAR_3,
        VAR_2->b_size - VAR_3);
 FUNC_2(VAR_0->b_data + VAR_0->b_size + VAR_1 - VAR_3,
        0, VAR_3 - VAR_1);
}
