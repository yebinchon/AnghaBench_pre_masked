
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
struct TYPE_4__ {int pop; int sec_inst; TYPE_1__* sec; } ;
typedef TYPE_2__ protocomm_t ;
struct TYPE_3__ {int (* security_req_handler ) (int ,int ,int ,int const*,int ,int **,int *,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int const*,int ,int **,int *,void*) ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_1,
                                             const uint8_t *VAR_2, ssize_t VAR_3,
                                             uint8_t **VAR_4, ssize_t *VAR_5,
                                             void *VAR_6)
{
    protocomm_t *VAR_7 = (protocomm_t *) VAR_6;

    if (VAR_7->sec && VAR_7->sec->security_req_handler) {
        return VAR_7->sec->security_req_handler(VAR_7->sec_inst,
                                             VAR_7->pop, VAR_1,
                                             VAR_2, VAR_3,
                                             VAR_4, VAR_5,
                                             VAR_6);
    }

    return VAR_0;
}
