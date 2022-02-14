
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct video_shader_parameter {unsigned int pass; char* id; char* desc; float minimum; float maximum; float step; int initial; int current; } ;
struct video_shader {scalar_t__ num_parameters; unsigned int passes; struct video_shader_parameter* parameters; TYPE_2__* pass; } ;
struct string_list {size_t size; TYPE_3__* elems; } ;
typedef scalar_t__ int64_t ;
typedef int config_file_t ;
struct TYPE_6__ {char* data; } ;
struct TYPE_4__ {char* path; } ;
struct TYPE_5__ {TYPE_1__ source; } ;


 scalar_t__ FUNC_0 (struct video_shader_parameter*) ;
 int FUNC_1 (char*,char*,char*,int ,float,float,float,unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,void**,scalar_t__*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,struct video_shader*) ;
 int FUNC_8 (char const*,char*,char*,char*,int *,float*,float*,float*) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (struct string_list*) ;
 struct string_list* FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (char*,char const*,int ) ;
 int FUNC_14 (int *,struct video_shader*) ;

bool FUNC_15(config_file_t *VAR_0,
      struct video_shader *VAR_1)
{
   unsigned VAR_2;
   struct video_shader_parameter *VAR_3 = &VAR_1->parameters[0];

   VAR_1->num_parameters = 0;



   for (VAR_2 = 0; VAR_2 < VAR_1->passes; VAR_2++)
   {
      const char *VAR_4 = VAR_1->pass[VAR_2].source.path;
      uint8_t *VAR_5 = ((void*)0);
      int64_t VAR_6 = 0;
      struct string_list *VAR_7 = ((void*)0);
      size_t VAR_8 = 0;

      if (FUNC_9(VAR_4))
         continue;

      if (!FUNC_6(VAR_4))
         continue;
      if (!FUNC_3(VAR_4, (void**)&VAR_5, &VAR_6))
         continue;


      if (VAR_6 > 0)
         VAR_7 = FUNC_12((const char*)VAR_5, "\n");


      if ((void*)VAR_5)
         FUNC_4((void*)VAR_5);

      if (!VAR_7)
         continue;


      VAR_3->pass = VAR_2;

      while ((VAR_1->num_parameters < FUNC_0(VAR_1->parameters)) &&
             (VAR_8 < VAR_7->size))
      {
         int VAR_9;
         const char *VAR_10 = VAR_7->elems[VAR_8].data;
         VAR_8++;


         if (FUNC_13("#pragma parameter", VAR_10,
                  FUNC_2("#pragma parameter")))
            continue;


         VAR_9 = FUNC_8(VAR_10, "#pragma parameter %63s \"%63[^\"]\" %f %f %f %f",
               VAR_3->id, VAR_3->desc, &VAR_3->initial,
               &VAR_3->minimum, &VAR_3->maximum, &VAR_3->step);

         if (VAR_9 < 5)
            continue;

         VAR_3->id[63] = '\0';
         VAR_3->desc[63] = '\0';

         if (VAR_9 == 5)
            VAR_3->step = 0.1f * (VAR_3->maximum - VAR_3->minimum);

         VAR_3->pass = VAR_2;

         FUNC_1("Found #pragma parameter %s (%s) %f %f %f %f in pass %d\n",
               VAR_3->desc, VAR_3->id, VAR_3->initial,
               VAR_3->minimum, VAR_3->maximum, VAR_3->step, VAR_3->pass);
         VAR_3->current = VAR_3->initial;

         VAR_1->num_parameters++;
         VAR_3++;
      }

      FUNC_11(VAR_7);
   }

   return FUNC_14(VAR_0, VAR_1);
}
