
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*,int,char const*,char*) ;

__attribute__((used)) static inline bool FUNC_2(kern_return_t VAR_1, const char *VAR_2, const char* VAR_3, int VAR_4) {
    if ( VAR_1 != VAR_0 ) {
        FUNC_1("%s:%d: %s: %s\n", VAR_3, VAR_4, VAR_2, FUNC_0(VAR_1));
        return 0;
    }
    return 1;
}
