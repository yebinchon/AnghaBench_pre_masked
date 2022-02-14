
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int write_out_ptr; int out_buffer; int mms_hd; } ;
struct TYPE_4__ {TYPE_2__ mms; } ;
typedef TYPE_1__ MMSTContext ;
typedef TYPE_2__ MMSContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,char*,int,int,char*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int,int ,int) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(MMSTContext *VAR_2)
{
    MMSContext *VAR_3 = &VAR_2->mms;
    int VAR_4= VAR_3->write_out_ptr - VAR_3->out_buffer;
    int VAR_5 = FUNC_3(VAR_4, 8);
    int VAR_6= VAR_5 - 16;
    int VAR_7= VAR_6/8;
    int VAR_8;


    FUNC_2(VAR_3->out_buffer + 8, VAR_6);
    FUNC_2(VAR_3->out_buffer + 16, VAR_7);
    FUNC_2(VAR_3->out_buffer + 32, VAR_7-2);
    FUNC_6(VAR_3->write_out_ptr, 0, VAR_5 - VAR_4);


    VAR_8= FUNC_5(VAR_3->mms_hd, VAR_3->out_buffer, VAR_5);
    if(VAR_8 != VAR_5) {
        FUNC_4(VAR_3->mms_hd, VAR_0,
               "Failed to write data of length %d: %d (%s)\n",
               VAR_5, VAR_8,
               VAR_8 < 0 ? FUNC_7(FUNC_1(VAR_8)) :
                   "The server closed the connection");
        return FUNC_0(VAR_1);
    }

    return 0;
}
