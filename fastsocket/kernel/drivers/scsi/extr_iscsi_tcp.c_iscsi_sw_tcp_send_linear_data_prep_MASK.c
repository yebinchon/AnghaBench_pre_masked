
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct TYPE_4__ {int data_segment; TYPE_1__* hdr; } ;
struct hash_desc {int dummy; } ;
struct iscsi_sw_tcp_conn {TYPE_2__ out; struct hash_desc tx_hash; } ;
struct iscsi_conn {scalar_t__ datadgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_3__ {int dlength; } ;


 int FUNC_0 (struct iscsi_conn*,char*,size_t,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,void*,size_t,int *,struct hash_desc*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct iscsi_conn *VAR_0, void *VAR_1,
       size_t VAR_2)
{
 struct iscsi_tcp_conn *VAR_3 = VAR_0->dd_data;
 struct iscsi_sw_tcp_conn *VAR_4 = VAR_3->dd_data;
 struct hash_desc *VAR_5 = ((void*)0);
 unsigned int VAR_6;

 FUNC_0(VAR_0, "datalen=%zd %s\n", VAR_2, VAR_0->datadgst_en ?
    "digest enabled" : "digest disabled");



 VAR_6 = FUNC_4(VAR_4->out.hdr->dlength);
 FUNC_1(FUNC_2(VAR_2) != FUNC_2(VAR_6));

 if (VAR_0->datadgst_en)
  VAR_5 = &VAR_4->tx_hash;

 FUNC_3(&VAR_4->out.data_segment,
    VAR_1, VAR_2, ((void*)0), VAR_5);
}
