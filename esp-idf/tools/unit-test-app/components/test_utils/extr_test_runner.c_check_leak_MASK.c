
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char*,size_t,size_t,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_3(size_t VAR_3, size_t VAR_4, const char *VAR_5)
{
    if (VAR_3 <= VAR_4) {
        return;
    }
    size_t VAR_6 = VAR_3 - VAR_4;
    if (VAR_6 <= VAR_2) {
        return;
    }

    FUNC_2("MALLOC_CAP_%s %s leak: Before %u bytes free, After %u bytes free (delta %u)\n",
           VAR_5,
           VAR_6 <= VAR_0 ? "potential" : "critical",
           VAR_3, VAR_4, VAR_6);
    FUNC_1(VAR_1);
    FUNC_0(VAR_6 <= VAR_0, "The test leaked too much memory");
}
