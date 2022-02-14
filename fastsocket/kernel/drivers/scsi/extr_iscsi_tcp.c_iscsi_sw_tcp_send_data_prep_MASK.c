
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct TYPE_4__ {int data_segment; TYPE_1__* hdr; } ;
struct hash_desc {int dummy; } ;
struct iscsi_sw_tcp_conn {TYPE_2__ out; struct hash_desc tx_hash; } ;
struct iscsi_conn {scalar_t__ datadgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_3__ {int dlength; } ;


 int FUNC_0 (struct iscsi_conn*,char*,unsigned int,unsigned int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,struct scatterlist*,unsigned int,unsigned int,unsigned int,int *,struct hash_desc*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct iscsi_conn *VAR_0, struct scatterlist *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3,
       unsigned int VAR_4)
{
 struct iscsi_tcp_conn *VAR_5 = VAR_0->dd_data;
 struct iscsi_sw_tcp_conn *VAR_6 = VAR_5->dd_data;
 struct hash_desc *VAR_7 = ((void*)0);
 unsigned int VAR_8;

 FUNC_0(VAR_0, "offset=%d, datalen=%d %s\n", VAR_3, VAR_4,
    VAR_0->datadgst_en ?
    "digest enabled" : "digest disabled");



 VAR_8 = FUNC_4(VAR_6->out.hdr->dlength);
 FUNC_1(FUNC_2(VAR_4) != FUNC_2(VAR_8));

 if (VAR_0->datadgst_en)
  VAR_7 = &VAR_6->tx_hash;

 return FUNC_3(&VAR_6->out.data_segment,
         VAR_1, VAR_2, VAR_3, VAR_4,
         ((void*)0), VAR_7);
}
