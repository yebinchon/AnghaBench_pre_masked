
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int list_len; int* rsp_list; TYPE_1__* p_db; } ;
typedef TYPE_2__ tCONN_CB ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {unsigned int raw_size; unsigned int raw_used; int * raw_data; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (int *,int*,unsigned int) ;
 int* FUNC_3 (int*,int,int*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5 (tCONN_CB *VAR_1, BOOLEAN VAR_2)
{
    unsigned int VAR_3;
    UINT32 VAR_4;
    UINT8 *VAR_5;
    UINT8 VAR_6;


    UINT8 VAR_7[VAR_0];
    UINT32 VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_1->list_len; VAR_8++) {
        FUNC_4((char *)&VAR_7[VAR_8 * 2], "%02X\n", (UINT8)(VAR_1->rsp_list[VAR_8]));
    }
    FUNC_1("result :%s\n", VAR_7);


    if (VAR_1->p_db->raw_data) {
        VAR_3 = VAR_1->p_db->raw_size - VAR_1->p_db->raw_used;
        VAR_4 = VAR_1->list_len;
        VAR_5 = &VAR_1->rsp_list[0];

        if (VAR_2) {
            VAR_6 = *VAR_5++;
            VAR_5 = FUNC_3 (VAR_5, VAR_6, &VAR_4);
        }
        if (VAR_4 < VAR_3 ) {
            VAR_3 = VAR_4;
        }

        FUNC_0("list_len :%d cpy_len:%d raw_size:%d raw_used:%d\n",
                          VAR_4, VAR_3, VAR_1->p_db->raw_size, VAR_1->p_db->raw_used);

        if (VAR_3 != 0){
            FUNC_2 (&VAR_1->p_db->raw_data[VAR_1->p_db->raw_used], VAR_5, VAR_3);
            VAR_1->p_db->raw_used += VAR_3;
        }
    }
}
