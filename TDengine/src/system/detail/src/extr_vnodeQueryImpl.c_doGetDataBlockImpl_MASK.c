
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {char** offset; } ;
struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ SData ;
typedef TYPE_2__ SCacheBlock ;



__attribute__((used)) static char *FUNC_0(const char *VAR_0, int32_t VAR_1, bool VAR_2) {
  if (VAR_2) {
    return ((SData **)VAR_0)[VAR_1]->data;
  } else {
    return ((SCacheBlock *)VAR_0)->offset[VAR_1];
  }
}
