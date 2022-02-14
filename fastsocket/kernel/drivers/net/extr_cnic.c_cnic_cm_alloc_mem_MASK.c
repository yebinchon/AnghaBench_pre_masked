
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cnic_sock {int dummy; } ;
struct cnic_local {int csk_port_tbl; int csk_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cnic_dev*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct cnic_dev *VAR_5)
{
 struct cnic_local *VAR_6 = VAR_5->cnic_priv;
 u32 VAR_7;

 VAR_6->csk_tbl = FUNC_2(sizeof(struct cnic_sock) * VAR_4,
         VAR_3);
 if (!VAR_6->csk_tbl)
  return -VAR_2;

 VAR_7 = FUNC_3();
 VAR_7 %= VAR_1;
 if (FUNC_1(&VAR_6->csk_port_tbl, VAR_1,
        VAR_0, VAR_7)) {
  FUNC_0(VAR_5);
  return -VAR_2;
 }
 return 0;
}
