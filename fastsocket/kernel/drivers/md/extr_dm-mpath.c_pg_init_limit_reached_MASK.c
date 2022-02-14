
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgpath {int dummy; } ;
struct multipath {scalar_t__ pg_init_count; scalar_t__ pg_init_retries; int pg_init_required; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct multipath *VAR_0, struct pgpath *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_0(&VAR_0->lock, VAR_2);

 if (VAR_0->pg_init_count <= VAR_0->pg_init_retries)
  VAR_0->pg_init_required = 1;
 else
  VAR_3 = 1;

 FUNC_1(&VAR_0->lock, VAR_2);

 return VAR_3;
}
