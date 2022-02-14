
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mach_header {scalar_t__ magic; } ;
typedef enum NXByteOrder { ____Placeholder_NXByteOrder } NXByteOrder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(u_char *VAR_2, enum NXByteOrder VAR_3,
    enum NXByteOrder VAR_4)
{
    struct mach_header *VAR_5 = (struct mach_header *) ((void *) VAR_2);

    if (!VAR_5) return;

    if (VAR_5->magic == VAR_0) {
        FUNC_0(VAR_2, VAR_3, VAR_4);
    } else if (VAR_5->magic == VAR_1) {
        FUNC_1(VAR_2, VAR_3, VAR_4);
    }
}
