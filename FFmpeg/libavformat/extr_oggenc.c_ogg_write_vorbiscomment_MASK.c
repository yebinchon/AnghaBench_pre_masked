
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int AVDictionary ;
typedef int AVChapter ;


 int VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int *,char const*,int **,unsigned int) ;
 int VAR_2 ;
 int FUNC_4 (int **,int **,char const*,int **,unsigned int) ;

__attribute__((used)) static uint8_t *FUNC_5(int64_t VAR_3, int VAR_4,
                                        int *VAR_5, AVDictionary **VAR_6, int VAR_7,
                                        AVChapter **VAR_8, unsigned int VAR_9)
{
    const char *VAR_10 = VAR_4 ? "ffmpeg" : VAR_1;
    int64_t VAR_11;
    uint8_t *VAR_12, *VAR_13;

    FUNC_2(VAR_6, VAR_2, ((void*)0));

    VAR_11 = VAR_3 + FUNC_3(*VAR_6, VAR_10, VAR_8, VAR_9) + VAR_7;
    if (VAR_11 > VAR_0)
        return ((void*)0);
    VAR_12 = FUNC_0(VAR_11);
    if (!VAR_12)
        return ((void*)0);
    VAR_13 = VAR_12;

    VAR_12 += VAR_3;
    FUNC_4(&VAR_12, VAR_6, VAR_10, VAR_8, VAR_9);
    if (VAR_7)
        FUNC_1(&VAR_12, 1);

    *VAR_5 = VAR_11;
    return VAR_13;
}
