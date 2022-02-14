
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int stream_num; int write_out_ptr; TYPE_1__* streams; } ;
struct TYPE_8__ {TYPE_3__ mms; } ;
struct TYPE_7__ {int id; } ;
typedef TYPE_2__ MMSTContext ;
typedef TYPE_3__ MMSContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(MMSTContext *VAR_1)
{
    int VAR_2;
    MMSContext *VAR_3 = &VAR_1->mms;

    FUNC_3(VAR_1, VAR_0);
    FUNC_1(&VAR_3->write_out_ptr, VAR_3->stream_num);
    for(VAR_2= 0; VAR_2<VAR_3->stream_num; VAR_2++) {
        FUNC_0(&VAR_3->write_out_ptr, 0xffff);
        FUNC_0(&VAR_3->write_out_ptr, VAR_3->streams[VAR_2].id);
        FUNC_0(&VAR_3->write_out_ptr, 0);
    }
    return FUNC_2(VAR_1);
}
