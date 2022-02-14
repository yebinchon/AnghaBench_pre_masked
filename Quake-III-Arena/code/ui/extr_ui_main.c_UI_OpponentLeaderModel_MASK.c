
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int characterCount; TYPE_1__* characterList; } ;
struct TYPE_3__ {char const* base; int name; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 char* FUNC_1 () ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static const char *FUNC_2() {
 int VAR_1;
 const char *VAR_2 = FUNC_1();
 for (VAR_1 = 0; VAR_1 < VAR_0.characterCount; VAR_1++) {
  if (FUNC_0(VAR_2, VAR_0.characterList[VAR_1].name) == 0) {
   return VAR_0.characterList[VAR_1].base;
  }
 }
 return "James";
}
