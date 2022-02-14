
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1_table {int addr; int page; int * bufs; } ;
struct pt1 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt1*,int *) ;
 int FUNC_1 (struct pt1*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pt1 *VAR_1, struct pt1_table *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1, &VAR_2->bufs[VAR_3]);

 FUNC_1(VAR_1, VAR_2->page, VAR_2->addr);
}
