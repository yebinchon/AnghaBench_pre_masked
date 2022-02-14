
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int nb_streams; int * tracks; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_0, MOVMuxContext *VAR_1)
{
    int64_t VAR_2 = FUNC_0(VAR_0);
    int VAR_3;
    FUNC_1(VAR_0, 0x0);
    FUNC_2(VAR_0, "mvex");
    for (VAR_3 = 0; VAR_3 < VAR_1->nb_streams; VAR_3++)
        FUNC_3(VAR_0, &VAR_1->tracks[VAR_3]);
    return FUNC_4(VAR_0, VAR_2);
}
