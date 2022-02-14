
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int cache_info ;
struct TYPE_15__ {int send_any; TYPE_1__* entries; } ;
struct TYPE_12__ {scalar_t__ element_array; } ;
struct TYPE_14__ {TYPE_2__* attrib; int cache; TYPE_3__ bound_buffer; int (* render_callback ) () ;scalar_t__ default_framebuffer; } ;
struct TYPE_13__ {int send; char* start; char const* end; int next; } ;
struct TYPE_11__ {scalar_t__ buffer; char* pointer; int stride; int type; int size; scalar_t__ enabled; } ;
struct TYPE_10__ {int cache_offset; int has_interlock; } ;
typedef TYPE_4__ MERGE_INFO_T ;
typedef char GLvoid ;
typedef scalar_t__ GLuint ;
typedef int GLsizei ;
typedef scalar_t__ GLenum ;
typedef TYPE_5__ GLXX_CLIENT_STATE_T ;
typedef TYPE_6__ GLXX_CACHE_INFO_T ;
typedef int CLIENT_THREAD_STATE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ,int ,int ,TYPE_6__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_9 (int,int,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (int *,int *,char const*,int,scalar_t__) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(CLIENT_THREAD_STATE_T *VAR_10, GLXX_CLIENT_STATE_T *VAR_11, GLenum VAR_12, GLsizei VAR_13, GLenum VAR_14, const GLvoid *VAR_15)
{
   uint32_t VAR_16 = 0;
   GLuint VAR_17;
   bool VAR_18;
   int VAR_19 = 0;
   int VAR_20 = 0;
   int VAR_21 = 0;
   int VAR_22 = 0;
   int VAR_23, VAR_24, VAR_25;
   MERGE_INFO_T VAR_26[VAR_4];
   GLXX_CACHE_INFO_T VAR_27;

   FUNC_15(VAR_11 != ((void*)0));

   if (VAR_11->render_callback && (FUNC_0(VAR_10) || VAR_11->default_framebuffer))
      VAR_11->render_callback();

   if(VAR_13<0)
   {
      FUNC_10(VAR_11, VAR_5);
      return;
   }

   VAR_27.send_any = 0;
   for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
   {
      if (VAR_11->attrib[VAR_23].enabled && VAR_11->attrib[VAR_23].buffer == 0)
      {
         VAR_27.send_any = 1;


         if (VAR_11->attrib[VAR_23].pointer == ((void*)0))
            return;
      }
   }

   if(VAR_14==0)
   {
      VAR_22 = (int)VAR_15;
      VAR_16 = VAR_22;
      VAR_17 = 0;
      VAR_18 = 0;
      VAR_21 = 0;

      VAR_19 = VAR_22 + VAR_13 - 1;
   }
   else
   {
      VAR_18 = VAR_13 >= 0 && VAR_11->bound_buffer.element_array == 0;
      VAR_17 = VAR_11->bound_buffer.element_array;

      VAR_20 = FUNC_7(VAR_13 * FUNC_12( (int) VAR_14 ));
      if (VAR_18)
      {
         VAR_19 = FUNC_9(VAR_13, FUNC_12( (int)VAR_14 ), VAR_15);
         VAR_21 = FUNC_11(VAR_10, &VAR_11->cache, VAR_15, VAR_20, 0);
         VAR_16 = VAR_21 + FUNC_13(VAR_0, VAR_7);
      }
      else
      {
         VAR_21 = 0;
         VAR_16 = (uint32_t)VAR_15;

         if (VAR_27.send_any)
            VAR_19 = FUNC_4(FUNC_1(
               VAR_9,
               VAR_10,
               VAR_3,
               FUNC_5(VAR_13),
               FUNC_3(VAR_14),
               FUNC_6(VAR_16)));
         else
            VAR_19 = -1;
      }
   }

   if (VAR_27.send_any)
   {

      for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
      {
         if (VAR_11->attrib[VAR_23].enabled && VAR_11->attrib[VAR_23].buffer == 0)
         {
            VAR_26[VAR_23].send = 1;
            VAR_26[VAR_23].start = VAR_11->attrib[VAR_23].pointer;
            VAR_26[VAR_23].end = (const char *)VAR_11->attrib[VAR_23].pointer + FUNC_8(VAR_19, VAR_11->attrib[VAR_23].size, VAR_11->attrib[VAR_23].type, VAR_11->attrib[VAR_23].stride);
            VAR_26[VAR_23].next = -1;

            for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++)
            {
               if (VAR_26[VAR_24].send && VAR_26[VAR_24].next == -1)
               {
                  const char *VAR_28 = VAR_26[VAR_23].start < VAR_26[VAR_24].start ? VAR_26[VAR_23].start : VAR_26[VAR_24].start;
                  const char *VAR_29 = VAR_26[VAR_23].end > VAR_26[VAR_24].end ? VAR_26[VAR_23].end : VAR_26[VAR_24].end;

                  if ((uint32_t)(VAR_29 - VAR_28) < (uint32_t)((VAR_26[VAR_23].end - VAR_26[VAR_23].start) + (VAR_26[VAR_24].end - VAR_26[VAR_24].start)))
                  {
                     if (VAR_26[VAR_23].start < VAR_26[VAR_24].start)
                     {
                        VAR_25 = VAR_23;
                        while (VAR_26[VAR_25].next != -1)
                           VAR_25 = VAR_26[VAR_25].next;
                        VAR_26[VAR_25].end = VAR_29;
                        VAR_26[VAR_24].next = VAR_23;
                     }
                     else
                     {
                        FUNC_15(VAR_26[VAR_24].next == -1);
                        VAR_26[VAR_24].end = VAR_29;
                        VAR_26[VAR_23].next = VAR_24;
                     }
                  }
               }
            }
         }
         else
         {
            VAR_26[VAR_23].send = 0;
         }
      }


      for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
      {
         if (VAR_26[VAR_23].send && VAR_26[VAR_23].next == -1)
         {
            int VAR_30 = FUNC_11(VAR_10, &VAR_11->cache, VAR_26[VAR_23].start, VAR_26[VAR_23].end - VAR_26[VAR_23].start, VAR_1 + VAR_23);
            if (VAR_30 == -1)
            {
               FUNC_10(VAR_11, VAR_6);
               return;
            }
            VAR_27.entries[VAR_23].cache_offset = VAR_30 + FUNC_13(VAR_0, VAR_7);
            VAR_27.entries[VAR_23].has_interlock = 1;
         }
         else
         {
            VAR_27.entries[VAR_23].cache_offset = ~0;
         }
      }


      for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++)
      {
         if (VAR_26[VAR_23].send && VAR_26[VAR_23].next != -1)
         {
            VAR_25 = VAR_23;
            while (VAR_26[VAR_25].next != -1)
               VAR_25 = VAR_26[VAR_25].next;

            FUNC_15(VAR_25 != -1);
            FUNC_15(VAR_27.entries[VAR_25].cache_offset != ~0);
            VAR_27.entries[VAR_23].cache_offset = VAR_27.entries[VAR_25].cache_offset + ((size_t)VAR_11->attrib[VAR_23].pointer - (size_t)VAR_11->attrib[VAR_25].pointer);
            VAR_27.entries[VAR_23].has_interlock = 0;
         }
      }


      FUNC_2(VAR_8,
                VAR_10,
                VAR_2,
                FUNC_3(VAR_12),
                FUNC_5(VAR_13),
                FUNC_3(VAR_14),
                FUNC_6(VAR_16),
                &VAR_27,
                sizeof(VAR_27));
   }
   else
   {

      FUNC_2(VAR_8,
                VAR_10,
                VAR_2,
                FUNC_3(VAR_12),
                FUNC_5(VAR_13),
                FUNC_3(VAR_14),
                FUNC_6(VAR_16),
                &VAR_27,
                4 );
   }
}
