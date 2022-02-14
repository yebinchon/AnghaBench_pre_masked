
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_7__ {int str; } ;
struct TYPE_6__ {int den; int num; } ;
typedef TYPE_1__ AVRational ;
typedef TYPE_2__ AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ,char,int ) ;
 int FUNC_2 (int *,char const*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(WriterContext *VAR_1,
                                         const char *VAR_2, AVRational VAR_3, char VAR_4)
{
    AVBPrint VAR_5;
    FUNC_0(&VAR_5, 0, VAR_0);
    FUNC_1(&VAR_5, "%d%c%d", VAR_3.num, VAR_4, VAR_3.den);
    FUNC_2(VAR_1, VAR_2, VAR_5.str, 0);
}
