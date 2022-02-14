
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct flow_divert_trie {scalar_t__ child_maps_free_next; scalar_t__ child_maps_count; } ;


 int VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_0(struct flow_divert_trie *VAR_1)
{
 if (VAR_1->child_maps_free_next < VAR_1->child_maps_count) {
  return VAR_1->child_maps_free_next++;
 } else {
  return VAR_0;
 }
}
