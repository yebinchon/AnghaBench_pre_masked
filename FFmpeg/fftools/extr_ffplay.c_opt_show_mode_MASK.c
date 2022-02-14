
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char const*,int ,int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_6, const char *VAR_7, const char *VAR_8)
{
    VAR_5 = !FUNC_1(VAR_8, "video") ? VAR_3 :
                !FUNC_1(VAR_8, "waves") ? VAR_4 :
                !FUNC_1(VAR_8, "rdft" ) ? VAR_2 :
                FUNC_0(VAR_7, VAR_8, VAR_0, 0, VAR_1-1);
    return 0;
}
