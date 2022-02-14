
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ql4_tuple_ddb {int * isid; void* port; int ip_addr; int * iscsi_name; int tpgt; } ;
struct dev_db_entry {int * isid; int port; int ip_addr; int options; int * iscsi_name; int tgt_portal_grp; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct dev_db_entry *VAR_1,
          struct ql4_tuple_ddb *VAR_2,
          uint8_t *VAR_3)
{
 uint16_t VAR_4 = 0;

 VAR_2->tpgt = FUNC_1(VAR_1->tgt_portal_grp);
 FUNC_2(&VAR_2->iscsi_name[0], &VAR_1->iscsi_name[0],
        FUNC_3(sizeof(VAR_2->iscsi_name), sizeof(VAR_1->iscsi_name)));

 VAR_4 = FUNC_0(VAR_1->options);
 if (VAR_4 & VAR_0)
  FUNC_4(VAR_2->ip_addr, "%pI6", VAR_1->ip_addr);
 else
  FUNC_4(VAR_2->ip_addr, "%pI4", VAR_1->ip_addr);

 VAR_2->port = FUNC_0(VAR_1->port);

 if (VAR_3 == ((void*)0))
  FUNC_2(&VAR_2->isid[0], &VAR_1->isid[0],
         sizeof(VAR_2->isid));
 else
  FUNC_2(&VAR_2->isid[0], &VAR_3[0], sizeof(VAR_2->isid));
}
