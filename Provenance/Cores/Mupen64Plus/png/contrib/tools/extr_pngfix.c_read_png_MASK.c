
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* global; int jmpbuf; int status_code; } ;
struct control {TYPE_2__ file; } ;
typedef int png_uint_32 ;
typedef int * png_structp ;
typedef int * png_infop ;
struct TYPE_3__ {scalar_t__ verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int,char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ,struct control*,int ,int ) ;
 int FUNC_4 (int **,int **,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct control*,int ) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (int *) ;
 int VAR_4 ;
 int FUNC_16 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_17(struct control *VAR_7)



{
   png_structp VAR_8;
   png_infop VAR_9 = ((void*)0);
   volatile int VAR_10;

   VAR_8 = FUNC_3(VAR_2, VAR_7,
      VAR_3, VAR_6);

   if (VAR_8 == ((void*)0))
   {

      FUNC_1(&VAR_7->file, VAR_1, "OOM allocating png_struct");
      VAR_7->file.status_code |= VAR_0;
      return VAR_1;
   }

   VAR_10 = FUNC_16(VAR_7->file.jmpbuf);
   if (VAR_10 == 0)
   {
      FUNC_13(VAR_8, VAR_7, VAR_4);

      VAR_9 = FUNC_2(VAR_8);
      if (VAR_9 == ((void*)0))
         FUNC_5(VAR_8, "OOM allocating info structure");

      if (VAR_7->file.global->verbose)
         FUNC_0(VAR_5, " INFO\n");

      FUNC_8(VAR_8, VAR_9);

      {
        png_uint_32 VAR_11 = FUNC_6(VAR_8, VAR_9);
        int VAR_12 = FUNC_12(VAR_8);
        int VAR_13;

        FUNC_15(VAR_8);

        for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13)
        {
           png_uint_32 VAR_14 = VAR_11;




           while (VAR_14-- > 0)
              FUNC_9(VAR_8, ((void*)0), ((void*)0));
        }
      }

      if (VAR_7->file.global->verbose)
         FUNC_0(VAR_5, " END\n");


      FUNC_7(VAR_8, VAR_9);
   }

   FUNC_4(&VAR_8, &VAR_9, ((void*)0));
   return VAR_10;
}
