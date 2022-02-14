
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netboot_info {int mount_point_length; int server_name_length; int image_path_length; int second_image_path_length; struct netboot_info* second_image_path; struct netboot_info* image_path; struct netboot_info* server_name; struct netboot_info* mount_point; } ;


 int FUNC_0 (struct netboot_info*,int) ;

__attribute__((used)) static void
FUNC_1(struct netboot_info * * VAR_0)
{
    struct netboot_info * VAR_1 = *VAR_0;

    if (VAR_1) {
 if (VAR_1->mount_point) {
     FUNC_0(VAR_1->mount_point, VAR_1->mount_point_length);
 }
 if (VAR_1->server_name) {
     FUNC_0(VAR_1->server_name, VAR_1->server_name_length);
 }
 if (VAR_1->image_path) {
     FUNC_0(VAR_1->image_path, VAR_1->image_path_length);
 }
 if (VAR_1->second_image_path) {
     FUNC_0(VAR_1->second_image_path, VAR_1->second_image_path_length);
 }
 FUNC_0(VAR_1, sizeof(*VAR_1));
    }
    *VAR_0 = ((void*)0);
    return;
}
