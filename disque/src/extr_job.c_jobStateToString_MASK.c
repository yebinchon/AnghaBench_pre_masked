
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

char *FUNC_0(int VAR_1) {
    char *VAR_2[] = {"wait-repl","active","queued","acked"};
    if (VAR_1 < 0 || VAR_1 > VAR_0) return "unknown";
    return VAR_2[VAR_1];
}
