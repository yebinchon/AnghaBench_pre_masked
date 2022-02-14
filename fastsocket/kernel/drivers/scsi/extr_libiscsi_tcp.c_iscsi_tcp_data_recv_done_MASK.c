
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int datalen; int hdr; } ;
struct iscsi_tcp_conn {TYPE_1__ in; struct iscsi_conn* iscsi_conn; } ;
struct iscsi_segment {int dummy; } ;
struct iscsi_conn {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,int ,int ,int ) ;
 int FUNC_1 (struct iscsi_tcp_conn*,struct iscsi_segment*) ;
 int FUNC_2 (struct iscsi_tcp_conn*) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_tcp_conn *VAR_1,
    struct iscsi_segment *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_1->iscsi_conn;
 int VAR_4 = 0;

 if (!FUNC_1(VAR_1, VAR_2))
  return VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_1->in.hdr,
   VAR_3->data, VAR_1->in.datalen);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_1);
 return 0;
}
