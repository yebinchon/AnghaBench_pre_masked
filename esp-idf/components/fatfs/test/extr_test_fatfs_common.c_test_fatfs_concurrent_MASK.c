
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int write; int done; int result; } ;
typedef TYPE_1__ read_write_test_arg_t ;
typedef int names ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,char*,char const*,size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,char*,int const,TYPE_1__*,int,int *,int const) ;

void FUNC_8(const char* VAR_4)
{
    char VAR_5[4][64];
    for (size_t VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
        FUNC_3(VAR_5[VAR_6], sizeof(VAR_5[VAR_6]), "%s%d", VAR_4, VAR_6 + 1);
        FUNC_4(VAR_5[VAR_6]);
    }

    read_write_test_arg_t VAR_7 = FUNC_0(VAR_5[0], 1);
    read_write_test_arg_t VAR_8 = FUNC_0(VAR_5[1], 2);

    FUNC_2("writing f1 and f2\n");

    const int VAR_9 = 0;
    const int VAR_10 = VAR_2 - 1;
    const int VAR_11 = 4096;
    FUNC_7(&VAR_3, "rw1", VAR_11, &VAR_7, 3, ((void*)0), VAR_9);
    FUNC_7(&VAR_3, "rw2", VAR_11, &VAR_8, 3, ((void*)0), VAR_10);

    FUNC_6(VAR_7, VAR_1);
    FUNC_2("f1 done\n");
    FUNC_1(VAR_0, VAR_7);
    FUNC_6(VAR_8, VAR_1);
    FUNC_2("f2 done\n");
    FUNC_1(VAR_0, VAR_8);

    VAR_7 = 0;
    VAR_8 = 0;
    read_write_test_arg_t VAR_12 = FUNC_0(VAR_5[2], 3);
    read_write_test_arg_t VAR_13 = FUNC_0(VAR_5[3], 4);

    FUNC_2("reading f1 and f2, writing f3 and f4\n");

    FUNC_7(&VAR_3, "rw3", VAR_11, &VAR_12, 3, ((void*)0), VAR_10);
    FUNC_7(&VAR_3, "rw4", VAR_11, &VAR_13, 3, ((void*)0), VAR_9);
    FUNC_7(&VAR_3, "rw1", VAR_11, &VAR_7, 3, ((void*)0), VAR_9);
    FUNC_7(&VAR_3, "rw2", VAR_11, &VAR_8, 3, ((void*)0), VAR_10);

    FUNC_6(VAR_7, VAR_1);
    FUNC_2("f1 done\n");
    FUNC_1(VAR_0, VAR_7);
    FUNC_6(VAR_8, VAR_1);
    FUNC_2("f2 done\n");
    FUNC_1(VAR_0, VAR_8);
    FUNC_6(VAR_12, VAR_1);
    FUNC_2("f3 done\n");
    FUNC_1(VAR_0, VAR_12);
    FUNC_6(VAR_13, VAR_1);
    FUNC_2("f4 done\n");
    FUNC_1(VAR_0, VAR_13);

    FUNC_5(VAR_7);
    FUNC_5(VAR_8);
    FUNC_5(VAR_12);
    FUNC_5(VAR_13);
}
