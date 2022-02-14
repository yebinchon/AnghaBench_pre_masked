
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qpn_map {int dummy; } ;
struct qib_qpn_table {struct qpn_map* map; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(struct qib_qpn_table *VAR_1,
         struct qpn_map *VAR_2, unsigned VAR_3)
{
 return (VAR_2 - VAR_1->map) * VAR_0 + VAR_3;
}
