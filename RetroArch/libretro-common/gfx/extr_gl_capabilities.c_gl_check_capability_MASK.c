
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gl_capability_enum { ____Placeholder_gl_capability_enum } gl_capability_enum ;
typedef int GLint ;
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
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int ,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*,unsigned int*,unsigned int*) ;
 int FUNC_6 (char const*,char*) ;

bool FUNC_7(enum gl_capability_enum VAR_13)
{
   unsigned VAR_14 = 0;
   unsigned VAR_15 = 0;
   const char *VAR_16 = (const char*)FUNC_2(VAR_4);
   const char *VAR_17 = (const char*)FUNC_2(VAR_3);
   const char *VAR_18 = (const char*)FUNC_2(VAR_5);



   if (VAR_18 && FUNC_5(VAR_18, "%u.%u", &VAR_14, &VAR_15) != 2)

      VAR_14 = VAR_15 = 0;

   (void)VAR_16;
   (void)VAR_17;

   switch (VAR_13)
   {
      case 138:




         break;
      case 143:




         break;
      case 132:




         if (FUNC_4("ARB_sync") &&
               VAR_11 && VAR_8 && VAR_7)
            return 1;

         break;
      case 137:
         {
            static bool VAR_19 = 0;
            static bool VAR_20 = 0;

            if (!VAR_19)
            {
               VAR_20 = FUNC_4("ARB_framebuffer_object");
               VAR_19 = 1;
            }

            if (VAR_20)
               return 1;
         }
         break;
      case 128:

         if (!FUNC_3() && !FUNC_4("ARB_vertex_array_object"))
            return 0;

         if (VAR_12 && VAR_6 && VAR_9)
            return 1;

         break;
      case 141:



         if ( !FUNC_3()
               && !FUNC_4("ARB_framebuffer_object")
               && !FUNC_4("EXT_framebuffer_object"))
            return 0;

         if (FUNC_4("ARB_framebuffer_object"))
            return 1;

         if (FUNC_4("EXT_framebuffer_object"))
            return 1;

         if (VAR_14 >= 3)
            return 1;
         break;

      case 146:
         break;
      case 144:
         if (FUNC_4("KHR_debug"))
            return 1;

         if (FUNC_4("ARB_debug_output"))
            return 1;

         break;
      case 135:
         if (VAR_14 >= 3)
            return 1;
         if (FUNC_4("OES_packed_depth_stencil"))
            return 1;
         if (FUNC_4("EXT_packed_depth_stencil"))
            return 1;
         break;
      case 142:


         if (VAR_16 && VAR_17 && (FUNC_6(VAR_16, "ATI") || FUNC_6(VAR_17, "ATI")))
            return 0;

         if (FUNC_4("ARB_ES2_compatibility"))
            return 1;

         break;
      case 129:
         break;
      case 139:
         if (VAR_14 >= 3)
            return 1;





         {
            GLint VAR_21 = 0;
            GLint VAR_22 = 0;

            bool VAR_23 = FUNC_4("ARB_texture_non_power_of_two");
            bool VAR_24 = FUNC_4("ARB_fragment_program");

            FUNC_0(VAR_2, &VAR_21);







            if (VAR_23 && VAR_24 &&
                  (VAR_21 >= 8192) && (VAR_22 >= 4096))
               return 1;
         }

         break;
      case 133:




         break;

      case 134:




         if (FUNC_7(141))
         {
            if ( FUNC_3() ||
                  (FUNC_4("EXT_texture_sRGB")
                   && FUNC_4("ARB_framebuffer_sRGB"))
               )
               return 1;
         }
         break;
      case 140:


         if (FUNC_7(141))
         {

            if (FUNC_3() || FUNC_4("ARB_texture_float"))
               return 1;
         }

         break;
      case 145:





         return 1;

         break;
      case 131:




         if (VAR_16 && FUNC_6(VAR_16, "ATI Technologies"))
            return 0;
         if (FUNC_4("ARB_texture_storage"))
            return 1;

         break;
      case 130:




         if (FUNC_4("EXT_texture_storage"))
            return 1;

         break;
      case 136:
      default:
         break;
   }

   return 0;
}
