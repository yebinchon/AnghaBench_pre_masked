
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qpn_map {void* page; } ;
struct ipath_qp_table {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ipath_qp_table *VAR_1, struct qpn_map *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;





 FUNC_2(&VAR_1->lock, VAR_4);
 if (VAR_2->page)
  FUNC_0(VAR_3);
 else
  VAR_2->page = (void *)VAR_3;
 FUNC_3(&VAR_1->lock, VAR_4);
}
