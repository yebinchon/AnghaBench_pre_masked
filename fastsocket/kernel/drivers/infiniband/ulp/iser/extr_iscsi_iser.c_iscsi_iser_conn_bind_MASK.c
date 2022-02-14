
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct iser_conn {struct iscsi_iser_conn* iser_conn; } ;
struct iscsi_iser_conn {struct iser_conn* ib_conn; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
struct iscsi_conn {struct iscsi_iser_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 struct iscsi_endpoint* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct iser_conn*) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (char*,unsigned long long) ;
 int FUNC_5 (char*,struct iscsi_conn*,struct iscsi_iser_conn*,struct iser_conn*) ;

__attribute__((used)) static int
FUNC_6(struct iscsi_cls_session *VAR_2,
       struct iscsi_cls_conn *VAR_3, uint64_t VAR_4,
       int VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_3->dd_data;
 struct iscsi_iser_conn *VAR_7;
 struct iser_conn *VAR_8;
 struct iscsi_endpoint *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (VAR_10)
  return VAR_10;



 VAR_9 = FUNC_1(VAR_4);
 if (!VAR_9) {
  FUNC_4("can't bind eph %llx\n",
    (unsigned long long)VAR_4);
  return -VAR_0;
 }
 VAR_8 = VAR_9->dd_data;

 if (FUNC_2(VAR_8))
  return -VAR_1;




 FUNC_5("binding iscsi/iser conn %p %p to ib_conn %p\n",
    VAR_6, VAR_6->dd_data, VAR_8);
 VAR_7 = VAR_6->dd_data;
 VAR_8->iser_conn = VAR_7;
 VAR_7->ib_conn = VAR_8;
 FUNC_3(VAR_8);
 return 0;
}
