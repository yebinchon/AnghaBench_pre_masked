
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {int flags; } ;
struct cnic_local {struct cnic_sock* csk_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_sock*) ;
 int FUNC_2 (struct cnic_dev*) ;

__attribute__((used)) static int FUNC_3(struct cnic_dev *VAR_2)
{
 struct cnic_local *VAR_3 = VAR_2->cnic_priv;
 int VAR_4;

 if (!VAR_3->csk_tbl)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct cnic_sock *VAR_5 = &VAR_3->csk_tbl[VAR_4];

  FUNC_0(VAR_1, &VAR_5->flags);
  FUNC_1(VAR_5);
 }
 FUNC_2(VAR_2);

 return 0;
}
