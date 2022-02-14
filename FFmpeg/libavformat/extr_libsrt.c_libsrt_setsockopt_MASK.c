
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int URLContext ;
typedef int SRT_SOCKOPT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,char const*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int ,int ,void const*,int) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_2, int VAR_3, SRT_SOCKOPT VAR_4, const char * VAR_5, const void * VAR_6, int VAR_7)
{
    if (FUNC_3(VAR_3, 0, VAR_4, VAR_6, VAR_7) < 0) {
        FUNC_1(VAR_2, VAR_0, "failed to set option %s on socket: %s\n", VAR_5, FUNC_2());
        return FUNC_0(VAR_1);
    }
    return 0;
}
