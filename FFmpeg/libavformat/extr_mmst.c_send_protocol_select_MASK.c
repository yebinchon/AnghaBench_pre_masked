
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int data_string ;
struct TYPE_9__ {int write_out_ptr; } ;
struct TYPE_8__ {TYPE_2__ mms; } ;
typedef TYPE_1__ MMSTContext ;
typedef TYPE_2__ MMSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,int,int,int,int,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(MMSTContext *VAR_3)
{
    int VAR_4;
    char VAR_5[256];
    MMSContext *VAR_6 = &VAR_3->mms;

    FUNC_5(VAR_3, VAR_0);
    FUNC_1(VAR_6, 0, 0xffffffff);
    FUNC_0(&VAR_6->write_out_ptr, 0);
    FUNC_0(&VAR_6->write_out_ptr, 0x00989680);
    FUNC_0(&VAR_6->write_out_ptr, 2);
    FUNC_4(VAR_5, sizeof(VAR_5), "\\\\%d.%d.%d.%d\\%s\\%d",
            (VAR_1>>24)&0xff,
            (VAR_1>>16)&0xff,
            (VAR_1>>8)&0xff,
            VAR_1&0xff,
            "TCP",
            VAR_2);

    if ((VAR_4 = FUNC_2(VAR_6, VAR_5)) < 0)
        return VAR_4;
    return FUNC_3(VAR_3);
}
