
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int OSKextVersion ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char const*) ;

Boolean FUNC_6(
    OSKextVersion VAR_10,
    char * VAR_11,
    uint32_t VAR_12)
{
    int VAR_13 = 0;
    OSKextVersion VAR_14 = 0;
    OSKextVersion VAR_15 = 0;
    OSKextVersion VAR_16 = 0;
    OSKextVersion VAR_17 = 0;
    OSKextVersion VAR_18 = 0;
    const char * VAR_19 = ((void*)0);




    if (!VAR_11 || VAR_12 < VAR_8) {
        return VAR_0;
    }

    FUNC_1(VAR_11, VAR_12 * sizeof(char));

    if (VAR_10 < 0) {
        FUNC_4(VAR_11, "(invalid)", VAR_12);
        return VAR_1;
    }
    if (VAR_10 == 0) {
        FUNC_4(VAR_11, "(missing)", VAR_12);
        return VAR_1;
    }

    VAR_14 = VAR_10 / VAR_3;
    if (VAR_14 > VAR_2) {
        FUNC_4(VAR_11, "(invalid)", VAR_12);
        return VAR_1;
    }

    VAR_15 = VAR_10 - (VAR_14 * VAR_3);
    VAR_15 /= VAR_4;

    VAR_16 = VAR_10 -
        ( (VAR_14 * VAR_3) + (VAR_15 * VAR_4) );
    VAR_16 /= VAR_5;

    VAR_17 = VAR_10 -
        ( (VAR_14 * VAR_3) + (VAR_15 * VAR_4) +
          (VAR_16 * VAR_5));
    VAR_17 /= VAR_7;

    VAR_18 = VAR_10 -
        ( (VAR_14 * VAR_3) + (VAR_15 * VAR_4) +
          (VAR_16 * VAR_5) + (VAR_17 * VAR_7));
    if (VAR_18 > VAR_6) {
        FUNC_4(VAR_11, "(invalid)", VAR_12);
        return VAR_1;
    }

    VAR_13 = FUNC_2(VAR_11, VAR_12, "%u", (uint32_t)VAR_14);



    VAR_11[VAR_13] = '.';
    VAR_13++;
    VAR_13 += FUNC_2(VAR_11+VAR_13, VAR_12 - VAR_13, "%u", (uint32_t)VAR_15);



    if (VAR_16) {
        VAR_11[VAR_13] = '.';
        VAR_13++;
        VAR_13 += FUNC_2(VAR_11+VAR_13, VAR_12 - VAR_13, "%u",
   (uint32_t)VAR_16);
    }

    VAR_19 = FUNC_0(VAR_17);
    if (!VAR_19) {
        FUNC_4(VAR_11, "(invalid)", VAR_12);
        return VAR_1;
    }
    if (VAR_19[0]) {
        FUNC_3(VAR_11, VAR_19, VAR_12);
        VAR_13 += FUNC_5(VAR_19);
    }

    if (VAR_17 < VAR_9) {
        FUNC_2(VAR_11+VAR_13, VAR_12 - VAR_13, "%u", (uint32_t)VAR_18);
    }

    return VAR_1;
}
