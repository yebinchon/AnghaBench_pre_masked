
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scattered_relocation_info {int r_type; } ;
struct relocation_info {int r_address; scalar_t__ r_extern; scalar_t__ r_symbolnum; int r_type; scalar_t__ (* reloc_has_pair ) (int ) ;} ;
typedef struct relocation_info KXLDRelocator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct relocation_info const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static u_int
FUNC_3(const KXLDRelocator *VAR_2,
    const struct relocation_info *VAR_3, u_int VAR_4)
{
    u_int VAR_5 = 0;
    u_int VAR_6 = 0;
    const struct relocation_info *VAR_7 = ((void*)0);
    const struct scattered_relocation_info *VAR_8 = ((void*)0);

    FUNC_0(VAR_2);
    FUNC_0(VAR_3);



    VAR_5 = 1;
    for (VAR_6 = 1; VAR_6 < VAR_4; ++VAR_6) {
        VAR_7 = VAR_3 + VAR_6;

        if (VAR_7->r_address & VAR_1) {



            VAR_8 = (const struct scattered_relocation_info *) VAR_7;

            VAR_5 +=
                !VAR_2->reloc_has_pair(VAR_8->r_type);
        } else {



            VAR_5 +=
                !(VAR_2->reloc_has_pair(VAR_7->r_type)
                 || (0 == VAR_7->r_extern && VAR_0 == VAR_7->r_symbolnum));
        }

    }

    return VAR_5;
}
