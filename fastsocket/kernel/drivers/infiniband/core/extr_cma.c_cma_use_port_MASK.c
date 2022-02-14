
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int reuseaddr; } ;
struct rdma_bind_list {int dummy; } ;
struct idr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct idr*,struct rdma_id_private*,unsigned short) ;
 int FUNC_2 (struct rdma_bind_list*,struct rdma_id_private*) ;
 int FUNC_3 (struct rdma_bind_list*,struct rdma_id_private*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rdma_id_private*) ;
 struct rdma_bind_list* FUNC_6 (struct idr*,unsigned short) ;
 unsigned short FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct idr *VAR_3, struct rdma_id_private *VAR_4)
{
 struct rdma_bind_list *VAR_5;
 unsigned short VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(FUNC_4(FUNC_5(VAR_4)));
 if (VAR_6 < VAR_2 && !FUNC_0(VAR_0))
  return -VAR_1;

 VAR_5 = FUNC_6(VAR_3, VAR_6);
 if (!VAR_5) {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6);
 } else {
  VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_4->reuseaddr);
  if (!VAR_7)
   FUNC_2(VAR_5, VAR_4);
 }
 return VAR_7;
}
