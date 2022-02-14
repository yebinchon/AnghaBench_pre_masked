
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {scalar_t__ data; } ;
struct TYPE_2__ {unsigned int* data; } ;
struct fsf_status_read_buffer {TYPE_1__ payload; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int FUNC_2 (struct zfcp_fsf_req*) ;
 int FUNC_3 (struct zfcp_fsf_req*) ;

void FUNC_4(struct zfcp_fsf_req *VAR_3)
{
 struct fsf_status_read_buffer *VAR_4 =
  (struct fsf_status_read_buffer *) VAR_3->data;
 unsigned int VAR_5 = VAR_4->payload.data[0];

 FUNC_0(VAR_3);
 if (VAR_5 == VAR_1)
  FUNC_2(VAR_3);
 else if (VAR_5 == VAR_0)
  FUNC_1(VAR_3);
 else if (VAR_5 == VAR_2)
  FUNC_3(VAR_3);
}
