
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_9__ {int asf_header_size; int asf_header_read_size; } ;
struct TYPE_11__ {TYPE_1__ mms; int location; } ;
typedef TYPE_3__ MMSHContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static int64_t FUNC_6(URLContext *VAR_1, int VAR_2,
                        int64_t VAR_3, int VAR_4)
{
    MMSHContext *VAR_5 = VAR_1->priv_data;
    MMSHContext *VAR_6 = FUNC_3(sizeof(*VAR_6));
    int VAR_7;

    if (!VAR_6)
        return FUNC_0(VAR_0);

    VAR_1->priv_data = VAR_6;
    VAR_7= FUNC_5(VAR_1, VAR_5->location, 0, FUNC_1(VAR_3, 0), 0);
    if(VAR_7>=0){
        VAR_1->priv_data = VAR_5;
        FUNC_4(VAR_1);
        VAR_1->priv_data = VAR_6;
        FUNC_2(VAR_5);
        VAR_6->mms.asf_header_read_size = VAR_6->mms.asf_header_size;
    }else {
        VAR_1->priv_data = VAR_5;
        FUNC_2(VAR_6);
    }

    return VAR_7;
}
