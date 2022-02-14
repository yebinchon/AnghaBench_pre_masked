
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_srq_context {int logstride; int log_page_size; int state_logsize_srqn; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_srq_context *VAR_0)
{
 int VAR_1 = (FUNC_0(VAR_0->state_logsize_srqn) >> 24) & 0xf;
 int VAR_2 = VAR_0->logstride & 7;
 int VAR_3 = (VAR_0->log_page_size & 0x3f) + 12;

 if (VAR_1 + VAR_2 + 4 < VAR_3)
  return 1;

 return 1 << (VAR_1 + VAR_2 + 4 - VAR_3);
}
