
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ tmpbuf_ptr; int source; int rate; int tmpbuf; } ;
typedef TYPE_1__ al_t ;
typedef int ALuint ;
typedef scalar_t__ ALint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int *) ;
 size_t FUNC_5 (TYPE_1__*,int const*,size_t) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static ssize_t FUNC_7(void *VAR_5, const void *VAR_6, size_t VAR_7)
{
   al_t *VAR_8 = (al_t*)VAR_5;
   const uint8_t *VAR_9 = (const uint8_t*)VAR_6;
   size_t VAR_10 = 0;

   while (VAR_7)
   {
      ALint VAR_11;
      ALuint VAR_12;
      size_t VAR_13 = FUNC_5(VAR_8, VAR_9, VAR_7);

      VAR_10 += VAR_13;
      VAR_9 += VAR_13;
      VAR_7 -= VAR_13;

      if (VAR_8->tmpbuf_ptr != VAR_4)
         break;

      if (!FUNC_6(VAR_8, &VAR_12))
         break;

      FUNC_0(VAR_12, VAR_0, VAR_8->tmpbuf, VAR_4, VAR_8->rate);
      VAR_8->tmpbuf_ptr = 0;
      FUNC_4(VAR_8->source, 1, &VAR_12);
      if (FUNC_1() != VAR_1)
         return -1;

      FUNC_2(VAR_8->source, VAR_3, &VAR_11);
      if (VAR_11 != VAR_2)
         FUNC_3(VAR_8->source);

      if (FUNC_1() != VAR_1)
         return -1;
   }

   return VAR_10;
}
