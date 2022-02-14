
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tcp_conn {struct cxgbi_conn* dd_data; } ;
struct iscsi_conn {unsigned int max_recv_dlength; struct iscsi_tcp_conn* dd_data; } ;
struct cxgbi_conn {TYPE_2__* chba; } ;
struct TYPE_4__ {TYPE_1__* cdev; } ;
struct TYPE_3__ {unsigned int rx_max_size; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct iscsi_conn *VAR_1)
{
 struct iscsi_tcp_conn *VAR_2 = VAR_1->dd_data;
 struct cxgbi_conn *VAR_3 = VAR_2->dd_data;
 unsigned int VAR_4 = VAR_3->chba->cdev->rx_max_size;

 FUNC_0(VAR_4);

 if (VAR_1->max_recv_dlength) {
  if (VAR_1->max_recv_dlength > VAR_4) {
   FUNC_2("MaxRecvDataSegmentLength %u > %u.\n",
    VAR_1->max_recv_dlength, VAR_4);
   return -VAR_0;
  }
  VAR_1->max_recv_dlength = FUNC_1(VAR_1->max_recv_dlength, VAR_4);
  FUNC_0(VAR_1->max_recv_dlength);
 } else
  VAR_1->max_recv_dlength = VAR_4;

 return 0;
}
