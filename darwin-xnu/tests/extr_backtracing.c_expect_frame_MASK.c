
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CSSymbolRef ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,char const*,char*,unsigned int,char const*,char const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(const char **VAR_1, unsigned int VAR_2, CSSymbolRef VAR_3,
    unsigned long VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
    const char *VAR_7;
    unsigned int VAR_8 = VAR_6 - VAR_5 - 1;

    if (VAR_1[VAR_8] == ((void*)0)) {
        FUNC_5("frame %2u: skipping system frame", VAR_8);
        return;
    }

    if (FUNC_0(VAR_3)) {
        FUNC_4("invalid symbol for address %#lx at frame %d", VAR_4, VAR_8);
        return;
    }

    if (VAR_8 >= VAR_2) {
        FUNC_4("unexpected frame '%s' (%#lx) at index %u",
            FUNC_1(VAR_3), VAR_4, VAR_8);
        return;
    }

    VAR_7 = FUNC_1(VAR_3);
    VAR_0; FUNC_2(VAR_7, ((void*)0));
    FUNC_3(VAR_7, VAR_1[VAR_8],
        "frame %2u: saw '%s', expected '%s'",
        VAR_8, VAR_7, VAR_1[VAR_8]);
}
