
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_list {int dummy; } ;
struct TYPE_2__ {struct buffer_list* next; } ;
struct buffer {TYPE_1__ first; } ;


 int FUNC_0 (struct buffer_list*) ;
 int FUNC_1 (struct buffer*) ;

__attribute__((used)) static void
FUNC_2(struct buffer *VAR_0)
{
   struct buffer_list *VAR_1 = VAR_0->first.next;
   FUNC_1(VAR_0);
   FUNC_0(VAR_1);
}
