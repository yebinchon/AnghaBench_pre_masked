
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qpn_map {scalar_t__ page; } ;
struct qib_qpn_table {struct qpn_map* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qib_qpn_table *VAR_2, u32 VAR_3)
{
 struct qpn_map *VAR_4;

 VAR_4 = VAR_2->map + VAR_3 / VAR_0;
 if (VAR_4->page)
  FUNC_0(VAR_3 & VAR_1, VAR_4->page);
}
