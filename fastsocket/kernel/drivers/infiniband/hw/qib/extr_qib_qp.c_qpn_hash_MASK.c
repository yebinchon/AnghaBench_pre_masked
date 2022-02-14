
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_ibdev {int qp_table_size; int qp_rnd; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline unsigned FUNC_1(struct qib_ibdev *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->qp_rnd) &
  (VAR_0->qp_table_size - 1);
}
