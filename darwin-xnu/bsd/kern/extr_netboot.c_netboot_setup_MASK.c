
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * second_image_path; int * image_path; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (char*,...) ;

int
FUNC_3()
{
    int VAR_1 = 0;

    if (VAR_0 == ((void*)0)
 || VAR_0->image_path == ((void*)0)) {
 goto done;
    }
    FUNC_2("netboot_setup: calling imageboot_mount_image\n");
    VAR_1 = FUNC_0(VAR_0->image_path, -1);
    if (VAR_1 != 0) {
 FUNC_2("netboot: failed to mount root image, %d\n", VAR_1);
    }
    else if (VAR_0->second_image_path != ((void*)0)) {
 VAR_1 = FUNC_0(VAR_0->second_image_path, 0);
 if (VAR_1 != 0) {
     FUNC_2("netboot: failed to mount second root image, %d\n", VAR_1);
 }
    }

 done:
    FUNC_1(&VAR_0);
    return (VAR_1);
}
