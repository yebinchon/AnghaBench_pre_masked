
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uptrval ;
typedef int tableType_t ;
struct TYPE_5__ {int internal_donotuse; } ;
typedef TYPE_1__ LZ4_stream_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,char*,int,int,int) ;
 int FUNC_2 (int *,char const*,char*,int,int*,int,int ,int const,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4 (LZ4_stream_t* VAR_8, const char* VAR_9, char* VAR_10, int* VAR_11, int VAR_12)
{
    FUNC_3(VAR_8);

    if (VAR_12 >= FUNC_0(*VAR_11)) {
        return FUNC_1(VAR_8, VAR_9, VAR_10, *VAR_11, VAR_12, 1);
    } else {
        if (*VAR_11 < VAR_0) {
            return FUNC_2(&VAR_8->internal_donotuse, VAR_9, VAR_10, *VAR_11, VAR_11, VAR_12, VAR_5, VAR_3, VAR_6, VAR_7, 1);
        } else {
            tableType_t const VAR_13 = ((sizeof(void*)==4) && ((uptrval)VAR_9 > VAR_1)) ? VAR_2 : VAR_4;
            return FUNC_2(&VAR_8->internal_donotuse, VAR_9, VAR_10, *VAR_11, VAR_11, VAR_12, VAR_5, VAR_13, VAR_6, VAR_7, 1);
    } }
}
