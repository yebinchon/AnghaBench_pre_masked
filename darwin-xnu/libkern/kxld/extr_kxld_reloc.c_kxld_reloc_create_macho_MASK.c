
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct scattered_relocation_info {int r_address; scalar_t__ r_type; scalar_t__ r_value; int r_length; int r_pcrel; } ;
struct relocation_info {int r_address; scalar_t__ r_extern; scalar_t__ r_symbolnum; scalar_t__ r_type; int r_length; int r_pcrel; } ;
typedef int kern_return_t ;
struct TYPE_7__ {int address; scalar_t__ reloc_type; scalar_t__ target; int pair_address; scalar_t__ pair_target; void* pair_target_type; void* target_type; int length; int pcrel; } ;
struct TYPE_6__ {scalar_t__ (* reloc_get_pair_type ) (scalar_t__) ;scalar_t__ (* reloc_has_got ) (scalar_t__) ;scalar_t__ may_scatter; scalar_t__ (* reloc_has_pair ) (scalar_t__) ;} ;
typedef TYPE_1__ KXLDRelocator ;
typedef TYPE_2__ KXLDReloc ;
typedef struct relocation_info const KXLDArray ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct relocation_info const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,struct relocation_info const*,scalar_t__) ;
 int VAR_10 ;
 TYPE_2__* FUNC_2 (struct relocation_info const*,int ) ;
 int FUNC_3 (struct relocation_info const*,int,scalar_t__) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

kern_return_t
FUNC_10(KXLDArray *VAR_11, const KXLDRelocator *VAR_12,
    const struct relocation_info *VAR_13, u_int VAR_14)
{
    kern_return_t VAR_15 = VAR_0;
    KXLDReloc *VAR_16 = ((void*)0);
    u_int VAR_17 = 0;
    const struct relocation_info *VAR_18 = ((void*)0);
    const struct scattered_relocation_info *VAR_19 = ((void*)0);
    u_int VAR_20 = 0;
    u_int VAR_21 = 0;

    FUNC_0(VAR_11);
    FUNC_0(VAR_13);


    if (!VAR_14) {
        VAR_15 = VAR_1;
        goto finish;
    }


    VAR_17 = FUNC_1(VAR_12, VAR_13, VAR_14);

    if (VAR_17) {



        VAR_15 = FUNC_3(VAR_11, sizeof(KXLDReloc), VAR_17);
        FUNC_5(VAR_15, VAR_10);



        for (VAR_20 = 0; VAR_20 < VAR_14; ++VAR_20) {
            VAR_18 = VAR_13 + VAR_20;
            VAR_19 = (const struct scattered_relocation_info *) VAR_18;





            if (!(VAR_12->may_scatter && (VAR_18->r_address & VAR_9)) &&
                !(VAR_18->r_extern) && (VAR_8 == VAR_18->r_symbolnum))
            {
                continue;
            }







            VAR_16 = FUNC_2(VAR_11, VAR_21++);
            if (VAR_12->may_scatter && (VAR_18->r_address & VAR_9)) {
                VAR_16->address = VAR_19->r_address;
                VAR_16->pcrel = VAR_19->r_pcrel;
                VAR_16->length = VAR_19->r_length;
                VAR_16->reloc_type = VAR_19->r_type;
                VAR_16->target = VAR_19->r_value;
                VAR_16->target_type = VAR_3;
            } else {
                VAR_16->address = VAR_18->r_address;
                VAR_16->pcrel = VAR_18->r_pcrel;
                VAR_16->length = VAR_18->r_length;
                VAR_16->reloc_type = VAR_18->r_type;
                VAR_16->target = VAR_18->r_symbolnum;

                if (0 == VAR_18->r_extern) {
                    VAR_16->target_type = VAR_5;
                    VAR_16->target -= 1;
                } else {
                    VAR_16->target_type = VAR_6;
                }
            }



            if (VAR_12->reloc_has_pair(VAR_16->reloc_type)) {
                ++VAR_20;
                FUNC_4(VAR_20 < VAR_14, VAR_10, VAR_15=VAR_0);

                VAR_18 = VAR_13 + VAR_20;
                VAR_19 = (const struct scattered_relocation_info *) VAR_18;

                if (VAR_12->may_scatter && (VAR_18->r_address & VAR_9)) {
                    FUNC_4(VAR_12->reloc_get_pair_type(
                        VAR_16->reloc_type) == VAR_19->r_type,
                        VAR_10, VAR_15=VAR_0);
                    VAR_16->pair_address= VAR_19->r_address;
                    VAR_16->pair_target = VAR_19->r_value;
                    VAR_16->pair_target_type = VAR_3;
                } else {
                    FUNC_4(VAR_12->reloc_get_pair_type(
                        VAR_16->reloc_type) == VAR_19->r_type,
                        VAR_10, VAR_15=VAR_0);
                    VAR_16->pair_address = VAR_19->r_address;
                    if (VAR_18->r_extern) {
                        VAR_16->pair_target = VAR_18->r_symbolnum;
                        VAR_16->pair_target_type = VAR_6;
                    } else {
                        VAR_16->pair_target = VAR_18->r_address;
                        VAR_16->pair_target_type = VAR_7;
                    }
                }
            } else {
                VAR_16->pair_target = 0;
                if (VAR_12->reloc_has_got(VAR_16->reloc_type)) {
                   VAR_16->pair_target_type = VAR_2;
                } else {
                   VAR_16->pair_target_type = VAR_4;
                }
            }
       }
    }
    VAR_15 = VAR_1;

finish:
    return VAR_15;
}
