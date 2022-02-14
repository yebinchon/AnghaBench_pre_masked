
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int dummy; } ;
struct rdma_bind_list {unsigned short port; struct idr* ps; } ;
struct idr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rdma_bind_list*,struct rdma_id_private*) ;
 int FUNC_1 (struct idr*,struct rdma_bind_list*,unsigned short,int*) ;
 scalar_t__ FUNC_2 (struct idr*,int ) ;
 int FUNC_3 (struct idr*,int) ;
 int FUNC_4 (struct rdma_bind_list*) ;
 struct rdma_bind_list* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct idr *VAR_4, struct rdma_id_private *VAR_5,
     unsigned short VAR_6)
{
 struct rdma_bind_list *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_5(sizeof *VAR_7, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 do {
  VAR_9 = FUNC_1(VAR_4, VAR_7, VAR_6, &VAR_8);
 } while ((VAR_9 == -VAR_1) && FUNC_2(VAR_4, VAR_3));

 if (VAR_9)
  goto err1;

 if (VAR_8 != VAR_6) {
  VAR_9 = -VAR_0;
  goto err2;
 }

 VAR_7->ps = VAR_4;
 VAR_7->port = (unsigned short) VAR_8;
 FUNC_0(VAR_7, VAR_5);
 return 0;
err2:
 FUNC_3(VAR_4, VAR_8);
err1:
 FUNC_4(VAR_7);
 return VAR_9;
}
