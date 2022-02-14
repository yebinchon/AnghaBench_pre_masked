
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int le; int gb; } ;
typedef TYPE_1__ TiffContext ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;



 int FUNC_0 (int,char const*,char const*,int *,int ,int *) ;
 int FUNC_1 (int,char const*,char const*,int *,int ,int ,int *) ;
 int FUNC_2 (int,char const*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2,
                        const char *VAR_3, const char *VAR_4, TiffContext *VAR_5, AVFrame *VAR_6)
{
    switch(VAR_2) {
    case 130: return FUNC_0(VAR_1, VAR_3, VAR_4, &VAR_5->gb, VAR_5->le, &VAR_6->metadata);
    case 129 : return FUNC_1(VAR_1, VAR_3, VAR_4, &VAR_5->gb, VAR_5->le, 0, &VAR_6->metadata);
    case 128: return FUNC_2(VAR_1, VAR_3, &VAR_5->gb, VAR_5->le, &VAR_6->metadata);
    default : return VAR_0;
    };
}
