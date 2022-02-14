
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct FTW {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;

int FUNC_4(const char* VAR_2, const struct stat* VAR_3, const int VAR_4, struct FTW* VAR_5) {
    (void) VAR_3;
    (void) VAR_5;

    switch (VAR_4) {
        case 130:
        case 133:
            FUNC_0(VAR_1, "%s: ftw error: %s\n",
                VAR_2, FUNC_3(VAR_0));
            return 1;

        case 134:

            break;

        case 131:
        case 129:
        case 128:
            if (FUNC_1(VAR_2) != 0) {
                FUNC_0(VAR_1, "Failed to remove %s: %s\n", VAR_2, FUNC_3(VAR_0));
                return 0;
            }
            break;


        case 132:
            if (FUNC_2(VAR_2) != 0) {
                FUNC_0(VAR_1, "Failed to remove directory %s: %s\n", VAR_2, FUNC_3(VAR_0));
                return 0;
            }
            break;

        default:
            FUNC_0(VAR_1, "Unexpected fts_info\n");
            return 1;
    }

    return 0;
}
