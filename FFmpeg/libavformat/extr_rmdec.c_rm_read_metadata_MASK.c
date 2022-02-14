
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;
 int FUNC_4 (int *,char*,int,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1, AVIOContext *VAR_2, int VAR_3)
{
    char VAR_4[1024];
    int VAR_5;

    for (VAR_5=0; VAR_5<FUNC_0(VAR_0); VAR_5++) {
        int VAR_6 = VAR_3 ? FUNC_3(VAR_2) : FUNC_2(VAR_2);
        if (VAR_6 > 0) {
            FUNC_4(VAR_2, VAR_4, sizeof(VAR_4), VAR_6);
            FUNC_1(&VAR_1->metadata, VAR_0[VAR_5], VAR_4, 0);
        }
    }
}
