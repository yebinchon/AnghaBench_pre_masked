
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_port {unsigned char flags; void* size; void* align; void* max; void* min; } ;
struct TYPE_2__ {struct pnp_port port; } ;
struct pnp_option {TYPE_1__ u; } ;
struct pnp_dev {int dummy; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pnp_dev*,struct pnp_option*) ;
 struct pnp_option* FUNC_1 (struct pnp_dev*,int ,unsigned int) ;

int FUNC_2(struct pnp_dev *VAR_2, unsigned int VAR_3,
          resource_size_t VAR_4, resource_size_t VAR_5,
          resource_size_t VAR_6, resource_size_t VAR_7,
          unsigned char VAR_8)
{
 struct pnp_option *VAR_9;
 struct pnp_port *VAR_10;

 VAR_9 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = &VAR_9->u.port;
 VAR_10->min = VAR_4;
 VAR_10->max = VAR_5;
 VAR_10->align = VAR_6;
 VAR_10->size = VAR_7;
 VAR_10->flags = VAR_8;

 FUNC_0(VAR_2, VAR_9);
 return 0;
}
