
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_boot_kobj {int dummy; } ;
struct beiscsi_hba {int boot_kset; TYPE_1__* shost; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct beiscsi_hba*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct iscsi_boot_kobj* FUNC_1 (int ,int ,struct beiscsi_hba*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct iscsi_boot_kobj* FUNC_3 (int ,int ,struct beiscsi_hba*,int ,int ,int ) ;
 struct iscsi_boot_kobj* FUNC_4 (int ,int ,struct beiscsi_hba*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct beiscsi_hba *VAR_8)
{
 struct iscsi_boot_kobj *VAR_9;


 if (FUNC_0(VAR_8))

  return 0;

 VAR_8->boot_kset = FUNC_2(VAR_8->shost->host_no);
 if (!VAR_8->boot_kset)
  return -VAR_0;


 if (!FUNC_6(VAR_8->shost))
  goto free_kset;
 VAR_9 = FUNC_4(VAR_8->boot_kset, 0, VAR_8,
          VAR_6,
          VAR_7,
          VAR_1);
 if (!VAR_9)
  goto put_shost;

 if (!FUNC_6(VAR_8->shost))
  goto free_kset;
 VAR_9 = FUNC_3(VAR_8->boot_kset, 0, VAR_8,
      VAR_5,
      VAR_3,
      VAR_1);
 if (!VAR_9)
  goto put_shost;

 if (!FUNC_6(VAR_8->shost))
  goto free_kset;
 VAR_9 = FUNC_1(VAR_8->boot_kset, 0, VAR_8,
            VAR_4,
            VAR_2,
            VAR_1);
 if (!VAR_9)
  goto put_shost;
 return 0;

put_shost:
 FUNC_7(VAR_8->shost);
free_kset:
 FUNC_5(VAR_8->boot_kset);
 return -VAR_0;
}
