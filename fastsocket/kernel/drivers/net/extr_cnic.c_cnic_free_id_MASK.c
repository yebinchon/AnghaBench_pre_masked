
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cnic_id_tbl {int max; int table; scalar_t__ start; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct cnic_id_tbl *VAR_0, u32 VAR_1)
{
 if (VAR_1 == -1)
  return;

 VAR_1 -= VAR_0->start;
 if (VAR_1 >= VAR_0->max)
  return;

 FUNC_0(VAR_1, VAR_0->table);
}
