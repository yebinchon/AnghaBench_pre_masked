
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int csk_port_tbl; int * csk_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_0)
{
 struct cnic_local *VAR_1 = VAR_0->cnic_priv;

 FUNC_1(VAR_1->csk_tbl);
 VAR_1->csk_tbl = ((void*)0);
 FUNC_0(&VAR_1->csk_port_tbl);
}
