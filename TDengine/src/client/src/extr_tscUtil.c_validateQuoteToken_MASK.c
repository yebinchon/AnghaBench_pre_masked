
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ n; scalar_t__ type; int z; } ;
typedef TYPE_1__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int32_t FUNC_5(SSQLToken* VAR_4) {
  VAR_4->n = FUNC_0(VAR_4->z);
  FUNC_2(VAR_4->z);
  VAR_4->n = (uint32_t)FUNC_1(VAR_4->z);

  int32_t VAR_5 = FUNC_3(VAR_4->z, &VAR_4->type);

  if (VAR_4->type == VAR_1) {
    return FUNC_4(VAR_4);
  }

  if (VAR_5 != VAR_4->n || VAR_4->type != VAR_0) {
    return VAR_2;
  }
  return VAR_3;
}
