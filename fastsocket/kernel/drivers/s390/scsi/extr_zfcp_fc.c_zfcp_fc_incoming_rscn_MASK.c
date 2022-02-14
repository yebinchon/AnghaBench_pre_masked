
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct zfcp_fsf_req {int adapter; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct fsf_status_read_buffer {TYPE_1__ payload; } ;
struct fcp_rscn_head {int payload_len; } ;
struct fcp_rscn_element {size_t addr_format; } ;


 int VAR_0 ;
 int FUNC_0 (struct zfcp_fsf_req*,int ,struct fcp_rscn_element*) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct zfcp_fsf_req *VAR_2)
{
 struct fsf_status_read_buffer *VAR_3 = (void *)VAR_2->data;
 struct fcp_rscn_head *VAR_4;
 struct fcp_rscn_element *VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u32 VAR_8;

 VAR_4 = (struct fcp_rscn_head *) VAR_3->payload.data;
 VAR_5 = (struct fcp_rscn_element *) VAR_4;


 VAR_7 = VAR_4->payload_len /
   sizeof(struct fcp_rscn_element);

 for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {

  VAR_5++;
  VAR_8 = VAR_1[VAR_5->addr_format];
  FUNC_0(VAR_2, VAR_8, VAR_5);
  FUNC_2(VAR_2->adapter, VAR_0,
          *(u32 *)VAR_5);
 }
 FUNC_1(VAR_2->adapter);
}
