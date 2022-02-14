
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int data_string ;
struct TYPE_9__ {int write_out_ptr; } ;
struct TYPE_8__ {char* host; TYPE_2__ mms; } ;
typedef TYPE_1__ MMSTContext ;
typedef TYPE_2__ MMSContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(MMSTContext *VAR_1)
{
    char VAR_2[256];
    int VAR_3;
    MMSContext *VAR_4 = &VAR_1->mms;




    FUNC_4(VAR_2, sizeof(VAR_2),
            "NSPlayer/7.0.0.1956; {%s}; Host: %s",
            "7E667F5D-A661-495E-A512-F55686DDA178", VAR_1->host);

    FUNC_5(VAR_1, VAR_0);
    FUNC_1(VAR_4, 0, 0x0004000b);
    FUNC_0(&VAR_4->write_out_ptr, 0x0003001c);
    if ((VAR_3 = FUNC_2(VAR_4, VAR_2)) < 0)
        return VAR_3;
    return FUNC_3(VAR_1);
}
