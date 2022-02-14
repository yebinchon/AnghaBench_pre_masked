
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Display ;
typedef scalar_t__ Atom ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,int ,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__*,int*,unsigned long*,unsigned long*,unsigned char**) ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static bool FUNC_4(Display *VAR_5, Atom VAR_6)
{
   Atom VAR_7 = FUNC_3(VAR_5, "_NET_SUPPORTED", VAR_2);
   Atom VAR_8;
   int VAR_9;
   unsigned long VAR_10;
   unsigned long VAR_11;
   Atom *VAR_12;
   int VAR_13;

   if (VAR_7 == VAR_1)
      return 0;

   FUNC_2(VAR_5, FUNC_0(VAR_5), VAR_7,
         0, VAR_3, VAR_0, VAR_4, &VAR_8, &VAR_9,&VAR_10,
         &VAR_11, (unsigned char **) &VAR_12);

   if (!VAR_12 || VAR_8 != VAR_4)
      return 0;

   for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
   {
      if (VAR_12[VAR_13] == VAR_6)
      {
         FUNC_1(VAR_12);
         return 1;
      }
   }

   FUNC_1(VAR_12);

   return 0;
}
