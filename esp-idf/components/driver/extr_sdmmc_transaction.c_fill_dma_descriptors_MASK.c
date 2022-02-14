
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int owned_by_idmac; int last_descriptor; int second_address_chained; size_t buffer1_ptr; size_t buffer1_size; struct TYPE_4__* next_desc_ptr; } ;
typedef TYPE_1__ sdmmc_desc_t ;
struct TYPE_5__ {size_t size_remaining; size_t next_desc; size_t ptr; } ;


 int FUNC_0 (int ,char*,size_t,size_t const,size_t,int,int,size_t) ;
 size_t const VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_2(size_t VAR_5)
{
    for (size_t VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
        if (VAR_3.size_remaining == 0) {
            return;
        }
        const size_t VAR_7 = VAR_3.next_desc;
        sdmmc_desc_t* VAR_8 = &VAR_4[VAR_7];
        FUNC_1(!VAR_8->owned_by_idmac);
        size_t VAR_9 =
            (VAR_3.size_remaining < VAR_1) ?
                VAR_3.size_remaining : VAR_1;
        bool VAR_10 = VAR_9 == VAR_3.size_remaining;
        VAR_8->last_descriptor = VAR_10;
        VAR_8->second_address_chained = 1;
        VAR_8->owned_by_idmac = 1;
        VAR_8->buffer1_ptr = VAR_3.ptr;
        VAR_8->next_desc_ptr = (VAR_10) ? ((void*)0) : &VAR_4[(VAR_7 + 1) % VAR_0];
        FUNC_1(VAR_9 < 4 || VAR_9 % 4 == 0);
        VAR_8->buffer1_size = (VAR_9 + 3) & (~3);

        VAR_3.size_remaining -= VAR_9;
        VAR_3.ptr += VAR_9;
        VAR_3.next_desc = (VAR_3.next_desc + 1) % VAR_0;
        FUNC_0(VAR_2, "fill %d desc=%d rem=%d next=%d last=%d sz=%d",
                VAR_5, VAR_7, VAR_3.size_remaining,
                VAR_3.next_desc, VAR_8->last_descriptor, VAR_8->buffer1_size);
    }
}
