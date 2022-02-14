
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int b ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ segment_type; } ;
typedef TYPE_1__ HLSContext ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tm* FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,struct tm*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static const char * FUNC_4(AVFormatContext *VAR_2)
{
    char VAR_3[21];
    time_t VAR_4 = FUNC_3(((void*)0));
    struct tm *VAR_5, VAR_6;
    HLSContext *VAR_7 = VAR_2->priv_data;

    VAR_5 = FUNC_0(&VAR_4, &VAR_6);


    if (VAR_7->segment_type == VAR_1) {
        return (VAR_0 || !FUNC_2(VAR_3, sizeof(VAR_3), "%s", VAR_5) || !FUNC_1(VAR_3, "%s")) ? "-%Y%m%d%H%M%S.m4s" : "-%s.m4s";
    }
    return (VAR_0 || !FUNC_2(VAR_3, sizeof(VAR_3), "%s", VAR_5) || !FUNC_1(VAR_3, "%s")) ? "-%Y%m%d%H%M%S.ts" : "-%s.ts";
}
