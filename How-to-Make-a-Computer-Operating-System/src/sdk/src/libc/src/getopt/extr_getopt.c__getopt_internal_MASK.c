
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct option {int dummy; } ;
struct TYPE_3__ {int optopt; int optarg; int optind; int opterr; } ;


 int FUNC_0 (int,char* const*,char const*,struct option const*,int*,int,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1 ( int VAR_5, char *const *VAR_6, const char *VAR_7,
          const struct option *VAR_8, int *VAR_9, int VAR_10 ) {
    int VAR_11;

    VAR_0.optind = VAR_3;
    VAR_0.opterr = VAR_2;

    VAR_11 = FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_8,
                VAR_9, VAR_10, &VAR_0);

    VAR_3 = VAR_0.optind;
    VAR_1 = VAR_0.optarg;
    VAR_4 = VAR_0.optopt;

    return VAR_11;
}
