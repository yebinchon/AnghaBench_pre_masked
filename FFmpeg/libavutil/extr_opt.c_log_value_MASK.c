
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 int FUNC_0 (void*,int,char*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_9, int VAR_10, double VAR_11)
{
    if (VAR_11 == VAR_6) {
        FUNC_0(VAR_9, VAR_10, "INT_MAX");
    } else if (VAR_11 == VAR_7) {
        FUNC_0(VAR_9, VAR_10, "INT_MIN");
    } else if (VAR_11 == VAR_8) {
        FUNC_0(VAR_9, VAR_10, "UINT32_MAX");
    } else if (VAR_11 == (double)VAR_4) {
        FUNC_0(VAR_9, VAR_10, "I64_MAX");
    } else if (VAR_11 == VAR_5) {
        FUNC_0(VAR_9, VAR_10, "I64_MIN");
    } else if (VAR_11 == VAR_2) {
        FUNC_0(VAR_9, VAR_10, "FLT_MAX");
    } else if (VAR_11 == VAR_3) {
        FUNC_0(VAR_9, VAR_10, "FLT_MIN");
    } else if (VAR_11 == -VAR_2) {
        FUNC_0(VAR_9, VAR_10, "-FLT_MAX");
    } else if (VAR_11 == -VAR_3) {
        FUNC_0(VAR_9, VAR_10, "-FLT_MIN");
    } else if (VAR_11 == VAR_0) {
        FUNC_0(VAR_9, VAR_10, "DBL_MAX");
    } else if (VAR_11 == VAR_1) {
        FUNC_0(VAR_9, VAR_10, "DBL_MIN");
    } else if (VAR_11 == -VAR_0) {
        FUNC_0(VAR_9, VAR_10, "-DBL_MAX");
    } else if (VAR_11 == -VAR_1) {
        FUNC_0(VAR_9, VAR_10, "-DBL_MIN");
    } else {
        FUNC_0(VAR_9, VAR_10, "%g", VAR_11);
    }
}
