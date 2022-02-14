
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int request; size_t size; int start_sem; int * buffer; int completed_sem; } ;
struct TYPE_6__ {int height; int width; TYPE_1__ capture; } ;
typedef TYPE_2__ RASPITEX_STATE ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,TYPE_2__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int *,size_t) ;

int FUNC_8(RASPITEX_STATE *VAR_1, FILE *VAR_2)
{
   int VAR_3 = 0;
   uint8_t *VAR_4 = ((void*)0);
   size_t VAR_5 = 0;

   FUNC_4("%s: state %p file %p", VAR_0,
                  VAR_1, VAR_2);

   if (VAR_1 && VAR_2)
   {

      FUNC_6(&VAR_1->capture.start_sem);
      VAR_1->capture.request = 1;


      FUNC_6(&VAR_1->capture.completed_sem);


      VAR_4 = VAR_1->capture.buffer;
      VAR_5 = VAR_1->capture.size;

      VAR_1->capture.request = 0;
      VAR_1->capture.buffer = 0;
      VAR_1->capture.size = 0;


      FUNC_5(&VAR_1->capture.start_sem);
   }
   if (VAR_5 == 0 || ! VAR_4)
   {
      FUNC_3("%s: capture failed", VAR_0);
      VAR_3 = -1;
      goto end;
   }

   FUNC_2(VAR_4, VAR_5);
   VAR_3 = FUNC_7(VAR_2, VAR_1->width, VAR_1->height, VAR_4, VAR_5);
   FUNC_0(VAR_2);

end:
   FUNC_1(VAR_4);
   return VAR_3;
}
