
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {size_t characterCount; TYPE_1__* characterList; } ;
struct TYPE_3__ {char const* name; int headImage; void* base; void* imageName; } ;


 char* FUNC_0 (char**,int ) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char**,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static qboolean FUNC_6(char **VAR_4) {
  char *VAR_5;
  const char *VAR_6;

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

      if (!FUNC_4(VAR_4, &VAR_3.characterList[VAR_3.characterCount].name) || !FUNC_4(VAR_4, &VAR_6)) {
        return VAR_1;
      }

      VAR_3.characterList[VAR_3.characterCount].headImage = -1;
   VAR_3.characterList[VAR_3.characterCount].imageName = FUNC_3(FUNC_5("models/players/heads/%s/icon_default.tga", VAR_3.characterList[VAR_3.characterCount].name));

   if (VAR_6 && (!FUNC_2(VAR_6, "female"))) {
        VAR_3.characterList[VAR_3.characterCount].base = FUNC_3(FUNC_5("Janet"));
      } else if (VAR_6 && (!FUNC_2(VAR_6, "male"))) {
        VAR_3.characterList[VAR_3.characterCount].base = FUNC_3(FUNC_5("James"));
   } else {
        VAR_3.characterList[VAR_3.characterCount].base = FUNC_3(FUNC_5("%s",VAR_6));
   }

      FUNC_1("Loaded %s character %s.\n", VAR_3.characterList[VAR_3.characterCount].base, VAR_3.characterList[VAR_3.characterCount].name);
      if (VAR_3.characterCount < VAR_0) {
        VAR_3.characterCount++;
      } else {
        FUNC_1("Too many characters, last character replaced!\n");
      }

      VAR_5 = FUNC_0(VAR_4, VAR_2);
      if (VAR_5[0] != '}') {
        return VAR_1;
      }
    }
  }

  return VAR_1;
}
