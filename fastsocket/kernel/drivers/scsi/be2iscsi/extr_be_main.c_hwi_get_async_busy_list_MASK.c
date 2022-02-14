
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct hwi_async_pdu_context {TYPE_1__* async_entry; } ;
struct TYPE_2__ {struct list_head data_busy_list; struct list_head header_busy_list; } ;



__attribute__((used)) static struct list_head *FUNC_0(struct hwi_async_pdu_context
       *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 if (VAR_1)
  return &VAR_0->async_entry[VAR_2].
      header_busy_list;
 else
  return &VAR_0->async_entry[VAR_2].data_busy_list;
}
