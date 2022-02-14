
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; scalar_t__ sequence_ok; } ;
typedef TYPE_1__ PayloadContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, PayloadContext *VAR_3,
                               const char *VAR_4)
{
    VAR_3->sequence_ok = 0;
    FUNC_1(VAR_2, VAR_0, "%s", VAR_4);
    FUNC_2(&VAR_3->data);
    return FUNC_0(VAR_1);
}
