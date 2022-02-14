
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vk_t ;
struct vk_texture {scalar_t__ layout; int type; int image; } ;
typedef int VkCommandBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,scalar_t__,int ,int ,int ,int ) ;

void FUNC_2(vk_t *VAR_6, VkCommandBuffer VAR_7, struct vk_texture *VAR_8)
{
   if (!VAR_8->image)
      return;







   if (VAR_8->layout != VAR_3 &&
       VAR_8->layout != VAR_2)
      return;

   switch (VAR_8->type)
   {
      case 128:
         FUNC_1(VAR_6, VAR_7, VAR_8->image,
               VAR_8->layout, VAR_2,
               VAR_0, VAR_1,
               VAR_5,
               VAR_4);
         break;

      default:
         FUNC_0(0 && "Attempting to transition invalid texture type.\n");
         break;
   }
   VAR_8->layout = VAR_2;
}
