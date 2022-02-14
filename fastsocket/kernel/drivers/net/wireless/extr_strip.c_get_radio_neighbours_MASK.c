
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int __u8 ;
struct TYPE_5__ {char* c; } ;
struct TYPE_4__ {scalar_t__ num_nodes; int timestamp; TYPE_2__* node; } ;
typedef TYPE_1__ MetricomNodeTable ;
typedef TYPE_2__ MetricomNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(MetricomNodeTable * VAR_1, __u8 * VAR_2, __u8 * VAR_3)
{
 VAR_1->num_nodes = 0;
 while (VAR_2 < VAR_3 && VAR_1->num_nodes < VAR_0) {
  MetricomNode *VAR_4 = &VAR_1->node[VAR_1->num_nodes++];
  char *VAR_5 = VAR_4->c, *VAR_6 = VAR_5 + sizeof(*VAR_4) - 1;
  while (VAR_2 < VAR_3 && *VAR_2 <= 32)
   VAR_2++;
  while (VAR_2 < VAR_3 && VAR_5 < VAR_6 && *VAR_2 != 10)
   *VAR_5++ = *VAR_2++;
  *VAR_5++ = 0;
  while (VAR_2 < VAR_3 && VAR_2[-1] != 10)
   VAR_2++;
 }
 FUNC_0(&VAR_1->timestamp);
}
