
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpp; int width; int height; } ;
struct tga_header {scalar_t__ image_type; scalar_t__ id_length; TYPE_1__ image_info; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (unsigned char*,int,int,int *) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 unsigned char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,struct tga_header*) ;
 scalar_t__ VAR_1 ;

unsigned char *FUNC_7(const char *VAR_2, struct tga_header *VAR_3) {
    unsigned char *VAR_4 = ((void*)0);
    FILE *VAR_5 = FUNC_1(VAR_2, "r");
    if (VAR_5) {
        if(FUNC_6(VAR_5, VAR_3) == 0) {
            if (VAR_3->image_type == VAR_1 &&
                (VAR_3->image_info.bpp == 24 ||
                VAR_3->image_info.bpp == 32)) {
                int VAR_6 = VAR_3->image_info.width *
                   VAR_3->image_info.height * (VAR_3->image_info.bpp / 8);
                VAR_4 = FUNC_5(VAR_6);
                if (VAR_4) {
                    if (VAR_3->id_length)
                        FUNC_4(VAR_5, VAR_0, VAR_3->id_length);

                    if (FUNC_2(VAR_4, 1, VAR_6, VAR_5) != VAR_6) {
                        FUNC_3(VAR_4);
                        VAR_4 = ((void*)0);
                    }
                }
            }
        }
        FUNC_0(VAR_5);
    }
    return VAR_4;
}
