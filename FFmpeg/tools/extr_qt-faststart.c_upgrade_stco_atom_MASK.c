
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dest; int original_moov_size; scalar_t__ new_moov_size; } ;
typedef TYPE_1__ upgrade_stco_context_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {unsigned char* data; int header_size; } ;
typedef TYPE_2__ atom_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_0 ;
 int FUNC_3 (int,unsigned char*,int) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void FUNC_5(upgrade_stco_context_t *VAR_1, atom_t *VAR_2)
{
    unsigned char *VAR_3;
    unsigned char *VAR_4;
    uint64_t VAR_5;
    uint32_t VAR_6;
    uint32_t VAR_7;



    VAR_6 = FUNC_2(VAR_2->data + 4);


    FUNC_3(VAR_1->dest, VAR_2->data - VAR_2->header_size, VAR_2->header_size + 8);
    FUNC_0(VAR_1->dest + 4, VAR_0);
    FUNC_4(VAR_1->dest, VAR_2->header_size, VAR_2->header_size + 8 + VAR_6 * 8);
    VAR_1->dest += VAR_2->header_size + 8;


    for (VAR_3 = VAR_2->data + 8, VAR_4 = VAR_3 + VAR_6 * 4;
        VAR_3 < VAR_4;
        VAR_3 += 4) {
        VAR_7 = FUNC_2(VAR_3) - VAR_1->original_moov_size;
        VAR_5 = (uint64_t)VAR_7 + VAR_1->new_moov_size;
        FUNC_1(VAR_1->dest, VAR_5);
        VAR_1->dest += 8;
    }
}
