
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ menu_linear_filter; } ;
struct TYPE_7__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {float menu_texture_alpha; scalar_t__ menu_texture; } ;
typedef TYPE_3__ gl_core_t ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int,int ,unsigned int,unsigned int) ;
 int FUNC_8 (int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,void const*) ;
 int FUNC_9 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_10(void *VAR_20,
      const void *VAR_21, bool VAR_22, unsigned VAR_23, unsigned VAR_24,
      float VAR_25)
{
   GLenum VAR_26;
   settings_t *VAR_27 = FUNC_0();
   unsigned VAR_28 = VAR_22 ? sizeof(uint32_t) : sizeof(uint16_t);
   gl_core_t *VAR_29 = (gl_core_t*)VAR_20;
   if (!VAR_29)
      return;

   FUNC_9(VAR_29, 0);
   VAR_26 = VAR_27->bools.menu_linear_filter ? VAR_2 : VAR_3;

   if (VAR_29->menu_texture)
      FUNC_3(1, &VAR_29->menu_texture);
   FUNC_4(1, &VAR_29->menu_texture);
   FUNC_2(VAR_9, VAR_29->menu_texture);
   FUNC_7(VAR_9, 1, VAR_22 ? VAR_8 : VAR_7, VAR_23, VAR_24);

   FUNC_5(VAR_16, VAR_28);
   FUNC_1(VAR_4, 0);
   FUNC_5(VAR_17, 0);
   FUNC_8(VAR_9, 0, 0, 0,
                   VAR_23, VAR_24, VAR_6, VAR_22 ? VAR_18 : VAR_19, VAR_21);
   FUNC_6(VAR_9, VAR_14, VAR_1);
   FUNC_6(VAR_9, VAR_15, VAR_1);
   FUNC_6(VAR_9, VAR_10, VAR_26);
   FUNC_6(VAR_9, VAR_11, VAR_26);

   if (VAR_22)
   {
      FUNC_6(VAR_9, VAR_13, VAR_0);
      FUNC_6(VAR_9, VAR_12, VAR_5);
   }

   FUNC_2(VAR_9, 0);
   VAR_29->menu_texture_alpha = VAR_25;
   FUNC_9(VAR_29, 1);
}
