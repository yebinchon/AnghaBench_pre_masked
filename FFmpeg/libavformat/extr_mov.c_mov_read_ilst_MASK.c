
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int itunes_metadata; } ;
typedef TYPE_1__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_1(MOVContext *VAR_0, AVIOContext *VAR_1, MOVAtom VAR_2)
{
    int VAR_3;
    VAR_0->itunes_metadata = 1;
    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    VAR_0->itunes_metadata = 0;
    return VAR_3;
}
