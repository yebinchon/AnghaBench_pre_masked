
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_context {int cm_id; } ;
struct rdma_cm_event {int event; } ;
struct ib_sa_path_rec {int dummy; } ;
struct ib_path_rec_data {int flags; int path_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ib_sa_path_rec*) ;
 int FUNC_1 (struct rdma_cm_event*,int ,int) ;
 int FUNC_2 (int ,struct ib_sa_path_rec*,int) ;
 int FUNC_3 (int ,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_4(struct ucma_context *VAR_5,
       struct ib_path_rec_data *VAR_6, size_t VAR_7)
{
 struct ib_sa_path_rec VAR_8;
 struct rdma_cm_event VAR_9;
 int VAR_10;

 if (VAR_7 % sizeof(*VAR_6))
  return -VAR_0;

 for (; VAR_7; VAR_7 -= sizeof(*VAR_6), VAR_6++) {
  if (VAR_6->flags == (VAR_2 | VAR_3 |
      VAR_1))
   break;
 }

 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_6->path_rec, &VAR_8);
 VAR_10 = FUNC_2(VAR_5->cm_id, &VAR_8, 1);
 if (VAR_10)
  return VAR_10;

 FUNC_1(&VAR_9, 0, sizeof VAR_9);
 VAR_9.event = VAR_4;
 return FUNC_3(VAR_5->cm_id, &VAR_9);
}
