
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {size_t aliasCount; TYPE_1__* aliasList; } ;
struct TYPE_3__ {int ai; int name; int action; } ;


 char* FUNC_0 (char**,int ) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_4(char **VAR_4) {
  char *VAR_5;

  VAR_5 = FUNC_0(VAR_4, VAR_2);

  if (VAR_5[0] != '{') {
    return VAR_1;
  }

  while ( 1 ) {
    VAR_5 = FUNC_0(VAR_4, VAR_2);

    if (FUNC_2(VAR_5, "}") == 0) {
      return VAR_2;
    }

    if ( !VAR_5 || VAR_5[0] == 0 ) {
      return VAR_1;
    }

    if (VAR_5[0] == '{') {

      if (!FUNC_3(VAR_4, &VAR_3.aliasList[VAR_3.aliasCount].name) || !FUNC_3(VAR_4, &VAR_3.aliasList[VAR_3.aliasCount].ai) || !FUNC_3(VAR_4, &VAR_3.aliasList[VAR_3.aliasCount].action)) {
        return VAR_1;
      }

      FUNC_1("Loaded character alias %s using character ai %s.\n", VAR_3.aliasList[VAR_3.aliasCount].name, VAR_3.aliasList[VAR_3.aliasCount].ai);
      if (VAR_3.aliasCount < VAR_0) {
        VAR_3.aliasCount++;
      } else {
        FUNC_1("Too many aliases, last alias replaced!\n");
      }

      VAR_5 = FUNC_0(VAR_4, VAR_2);
      if (VAR_5[0] != '}') {
        return VAR_1;
      }
    }
  }

  return VAR_1;
}
