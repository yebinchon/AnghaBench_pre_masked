
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash_iterator {int * current_element; scalar_t__ slot_index; struct curl_hash* hash; } ;
struct curl_hash {int dummy; } ;



void FUNC_0(struct curl_hash *VAR_0,
                             struct curl_hash_iterator *VAR_1)
{
  VAR_1->hash = VAR_0;
  VAR_1->slot_index = 0;
  VAR_1->current_element = ((void*)0);
}
