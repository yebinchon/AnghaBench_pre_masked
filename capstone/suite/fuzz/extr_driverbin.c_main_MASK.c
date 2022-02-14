
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dirent {scalar_t__ d_type; int d_name; } ;
typedef int FILE ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,size_t,int,int *) ;
 scalar_t__ FUNC_6 (int *,long,int ) ;
 size_t FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 struct dirent* FUNC_10 (int *) ;

int FUNC_11(int VAR_3, char** VAR_4)
{
    FILE * VAR_5;
    uint8_t VAR_6[0x1000];
    size_t VAR_7;
    DIR *VAR_8;
    struct dirent *VAR_9;
    int VAR_10 = 0;

    if (VAR_3 != 2) {
        return 1;
    }

    VAR_8 = FUNC_8(VAR_4[1]);
    if (VAR_8 == ((void*)0)) {
        FUNC_9("Invalid directory\n");
        return 2;
    }
    if (FUNC_1(VAR_4[1]) != 0) {
        FUNC_2(VAR_8);
        FUNC_9("Invalid directory\n");
        return 2;
    }

    while((VAR_9 = FUNC_10(VAR_8)) != ((void*)0)) {

        if (VAR_9->d_type != VAR_0) {
            continue;
        }

        VAR_5 = FUNC_4(VAR_9->d_name, "rb");
        if (VAR_5 == ((void*)0)) {
            VAR_10 = 3;
            break;
        }
        if (FUNC_6(VAR_5, 0L, VAR_1) != 0) {
            FUNC_3(VAR_5);
            VAR_10 = 4;
            break;
        }
        VAR_7 = FUNC_7(VAR_5);
        if (VAR_7 == (size_t) -1) {
            FUNC_3(VAR_5);
            VAR_10 = 5;
            break;
        } else if (VAR_7 > 0x1000) {
            FUNC_3(VAR_5);
            continue;
        }
        if (FUNC_6(VAR_5, 0L, VAR_2) != 0) {
            FUNC_3(VAR_5);
            VAR_10 = 7;
            break;
        }
        if (FUNC_5(VAR_6, VAR_7, 1, VAR_5) != 1) {
            FUNC_3(VAR_5);
            VAR_10 = 8;
            break;
        }


        FUNC_0(VAR_6, VAR_7);
        FUNC_3(VAR_5);
    }
    FUNC_2(VAR_8);
    return VAR_10;
}
