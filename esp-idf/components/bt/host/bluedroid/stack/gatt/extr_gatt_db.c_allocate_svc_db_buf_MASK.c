
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int svc_buffer; int mem_free; int * p_free_mem; } ;
typedef TYPE_1__ tGATT_SVC_DB ;
typedef int UINT8 ;
typedef int BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static BOOLEAN FUNC_4(tGATT_SVC_DB *VAR_4)
{
    BT_HDR *VAR_5;

    FUNC_0("allocate_svc_db_buf allocating extra buffer");

    if ((VAR_5 = (BT_HDR *)FUNC_3(VAR_2)) == ((void*)0)) {
        FUNC_1("allocate_svc_db_buf failed, no resources");
        return VAR_0;
    }

    VAR_4->p_free_mem = (UINT8 *) VAR_5;
    VAR_4->mem_free = VAR_2;

    FUNC_2(VAR_4->svc_buffer, VAR_5, VAR_1);

    return VAR_3;

}
