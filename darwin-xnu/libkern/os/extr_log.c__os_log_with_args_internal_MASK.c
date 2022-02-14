
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int uint32_t ;
typedef int os_log_type_t ;
typedef int * os_log_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char const*,int ,void*,void*) ;
 int FUNC_1 (char const*,int ,int,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(os_log_t VAR_4, os_log_type_t VAR_5,
  const char *VAR_6, va_list VAR_7, void *VAR_8, void *VAR_9)
{
    uint32_t VAR_10 = FUNC_2();
    boolean_t VAR_11;
    boolean_t VAR_12;

    if (VAR_6[0] == '\0') {
        return;
    }


    VAR_11 = (!VAR_3 || FUNC_3());

 if (VAR_10 & VAR_0 || VAR_10 & VAR_1) {
  VAR_12 = 0;
 } else {
  VAR_12 = 1;
 }

    if (VAR_4 != &VAR_2) {
        FUNC_1(VAR_6, VAR_7, VAR_11, VAR_12);
    }

    if (VAR_11 && VAR_12) {
        FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    }
}
