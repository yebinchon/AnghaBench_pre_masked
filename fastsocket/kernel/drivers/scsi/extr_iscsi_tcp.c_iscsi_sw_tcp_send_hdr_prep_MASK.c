
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct TYPE_2__ {int segment; void* hdr; int data_segment; } ;
struct iscsi_sw_tcp_conn {TYPE_1__ out; int tx_hash; } ;
struct iscsi_segment {int dummy; } ;
struct iscsi_conn {scalar_t__ hdrdgst_en; struct iscsi_tcp_conn* dd_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,char*,char*) ;
 int FUNC_1 (int *,void*,size_t,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,void*,size_t,void*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(struct iscsi_conn *VAR_2, void *VAR_3,
           size_t VAR_4)
{
 struct iscsi_tcp_conn *VAR_5 = VAR_2->dd_data;
 struct iscsi_sw_tcp_conn *VAR_6 = VAR_5->dd_data;

 FUNC_0(VAR_2, "%s\n", VAR_2->hdrdgst_en ?
    "digest enabled" : "digest disabled");



 FUNC_3(&VAR_6->out.data_segment, 0,
        sizeof(struct iscsi_segment));






 if (VAR_2->hdrdgst_en) {
  FUNC_2(&VAR_6->tx_hash, VAR_3, VAR_4,
          VAR_3 + VAR_4);
  VAR_4 += VAR_0;
 }




 VAR_6->out.hdr = VAR_3;

 FUNC_1(&VAR_6->out.segment, VAR_3, VAR_4,
      VAR_1, ((void*)0));
}
