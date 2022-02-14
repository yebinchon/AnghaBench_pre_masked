
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log2_chroma_h; int log2_chroma_w; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, int *VAR_1, int VAR_2, int VAR_3, const AVPixFmtDescriptor *VAR_4)
{
    VAR_0[1] = VAR_0[2] = FUNC_0(VAR_2, VAR_4->log2_chroma_w);
    VAR_0[0] = VAR_0[3] = VAR_2;
    VAR_1[1] = VAR_1[2] = FUNC_0(VAR_3, VAR_4->log2_chroma_h);
    VAR_1[0] = VAR_1[3] = VAR_3;
}
