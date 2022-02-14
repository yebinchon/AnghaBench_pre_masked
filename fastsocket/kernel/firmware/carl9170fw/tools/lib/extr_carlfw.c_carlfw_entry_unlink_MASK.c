
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;
struct TYPE_3__ {int length; } ;
struct carlfw_list_entry {TYPE_2__ h; TYPE_1__ head; } ;
struct carlfw {int desc_list_len; int desc_list_entries; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct carlfw *VAR_0,
 struct carlfw_list_entry *VAR_1)
{
 VAR_0->desc_list_entries--;
 VAR_0->desc_list_len -= FUNC_0(VAR_1->head.length);
 FUNC_1(&VAR_1->h.list);
}
