
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct request {int nr_phys_segments; int q; } ;
struct fc_bsg_buffer {int payload_len; int sg_list; int sg_cnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,struct request*,int ) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct fc_bsg_buffer *VAR_2, struct request *VAR_3)
{
 size_t VAR_4 = (sizeof(struct scatterlist) * VAR_3->nr_phys_segments);

 FUNC_0(!VAR_3->nr_phys_segments);

 VAR_2->sg_list = FUNC_3(VAR_4, VAR_1);
 if (!VAR_2->sg_list)
  return -VAR_0;
 FUNC_4(VAR_2->sg_list, VAR_3->nr_phys_segments);
 VAR_2->sg_cnt = FUNC_2(VAR_3->q, VAR_3, VAR_2->sg_list);
 VAR_2->payload_len = FUNC_1(VAR_3);
 return 0;
}
