
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {scalar_t__ small_buf_index; int small_buf_release_cnt; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ql3_adapter *VAR_1)
{
 if (++VAR_1->small_buf_index == VAR_0)
  VAR_1->small_buf_index = 0;
 VAR_1->small_buf_release_cnt++;
}
