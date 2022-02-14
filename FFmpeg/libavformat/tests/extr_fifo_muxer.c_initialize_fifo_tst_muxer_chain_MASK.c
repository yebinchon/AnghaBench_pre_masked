
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int **,int *,char*,char*) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(AVFormatContext **VAR_3)
{
    int VAR_4 = 0;
    AVStream *VAR_5;

    VAR_4 = FUNC_2(VAR_3, ((void*)0), "fifo", "-");
    if (VAR_4) {
        FUNC_4(VAR_2, "Failed to create format context: %s\n",
                FUNC_1(VAR_4));
        return VAR_1;
    }

    VAR_5 = FUNC_3(*VAR_3, ((void*)0));
    if (!VAR_5) {
        FUNC_4(VAR_2, "Failed to create stream: %s\n",
                FUNC_1(VAR_4));
        VAR_4 = FUNC_0(VAR_0);
    }

    return VAR_4;
}
