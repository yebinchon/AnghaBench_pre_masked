
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int * reg_window; int * rwbuf_stkptrs; } ;
struct reg_window {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, int VAR_1,
           struct thread_info *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2->rwbuf_stkptrs[VAR_3] = VAR_2->rwbuf_stkptrs[VAR_3+1];
  FUNC_0(&VAR_2->reg_window[VAR_3], &VAR_2->reg_window[VAR_3+1],
         sizeof(struct reg_window));
 }
}
