
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct stat {int st_mode; scalar_t__ st_size; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int,int,int,int ) ;
 int FUNC_4 (char const*,int ) ;
 int VAR_8 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_9, vm_offset_t * VAR_10, vm_size_t * VAR_11)
{
    int VAR_12 = -1;
    int VAR_13;
    struct stat VAR_14;

    *VAR_10 = 0;
    *VAR_11 = 0;

    do {
        if ((VAR_13 = FUNC_4(VAR_9, VAR_3)) == -1) {
            continue;
        }

        if (FUNC_2(VAR_13, &VAR_14) == -1) {
            continue;
        }

        if (0 == (VAR_14.st_mode & VAR_6)) {
            continue;
        }

        if (0 == VAR_14.st_size) {
            VAR_12 = 0;
            continue;
        }

        *VAR_11 = VAR_14.st_size;

        *VAR_10 = (vm_offset_t)FUNC_3(((void*)0) , *VAR_11,
            VAR_4|VAR_5, VAR_1|VAR_2 ,
            VAR_13, 0 );

        if ((void *)*VAR_10 == VAR_0) {
                *VAR_10 = 0;
                *VAR_11 = 0;
            continue;
        }

        VAR_12 = 0;

    } while (0);

    if (-1 != VAR_13) {
        FUNC_0(VAR_13);
    }
    if (VAR_12) {
        FUNC_1(VAR_8, "couldn't read %s: %s\n", VAR_9, FUNC_5(VAR_7));
    }

    return VAR_12;
}
