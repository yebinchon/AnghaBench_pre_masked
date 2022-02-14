
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rompath ;
typedef int of ;
struct TYPE_4__ {int lStructSize; char* lpstrFilter; char* lpstrFile; int nMaxFile; int Flags; int hwndOwner; } ;
typedef TYPE_1__ OPENFILENAME ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,int ,int) ;

__attribute__((used)) static void FUNC_10(const char *VAR_10)
{
  char VAR_11[VAR_1];
  int VAR_12;

  if (VAR_10 != ((void*)0) && FUNC_8(VAR_10)) {
    FUNC_7(VAR_11, VAR_10 + (VAR_10[0] == '\"' ? 1 : 0));
    if (VAR_11[FUNC_8(VAR_11)-1] == '\"')
      VAR_11[FUNC_8(VAR_11)-1] = 0;
  }
  else {
    OPENFILENAME VAR_13; FUNC_4(&VAR_13, sizeof(VAR_13));
    VAR_11[sizeof(VAR_11) - 1] = 0;
    FUNC_9(VAR_11, VAR_9, sizeof(VAR_11) - 1);
    VAR_13.lStructSize = sizeof(VAR_13);
    VAR_13.lpstrFilter = "ROMs, CD images\0*.smd;*.bin;*.gen;*.zip;*.32x;*.sms;*.iso;*.cso;*.cue\0"
                     "whatever\0*.*\0";
    VAR_13.lpstrFile = VAR_11;
    VAR_13.nMaxFile = VAR_1;
    VAR_13.Flags = VAR_2|VAR_3;
    VAR_13.hwndOwner = VAR_0;
    if (!FUNC_0(&VAR_13))
      return;
  }

  if (VAR_6 == VAR_5) {
    VAR_6 = VAR_4;
    FUNC_3(VAR_7, 5000);
  }

  VAR_12 = FUNC_5(VAR_11);
  if (VAR_12 == 0) {
    extern char VAR_14[];
    FUNC_6(VAR_14);
    return;
  }

  FUNC_1();
  VAR_6 = VAR_5;
  FUNC_2(VAR_8);
}
