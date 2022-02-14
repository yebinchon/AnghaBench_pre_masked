
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int * FUNC_6 (char const*,int *) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int *,scalar_t__) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_11(const char *VAR_6)
{
  bfd *VAR_7;

  VAR_4 = 0;

  VAR_7 = FUNC_6(VAR_6, ((void*)0));
  if (VAR_7 == ((void*)0)) {
    FUNC_7(VAR_2, "failed to open: %s\n", VAR_6);
    goto no_symbols;
  }

  if (!FUNC_1(VAR_7, VAR_1))
    goto no_symbols;

  if (!(FUNC_3(VAR_7) & VAR_0))
    goto no_symbols;

  VAR_5 = FUNC_5(VAR_7);
  if (VAR_5 <= 0)
    goto no_symbols;

  VAR_3 = FUNC_9(VAR_5);
  if (VAR_3 == ((void*)0))
    goto no_symbols;

  VAR_4 = FUNC_0(VAR_7, VAR_3);
  if (VAR_4 < 0)
    goto no_symbols;

  VAR_4 = FUNC_10(VAR_3, VAR_4);

  return;

no_symbols:
  FUNC_7(VAR_2, "no symbols in %s\n", FUNC_4(VAR_7));
  if (VAR_3 != ((void*)0))
    FUNC_8(VAR_3);
  VAR_3 = ((void*)0);
  if (VAR_7 != ((void*)0))
    FUNC_2(VAR_7);
}
