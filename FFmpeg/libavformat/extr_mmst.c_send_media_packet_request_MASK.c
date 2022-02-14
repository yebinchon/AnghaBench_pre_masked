
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int write_out_ptr; } ;
struct TYPE_7__ {int packet_id; TYPE_2__ mms; } ;
typedef TYPE_1__ MMSTContext ;
typedef TYPE_2__ MMSContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(MMSTContext *VAR_1)
{
    MMSContext *VAR_2 = &VAR_1->mms;
    FUNC_5(VAR_1, VAR_0);
    FUNC_3(VAR_2, 1, 0x0001FFFF);
    FUNC_2(&VAR_2->write_out_ptr, 0);
    FUNC_1(&VAR_2->write_out_ptr, 0xffffffff);
    FUNC_1(&VAR_2->write_out_ptr, 0xffffffff);
    FUNC_0(&VAR_2->write_out_ptr, 0xff);
    FUNC_0(&VAR_2->write_out_ptr, 0xff);
    FUNC_0(&VAR_2->write_out_ptr, 0xff);
    FUNC_0(&VAR_2->write_out_ptr, 0x00);

    VAR_1->packet_id++;
    FUNC_1(&VAR_2->write_out_ptr, VAR_1->packet_id);
    return FUNC_4(VAR_1);
}
