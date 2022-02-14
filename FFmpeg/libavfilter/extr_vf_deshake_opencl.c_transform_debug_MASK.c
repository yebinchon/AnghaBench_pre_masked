
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;


 int VAR_0 ;
 double VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *,int ,char*,int,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_7, float *VAR_8, float *VAR_9, int VAR_10) {
    FUNC_0(VAR_7, VAR_0,
        "Frame %d:\n"
        "\tframe moved from: %f x, %f y\n"
        "\t              to: %f x, %f y\n"
        "\t    rotated from: %f degrees\n"
        "\t              to: %f degrees\n"
        "\t     scaled from: %f x, %f y\n"
        "\t              to: %f x, %f y\n"
        "\n"
        "\tframe moved by: %f x, %f y\n"
        "\t    rotated by: %f degrees\n"
        "\t     scaled by: %f x, %f y\n",
        VAR_10,
        VAR_9[VAR_5], VAR_9[VAR_6],
        VAR_8[VAR_5], VAR_8[VAR_6],
        VAR_9[VAR_2] * (180.0 / VAR_1),
        VAR_8[VAR_2] * (180.0 / VAR_1),
        VAR_9[VAR_3], VAR_9[VAR_4],
        VAR_8[VAR_3], VAR_8[VAR_4],
        VAR_9[VAR_5] - VAR_8[VAR_5], VAR_9[VAR_6] - VAR_8[VAR_6],
        VAR_9[VAR_2] * (180.0 / VAR_1) - VAR_8[VAR_2] * (180.0 / VAR_1),
        VAR_8[VAR_3] / VAR_9[VAR_3], VAR_8[VAR_4] / VAR_9[VAR_4]
    );
}
