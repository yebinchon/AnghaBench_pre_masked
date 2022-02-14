
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ipw_tty {int dummy; } ;
struct ipw_network {int dummy; } ;
struct ipw_hardware {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ dev_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,struct ipw_hardware*,struct ipw_network*,int,int,int ) ;
 struct ipw_tty** VAR_7 ;

struct ipw_tty *FUNC_1(struct ipw_hardware *VAR_8,
          struct ipw_network *VAR_9,
          dev_node_t *VAR_10)
{
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  int VAR_13 = 1;

  for (VAR_12 = VAR_11; VAR_12 < VAR_0;
    VAR_12 += VAR_1)
   if (VAR_7[VAR_12] != ((void*)0)) {
    VAR_13 = 0;
    break;
   }

  if (VAR_13) {
   VAR_12 = VAR_11;

   if (FUNC_0(&VAR_10[0], VAR_12, VAR_8, VAR_9,
     VAR_2, VAR_3,
     VAR_4))
    return ((void*)0);

   VAR_12 += VAR_1;
   if (FUNC_0(&VAR_10[1], VAR_12, VAR_8, VAR_9,
     VAR_2, -1,
     VAR_5))
    return ((void*)0);

   VAR_12 += VAR_1;
   if (FUNC_0(((void*)0), VAR_12, VAR_8, VAR_9,
     VAR_3, -1,
     VAR_6))
    return ((void*)0);

   VAR_10[0].next = &VAR_10[1];
   VAR_10[1].next = ((void*)0);

   return VAR_7[VAR_11];
  }
 }
 return ((void*)0);
}
