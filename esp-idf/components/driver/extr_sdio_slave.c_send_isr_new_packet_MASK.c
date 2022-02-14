
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_6__ {int pkt_len; } ;
typedef TYPE_1__ buf_desc_t ;
struct TYPE_7__ {TYPE_1__* in_flight_end; TYPE_1__* in_flight; } ;


 int FUNC_0 (int ,char*,TYPE_1__* const,TYPE_1__* const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__* const) ;
 int FUNC_5 () ;

__attribute__((used)) static inline esp_err_t FUNC_6(void)
{


    buf_desc_t *const VAR_4 = VAR_3.in_flight;
    buf_desc_t *const VAR_5 = VAR_3.in_flight_end;
    FUNC_1(VAR_4 != ((void*)0) && VAR_5 != ((void*)0));

    FUNC_5();
    FUNC_4(VAR_4);


    FUNC_2(VAR_5->pkt_len);

    FUNC_3(VAR_1);

    FUNC_0(VAR_2, "restart new send: %p->%p, pkt_len: %d", VAR_4, VAR_5, VAR_5->pkt_len);
    return VAR_0;
}
