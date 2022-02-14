
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TocEntry {int dummy; } ;
typedef enum CDVD_getMode { ____Placeholder_CDVD_getMode } CDVD_getMode ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,void*,int,void*,int,int ,int ) ;
 int FUNC_1 (struct TocEntry*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_2 (char*,char const*,int) ;

int FUNC_3(const char *VAR_4, const char *VAR_5, enum CDVD_getMode VAR_6, struct TocEntry VAR_7[], unsigned int VAR_8, char *VAR_9)
{
    unsigned int VAR_10;

    if (!VAR_2)
        return -1;


    FUNC_2((char *)VAR_3, VAR_4, 1023);


    if (VAR_5 == ((void*)0)) {

        VAR_3[1024 / 4] = 0;
    } else {
        FUNC_2((char *)&VAR_3[1024 / 4], VAR_5, 127);
    }

    VAR_3[1152 / 4] = VAR_6;

    VAR_3[1156 / 4] = (int)VAR_7;

    VAR_3[1160 / 4] = VAR_8;

    FUNC_1(VAR_7, VAR_8 * sizeof(struct TocEntry));


    FUNC_0(&VAR_1, VAR_0, 0, (void *)(&VAR_3[0]), 1024 + 128 + 4 + 4 + 4, (void *)(&VAR_3[0]), 4 + 1024, 0, 0);

    VAR_10 = VAR_3[0];

    if (VAR_9 != ((void*)0))
        FUNC_2(VAR_9, (char *)&VAR_3[1], 1023);

    return (VAR_10);
}
