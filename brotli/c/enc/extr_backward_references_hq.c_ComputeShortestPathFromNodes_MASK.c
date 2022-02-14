
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ next; } ;
struct TYPE_6__ {int dcode_insert_length; int length; TYPE_1__ u; } ;
typedef TYPE_2__ ZopfliNode ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static size_t FUNC_1(size_t VAR_1,
    ZopfliNode* VAR_2) {
  size_t VAR_3 = VAR_1;
  size_t VAR_4 = 0;
  while ((VAR_2[VAR_3].dcode_insert_length & 0x7FFFFFF) == 0 &&
      VAR_2[VAR_3].length == 1) --VAR_3;
  VAR_2[VAR_3].u.next = VAR_0;
  while (VAR_3 != 0) {
    size_t VAR_5 = FUNC_0(&VAR_2[VAR_3]);
    VAR_3 -= VAR_5;
    VAR_2[VAR_3].u.next = (uint32_t)VAR_5;
    VAR_4++;
  }
  return VAR_4;
}
