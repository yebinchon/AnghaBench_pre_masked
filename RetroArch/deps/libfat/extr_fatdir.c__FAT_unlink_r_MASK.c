
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
struct _reent {void* _errno; } ;
struct TYPE_18__ {int entryData; } ;
struct TYPE_17__ {int lock; int cache; scalar_t__ readOnly; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,char const*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (char const*) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (char const*,char) ;

int FUNC_14 (struct _reent *VAR_6, const char *VAR_7)
{
   PARTITION* VAR_8 = ((void*)0);
   DIR_ENTRY VAR_9;
   DIR_ENTRY VAR_10;
   uint32_t VAR_11;
   bool VAR_12;
   bool VAR_13 = 0;


   VAR_8 = FUNC_11 (VAR_7);
   if (VAR_8 == ((void*)0))
   {
      VAR_6->_errno = VAR_2;
      return -1;
   }


   if (VAR_8->readOnly)
   {
      VAR_6->_errno = VAR_5;
      return -1;
   }


   if (FUNC_13 (VAR_7, ':') != ((void*)0))
      VAR_7 = FUNC_13 (VAR_7, ':') + 1;
   if (FUNC_13 (VAR_7, ':') != ((void*)0))
   {
      VAR_6->_errno = VAR_0;
      return -1;
   }

   FUNC_10(&VAR_8->lock);


   if (!FUNC_1 (VAR_8, &VAR_9, VAR_7, ((void*)0)))
   {
      FUNC_12(&VAR_8->lock);
      VAR_6->_errno = VAR_3;
      return -1;
   }

   VAR_11 = FUNC_2 (VAR_8, VAR_9.entryData);


   if (FUNC_5 (&VAR_9))
   {
      VAR_12 = FUNC_3 (VAR_8, &VAR_10, VAR_11);

      while (VAR_12)
      {
         if (!FUNC_6 (&VAR_10))
         {

            FUNC_12(&VAR_8->lock);
            VAR_6->_errno = VAR_4;
            return -1;
         }
         VAR_12 = FUNC_4 (VAR_8, &VAR_10);
      }
   }

   if (FUNC_9(VAR_8, VAR_11))
   {

      if (!FUNC_8 (VAR_8, VAR_11))
      {
         VAR_6->_errno = VAR_1;
         VAR_13 = 1;
      }
   }


   if (!FUNC_7 (VAR_8, &VAR_9))
   {
      VAR_6->_errno = VAR_1;
      VAR_13 = 1;
   }


   if (!FUNC_0(VAR_8->cache))
   {
      VAR_6->_errno = VAR_1;
      VAR_13 = 1;
   }

   FUNC_12(&VAR_8->lock);
   if (VAR_13)
      return -1;
   return 0;
}
