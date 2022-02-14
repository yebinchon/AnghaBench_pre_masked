
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qpn_map {int page; } ;
struct qib_qpn_table {int mask; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,unsigned int) ;

__attribute__((used)) static inline unsigned FUNC_1(struct qib_qpn_table *VAR_1,
     struct qpn_map *VAR_2, unsigned VAR_3,
     unsigned VAR_4)
{
 if (VAR_1->mask) {
  VAR_3++;
  if (((VAR_3 & VAR_1->mask) >> 1) >= VAR_4)
   VAR_3 = (VAR_3 | VAR_1->mask) + 2;
 } else
  VAR_3 = FUNC_0(VAR_2->page, VAR_0, VAR_3);
 return VAR_3;
}
