
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_endpoint {scalar_t__ service_id; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct htc_endpoint *FUNC_0(struct htc_endpoint *VAR_2)
{
 enum htc_endpoint_id VAR_3;

 for (VAR_3 = (VAR_1 - 1); VAR_3 > VAR_0; VAR_3--)
  if (VAR_2[VAR_3].service_id == 0)
   return &VAR_2[VAR_3];
 return ((void*)0);
}
