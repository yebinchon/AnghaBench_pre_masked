
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_session {int lock; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iscsi_cls_conn *VAR_1, struct iscsi_hdr *VAR_2,
   char *VAR_3, uint32_t VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_1->dd_data;
 struct iscsi_session *VAR_6 = VAR_5->session;
 int VAR_7 = 0;

 FUNC_1(&VAR_6->lock);
 if (!FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4))
  VAR_7 = -VAR_0;
 FUNC_2(&VAR_6->lock);
 return VAR_7;
}
