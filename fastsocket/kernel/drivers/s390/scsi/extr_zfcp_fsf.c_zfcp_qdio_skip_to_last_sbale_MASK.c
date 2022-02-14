
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_queue_req {scalar_t__ sbale_curr; } ;
struct zfcp_qdio {scalar_t__ max_sbale_per_sbal; } ;



__attribute__((used)) static inline
void FUNC_0(struct zfcp_qdio *VAR_0,
      struct zfcp_queue_req *VAR_1)
{
 VAR_1->sbale_curr = VAR_0->max_sbale_per_sbal - 1;
}
