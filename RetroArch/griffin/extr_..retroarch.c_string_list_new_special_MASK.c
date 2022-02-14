
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


union string_list_elem_attr {int i; } ;
struct string_list {int dummy; } ;
typedef enum string_list_type { ____Placeholder_string_list_type } string_list_type ;
struct TYPE_15__ {char* path; char* display_name; } ;
typedef TYPE_1__ core_info_t ;
typedef int core_info_list_t ;
struct TYPE_23__ {char* ident; } ;
struct TYPE_22__ {char* ident; } ;
struct TYPE_21__ {char* ident; } ;
struct TYPE_20__ {char* ident; } ;
struct TYPE_19__ {char* ident; } ;
struct TYPE_18__ {char* ident; } ;
struct TYPE_17__ {char* ident; } ;
struct TYPE_16__ {char* ident; } ;
struct TYPE_14__ {char* ident; } ;
struct TYPE_13__ {char* ident; } ;
 int FUNC_0 (unsigned int) ;
 TYPE_12__** VAR_0 ;
 int FUNC_1 (unsigned int) ;
 char* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 TYPE_11__** VAR_1 ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,char const*,TYPE_1__ const**,size_t*) ;
 int FUNC_6 (unsigned int) ;
 TYPE_9__** VAR_2 ;
 int FUNC_7 (unsigned int) ;
 TYPE_8__** VAR_3 ;
 int FUNC_8 (unsigned int) ;
 TYPE_7__** VAR_4 ;
 int FUNC_9 (unsigned int) ;
 TYPE_6__** VAR_5 ;
 int FUNC_10 (unsigned int) ;
 char* FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 TYPE_5__** VAR_6 ;
 int FUNC_13 (unsigned int) ;
 TYPE_4__** VAR_7 ;
 int FUNC_14 (struct string_list*,char const*,union string_list_elem_attr) ;
 int FUNC_15 (struct string_list*) ;
 struct string_list* FUNC_16 () ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (unsigned int) ;
 TYPE_3__** VAR_8 ;
 int FUNC_19 (unsigned int) ;
 TYPE_2__** VAR_9 ;

struct string_list *FUNC_20(enum string_list_type VAR_10,
      void *VAR_11, unsigned *VAR_12, size_t *VAR_13)
{
   union string_list_elem_attr VAR_14;
   unsigned VAR_15;
   core_info_list_t *VAR_16 = ((void*)0);
   const core_info_t *VAR_17 = ((void*)0);
   struct string_list *VAR_18 = FUNC_16();

   if (!VAR_18 || !VAR_12)
      goto error;

   VAR_14.i = 0;
   *VAR_12 = 0;

   switch (VAR_10)
   {
      case 135:
      case 140:
         for (VAR_15 = 0; FUNC_3(VAR_15); VAR_15++)
         {
            const char *VAR_19 = VAR_1[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_19) + 1;

            FUNC_14(VAR_18, VAR_19, VAR_14);
         }
         break;
      case 128:
      case 136:
         for (VAR_15 = 0; FUNC_9(VAR_15); VAR_15++)
         {
            const char *VAR_20 = VAR_5[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_20) + 1;
            FUNC_14(VAR_18, VAR_20, VAR_14);
         }
         break;
      case 142:
         for (VAR_15 = 0; FUNC_0(VAR_15); VAR_15++)
         {
            const char *VAR_21 = VAR_0[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_21) + 1;

            FUNC_14(VAR_18, VAR_21, VAR_14);
         }
         break;
      case 141:
         for (VAR_15 = 0; FUNC_1(VAR_15); VAR_15++)
         {
            const char *VAR_22 = FUNC_2(VAR_15);
            *VAR_12 += FUNC_17(VAR_22) + 1;

            FUNC_14(VAR_18, VAR_22, VAR_14);
         }
         break;
      case 129:
         for (VAR_15 = 0; FUNC_18(VAR_15); VAR_15++)
         {
            const char *VAR_23 = VAR_8[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_23) + 1;

            FUNC_14(VAR_18, VAR_23, VAR_14);
         }
         break;
      case 139:
         for (VAR_15 = 0; FUNC_7(VAR_15); VAR_15++)
         {
            const char *VAR_24 = VAR_3[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_24) + 1;

            FUNC_14(VAR_18, VAR_24, VAR_14);
         }
         break;
      case 138:
         break;
      case 137:
         for (VAR_15 = 0; FUNC_8(VAR_15); VAR_15++)
         {
            const char *VAR_25 = VAR_4[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_25) + 1;

            FUNC_14(VAR_18, VAR_25, VAR_14);
         }
         break;
      case 132:
         for (VAR_15 = 0; FUNC_13(VAR_15); VAR_15++)
         {
            const char *VAR_26 = VAR_7[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_26) + 1;

            FUNC_14(VAR_18, VAR_26, VAR_14);
         }
         break;
      case 134:
         for (VAR_15 = 0; FUNC_12(VAR_15); VAR_15++)
         {
            const char *VAR_27 = VAR_6[VAR_15]->ident;
            *VAR_12 += FUNC_17(VAR_27) + 1;

            FUNC_14(VAR_18, VAR_27, VAR_14);
         }
         break;
      case 130:
         FUNC_4(&VAR_16);

         FUNC_5(VAR_16,
               (const char*)VAR_11, &VAR_17, VAR_13);

         if (!VAR_17)
            goto error;

         if (*VAR_13 == 0)
            goto error;

         for (VAR_15 = 0; VAR_15 < *VAR_13; VAR_15++)
         {
            const core_info_t *VAR_28 = (const core_info_t*)&VAR_17[VAR_15];
            const char *VAR_29 = VAR_28->path;

            if (!VAR_29)
               goto error;

            *VAR_12 += FUNC_17(VAR_29) + 1;
            FUNC_14(VAR_18, VAR_29, VAR_14);
         }
         break;
      case 131:
         FUNC_4(&VAR_16);
         FUNC_5(VAR_16,
               (const char*)VAR_11, &VAR_17, VAR_13);

         if (!VAR_17)
            goto error;

         if (*VAR_13 == 0)
            goto error;

         for (VAR_15 = 0; VAR_15 < *VAR_13; VAR_15++)
         {
            core_info_t *VAR_30 = (core_info_t*)&VAR_17[VAR_15];
            const char *VAR_31 = VAR_30->display_name;

            if (!VAR_31)
               goto error;

            *VAR_12 += FUNC_17(VAR_31) + 1;
            FUNC_14(VAR_18, VAR_31, VAR_14);
         }
         break;
      case 133:
      default:
         goto error;
   }

   return VAR_18;

error:
   FUNC_15(VAR_18);
   VAR_18 = ((void*)0);
   return ((void*)0);
}
