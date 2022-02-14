
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ menu_is_alive; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,unsigned int,unsigned int,int ,void const*) ;
 void* FUNC_2 (int ,char*,size_t*) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 void* VAR_3 ;
 int FUNC_7 (int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_8 (TYPE_1__*,int *,char const*,int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_11(void *VAR_7, const void *VAR_8,
      unsigned VAR_9, unsigned VAR_10, uint64_t VAR_11,
      unsigned VAR_12, const char *VAR_13, video_frame_info_t *VAR_14)
{
   size_t VAR_15 = 0;
   void *VAR_16 = ((void*)0);
   const void *VAR_17 = VAR_8;
   unsigned VAR_18 = 0;
   unsigned VAR_19 = 0;
   bool VAR_20 = 1;

   (void)VAR_7;
   (void)VAR_8;
   (void)VAR_9;
   (void)VAR_10;
   (void)VAR_12;
   (void)VAR_13;

   if (!VAR_8 || !VAR_9 || !VAR_10)
      return 1;

   if ( VAR_6 != VAR_9 ||
         VAR_4 != VAR_10 ||
         VAR_5 != VAR_12)
   {
      if (VAR_9 > 4 && VAR_10 > 4)
      {
         VAR_6 = VAR_9;
         VAR_4 = VAR_10;
         VAR_5 = VAR_12;
         FUNC_6(((void*)0));
         FUNC_5();
      }
   }

   if (!VAR_0)
      return 1;

   if (VAR_3 && VAR_14->menu_is_alive)
      VAR_17 = VAR_3;

   VAR_18 = FUNC_4(VAR_0);
   VAR_19 = FUNC_3(VAR_0);

   if ( VAR_17 == VAR_8 &&
         VAR_9 == 4 &&
         VAR_10 == 4 &&
         (VAR_9 < VAR_18 && VAR_10 < VAR_19))
      VAR_20 = 0;

   if (VAR_14->menu_is_alive)
      VAR_20 = 0;

   FUNC_0(VAR_0);





   if (VAR_13)
      FUNC_8(VAR_14, ((void*)0), VAR_13, ((void*)0));

   if (VAR_20)
   {
      FUNC_1(VAR_0, 0, 0,
            VAR_18,
            VAR_19,
            VAR_2, VAR_17);

      VAR_16 = FUNC_2(VAR_0, "caca", &VAR_15);

      if (VAR_16)
      {
         if (VAR_15)
            FUNC_7(VAR_1);

         FUNC_9(VAR_16);
      }
   }

   return 1;
}
