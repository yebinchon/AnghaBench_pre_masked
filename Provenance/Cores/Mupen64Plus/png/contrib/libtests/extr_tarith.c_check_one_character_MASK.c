
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int png_size_t ;
struct TYPE_10__ {size_t check_state; int at_start; int is_negative; size_t cnumber; int cdigits_in_state; int number_was_valid; int limit; scalar_t__ is_zero; int state; } ;
typedef TYPE_1__ checkfp_control ;
struct TYPE_11__ {char* number; int verbose; int ctimes; int limit; int cnoaccept; int cinvalid; int cmillions; } ;
typedef TYPE_2__ checkfp_command ;
struct TYPE_12__ {int tests; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__,int ) ;
 size_t VAR_0 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char,int ) ;
 size_t VAR_1 ;
 void** VAR_2 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char const*,int,int *,int*) ;
 size_t VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(checkfp_command *VAR_6, checkfp_control VAR_7, int VAR_8)
{


   png_size_t VAR_9 = 0;
   const char VAR_10 = (char)VAR_8;
   const int VAR_11 = FUNC_9(&VAR_10, 1, &VAR_7.state, &VAR_9);
   const int VAR_12 = (VAR_9 == 1);

   if (VAR_7.check_state != VAR_0 && FUNC_7(VAR_8) && VAR_8 != '0')
      VAR_7.is_zero = 0;

   if (VAR_7.check_state == VAR_3 && VAR_7.at_start && VAR_8 == '-')
      VAR_7.is_negative = 1;

   if (FUNC_8(VAR_8))
      VAR_6->number[VAR_7.cnumber++] = (char)VAR_8;
   else
   {
      VAR_6->number[VAR_7.cnumber++] = '<';
      VAR_6->number[VAR_7.cnumber++] = VAR_2[(VAR_8 >> 4) & 0xf];
      VAR_6->number[VAR_7.cnumber++] = VAR_2[VAR_8 & 0xf];
      VAR_6->number[VAR_7.cnumber++] = '>';
   }
   VAR_6->number[VAR_7.cnumber] = 0;

   if (VAR_6->verbose > 1)
      FUNC_5(VAR_5, "%s\n", VAR_6->number);

   if (++(VAR_6->ctimes) == 1000000)
   {
      if (VAR_6->verbose == 1)
         FUNC_6('.', VAR_5);
      VAR_6->ctimes = 0;
      ++(VAR_6->cmillions);
   }

   if (!VAR_11)
      ++(VAR_6->cinvalid);

   if (!VAR_12)
      ++(VAR_6->cnoaccept);


   if (VAR_9 != 0 && VAR_9 != 1)
   {
      FUNC_5(VAR_5, "%s: read beyond end of string (%lu)\n", VAR_6->number,
         (unsigned long)VAR_9);
      return 0;
   }




   if (FUNC_0(VAR_7.state) !=
      (VAR_11 && !VAR_7.is_zero && VAR_7.is_negative))
   {
      FUNC_5(VAR_5, "%s: negative when it is not\n", VAR_6->number);
      return 0;
   }

   if (FUNC_2(VAR_7.state) != (VAR_11 && VAR_7.is_zero))
   {
      FUNC_5(VAR_5, "%s: zero when it is not\n", VAR_6->number);
      return 0;
   }

   if (FUNC_1(VAR_7.state) !=
      (VAR_11 && !VAR_7.is_zero && !VAR_7.is_negative))
   {
      FUNC_5(VAR_5, "%s: positive when it is not\n", VAR_6->number);
      return 0;
   }


   if (FUNC_7(VAR_8))
   {
      if (!VAR_12)
      {
         FUNC_5(VAR_5, "%s: digit '%c' not accepted\n", VAR_6->number, VAR_8);
         return 0;
      }

      if (!VAR_11)
      {
         FUNC_5(VAR_5, "%s: saw a digit (%c) but number not valid\n",
            VAR_6->number, VAR_8);
         return 0;
      }

      ++VAR_7.cdigits_in_state;
      VAR_7.at_start = 0;
      VAR_7.number_was_valid = 1;





      if (VAR_7.cdigits_in_state < 1)
         return FUNC_3(VAR_6, VAR_7);

      else
         return FUNC_4(VAR_6, VAR_7,
            VAR_4[VAR_7.check_state].tests);
   }


   else if (((VAR_8 == '+' || VAR_8 == '-') && VAR_7.check_state != VAR_1 &&
               VAR_7.at_start) ||
            (VAR_8 == '.' && VAR_7.check_state == VAR_3) ||
            ((VAR_8 == 'e' || VAR_8 == 'E') && VAR_7.number_was_valid &&
               VAR_7.check_state != VAR_0))
   {
      if (!VAR_12)
      {
         FUNC_5(VAR_5, "%s: character '%c' not accepted\n", VAR_6->number, VAR_8);
         return 0;
      }


      if (VAR_11 && (VAR_7.check_state != VAR_3 || VAR_8 != '.'))
      {
         FUNC_5(VAR_5, "%s: saw a non-digit (%c) but number valid\n",
            VAR_6->number, VAR_8);
         return 0;
      }

      VAR_7.number_was_valid = VAR_11;





      if (VAR_7.check_state == VAR_3 && VAR_8 == '.')
      {
         VAR_7.check_state = VAR_1;
         VAR_7.at_start = !VAR_11;
         VAR_7.cdigits_in_state = 0;
         VAR_7.limit = VAR_6->limit;
         return FUNC_3(VAR_6, VAR_7);
      }

      else if (VAR_7.check_state < VAR_0 && (VAR_8 == 'e' || VAR_8 == 'E'))
      {
         VAR_7.check_state = VAR_0;
         VAR_7.at_start = 1;
         VAR_7.cdigits_in_state = 0;
         VAR_7.limit = VAR_6->limit;
         return FUNC_3(VAR_6, VAR_7);
      }


      else
      {
         if (VAR_8 != '-' && VAR_8 != '+')
         {
            FUNC_5(VAR_5, "checkfp: internal error (1)\n");
            return 0;
         }

         VAR_7.at_start = 0;
         return FUNC_3(VAR_6, VAR_7);
      }
   }


   else
   {
      if (VAR_12)
      {
         FUNC_5(VAR_5, "%s: character '%c' [0x%.2x] accepted\n", VAR_6->number,
            VAR_8, VAR_8);
         return 0;
      }

      if (VAR_11 != VAR_7.number_was_valid)
      {
         FUNC_5(VAR_5,
            "%s: character '%c' [0x%.2x] changed number validity\n", VAR_6->number,
            VAR_8, VAR_8);
         return 0;
      }




   }


   return 1;
}
