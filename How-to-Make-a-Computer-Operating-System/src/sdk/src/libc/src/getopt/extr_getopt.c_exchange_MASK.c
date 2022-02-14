
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _getopt_data {int __first_nonopt; int __last_nonopt; int optind; scalar_t__ __nonoption_flags_len; int __nonoption_flags_max_len; } ;


 int FUNC_0 (int,int) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char,int) ;

__attribute__((used)) static void
FUNC_4 (char **VAR_1, struct _getopt_data *VAR_2)
{
  int VAR_3 = VAR_2->__first_nonopt;
  int VAR_4 = VAR_2->__last_nonopt;
  int VAR_5 = VAR_2->optind;
  char *VAR_6;
  while (VAR_5 > VAR_4 && VAR_4 > VAR_3)
    {
      if (VAR_5 - VAR_4 > VAR_4 - VAR_3)
 {

   int VAR_7 = VAR_4 - VAR_3;
   register int VAR_8;


   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
     {
       VAR_6 = VAR_1[VAR_3 + VAR_8];
       VAR_1[VAR_3 + VAR_8] = VAR_1[VAR_5 - (VAR_4 - VAR_3) + VAR_8];
       VAR_1[VAR_5 - (VAR_4 - VAR_3) + VAR_8] = VAR_6;
       FUNC_0 (VAR_3 + VAR_8, VAR_5 - (VAR_4 - VAR_3) + VAR_8);
     }

   VAR_5 -= VAR_7;
 }
      else
 {

   int VAR_9 = VAR_5 - VAR_4;
   register int VAR_10;


   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
     {
       VAR_6 = VAR_1[VAR_3 + VAR_10];
       VAR_1[VAR_3 + VAR_10] = VAR_1[VAR_4 + VAR_10];
       VAR_1[VAR_4 + VAR_10] = VAR_6;
       FUNC_0 (VAR_3 + VAR_10, VAR_4 + VAR_10);
     }

   VAR_3 += VAR_9;
 }
    }



  VAR_2->__first_nonopt += (VAR_2->optind - VAR_2->__last_nonopt);
  VAR_2->__last_nonopt = VAR_2->optind;
}
