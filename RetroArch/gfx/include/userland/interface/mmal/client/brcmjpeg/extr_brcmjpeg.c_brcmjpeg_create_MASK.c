
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int init; int ref_count; int sema; int process_lock; int lock; scalar_t__ type; } ;
typedef scalar_t__ BRCMJPEG_TYPE_T ;
typedef TYPE_1__ BRCMJPEG_T ;
typedef scalar_t__ BRCMJPEG_STATUS_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_1__**) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (int *) ;

BRCMJPEG_STATUS_T FUNC_14(BRCMJPEG_TYPE_T VAR_8, BRCMJPEG_T **VAR_9)
{
   BRCMJPEG_STATUS_T VAR_10 = VAR_1;
   BRCMJPEG_T **VAR_11;

   if (VAR_8 == VAR_2)
      VAR_11 = &VAR_5;
   else
      VAR_11 = &VAR_4;

   FUNC_11(&VAR_7, VAR_6);
   FUNC_0();
   if (!*VAR_11)
   {
      int VAR_12, VAR_13, VAR_14;
      *VAR_11 = FUNC_7(sizeof(BRCMJPEG_T), 1);
      if (!*VAR_11)
      {
         FUNC_2();
         return VAR_0;
      }
      (*VAR_11)->type = VAR_8;
      VAR_12 = FUNC_9(&(*VAR_11)->lock, "brcmjpeg lock") != VAR_3;
      VAR_13 = FUNC_9(&(*VAR_11)->process_lock, "brcmjpeg process lock") != VAR_3;
      VAR_14 = FUNC_12(&(*VAR_11)->sema, "brcmjpeg sema", 0) != VAR_3;
      if (VAR_12 | VAR_13 | VAR_14)
      {
         if (VAR_12) FUNC_10(&(*VAR_11)->lock);
         if (VAR_13) FUNC_10(&(*VAR_11)->process_lock);
         if (VAR_14) FUNC_13(&(*VAR_11)->sema);
         FUNC_8(VAR_11);
         FUNC_2();
         return VAR_0;
      }
   }
   (*VAR_11)->ref_count++;
   FUNC_2();

   FUNC_1(*VAR_11);
   if (!(*VAR_11)->init)
   {
      if (VAR_8 == VAR_2)
         VAR_10 = FUNC_5(*VAR_11);
      else
         VAR_10 = FUNC_4(*VAR_11);

      (*VAR_11)->init = VAR_10 == VAR_1;
   }
   FUNC_3(*VAR_11);

   if (VAR_10 != VAR_1)
      FUNC_6(*VAR_11);

   *VAR_9 = *VAR_11;
   return VAR_10;
}
