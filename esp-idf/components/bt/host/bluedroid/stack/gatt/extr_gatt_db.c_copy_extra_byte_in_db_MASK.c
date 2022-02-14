
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mem_free; int * p_free_mem; } ;
typedef TYPE_1__ tGATT_SVC_DB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*,int ,scalar_t__) ;

__attribute__((used)) static BOOLEAN FUNC_3(tGATT_SVC_DB *VAR_2, void **VAR_3, UINT16 VAR_4)
{
    UINT8 *VAR_5 = (UINT8 *)*VAR_3;

    if (VAR_2->mem_free < VAR_4) {
        if (!FUNC_1(VAR_2)) {
            FUNC_0("copy_extra_byte_in_db failed, no resources\n");
            return VAR_0;
        }
    }

    VAR_5 = VAR_2->p_free_mem;
    VAR_2->p_free_mem += VAR_4;
    VAR_2->mem_free -= VAR_4;
    FUNC_2((void *)VAR_5, 0, VAR_4);
    *VAR_3 = (void *)VAR_5;

    return VAR_1;
}
