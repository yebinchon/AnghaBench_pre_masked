
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ip_struct ;
struct TYPE_4__ {int carttype; char const* mpegpath; int * cdi; } ;
typedef TYPE_1__ Cs2 ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

int FUNC_7(int VAR_4, int VAR_5, const char *VAR_6, const char *VAR_7, const char *VAR_8, const char *VAR_9) {
   int VAR_10;

   if ((VAR_2 = (Cs2 *) FUNC_5(sizeof(Cs2))) == ((void*)0))
      return -1;
   FUNC_6(VAR_2, 0, sizeof(*VAR_2));

   VAR_2->carttype = VAR_4;
   VAR_2->mpegpath = VAR_7;
   VAR_2->cdi=((void*)0);

   if ((VAR_10 = FUNC_0(VAR_5, VAR_6)) != 0)
      return VAR_10;

   FUNC_1();


   if(VAR_2->carttype == VAR_1)
   {
      if ((VAR_10 = FUNC_3(VAR_8, VAR_9)) != 0)
         return VAR_10;
   }
   else if (VAR_2->carttype == VAR_0)
   {
      if ((VAR_10 = FUNC_2(VAR_8, VAR_9)) != 0)
         return VAR_10;
   }

   if ((VAR_3 = (ip_struct *) FUNC_4(sizeof(ip_struct), 1)) == ((void*)0))
      return -1;

   return 0;
}
