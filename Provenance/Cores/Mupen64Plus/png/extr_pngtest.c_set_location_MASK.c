
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_chunk_data {int* location; int * info_ptr; } ;
typedef int png_structp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_1(png_structp VAR_4, struct user_chunk_data *VAR_5, int VAR_6)
{
   int VAR_7;

   if ((VAR_5->location[0] & VAR_6) != 0 || (VAR_5->location[1] & VAR_6) != 0)
      return 0;




   if (VAR_5->info_ptr == ((void*)0))
      VAR_7 = VAR_6 | VAR_1;

   else if (FUNC_0(VAR_4, VAR_5->info_ptr, VAR_0) != 0)
      VAR_7 = VAR_6 | VAR_2;

   else
      VAR_7 = VAR_6 | VAR_3;

   if (VAR_5->location[0] == 0)
      VAR_5->location[0] = VAR_7;

   else
      VAR_5->location[1] = VAR_7;

   return 1;
}
