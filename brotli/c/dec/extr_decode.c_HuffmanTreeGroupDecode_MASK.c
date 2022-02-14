
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ substate_tree_group; size_t htree_index; int next; } ;
struct TYPE_8__ {TYPE_3__ header; } ;
struct TYPE_11__ {TYPE_1__ arena; } ;
struct TYPE_9__ {size_t num_htrees; int * htrees; int alphabet_size_limit; int alphabet_size_max; int codes; } ;
typedef TYPE_2__ HuffmanTreeGroup ;
typedef TYPE_3__ BrotliMetablockHeaderArena ;
typedef TYPE_4__ BrotliDecoderState ;
typedef scalar_t__ BrotliDecoderErrorCode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__*,TYPE_4__*) ;

__attribute__((used)) static BrotliDecoderErrorCode FUNC_1(
    HuffmanTreeGroup* VAR_3, BrotliDecoderState* VAR_4) {
  BrotliMetablockHeaderArena* VAR_5 = &VAR_4->arena.header;
  if (VAR_5->substate_tree_group != VAR_1) {
    VAR_5->next = VAR_3->codes;
    VAR_5->htree_index = 0;
    VAR_5->substate_tree_group = VAR_1;
  }
  while (VAR_5->htree_index < VAR_3->num_htrees) {
    uint32_t VAR_6;
    BrotliDecoderErrorCode VAR_7 = FUNC_0(VAR_3->alphabet_size_max,
        VAR_3->alphabet_size_limit, VAR_5->next, &VAR_6, VAR_4);
    if (VAR_7 != VAR_0) return VAR_7;
    VAR_3->htrees[VAR_5->htree_index] = VAR_5->next;
    VAR_5->next += VAR_6;
    ++VAR_5->htree_index;
  }
  VAR_5->substate_tree_group = VAR_2;
  return VAR_0;
}
