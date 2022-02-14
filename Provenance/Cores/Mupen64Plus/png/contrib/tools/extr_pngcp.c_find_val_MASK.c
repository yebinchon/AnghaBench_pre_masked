
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct display {size_t* entry; scalar_t__ errset; } ;
typedef size_t png_byte ;
struct TYPE_4__ {size_t value_count; int name; TYPE_1__* values; } ;
struct TYPE_3__ {scalar_t__* name; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct display*,int ,char*,int ,int,char const*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__*,char const*,size_t) ;
 long FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_4(struct display *VAR_7, png_byte VAR_8, const char *VAR_9, size_t VAR_10)




{
   int VAR_11 = VAR_1, VAR_12 = VAR_2;
   png_byte VAR_13, VAR_14 = 0;

   for (VAR_13=1U; VAR_13<=VAR_4[VAR_8].value_count; ++VAR_13)
   {
      if (FUNC_2(VAR_4[VAR_8].values[VAR_13-1U].name, VAR_9, VAR_10) == 0 &&
          VAR_4[VAR_8].values[VAR_13-1U].name[VAR_10] == 0)
      {
         VAR_7->entry[VAR_8] = VAR_13;
         return VAR_4[VAR_8].values[VAR_13-1U].value;
      }
      else if (VAR_4[VAR_8].values[VAR_13-1U].name == VAR_6)
         VAR_11 = VAR_4[VAR_8].values[VAR_13-1U].value, VAR_14 = VAR_13;
      else if (VAR_4[VAR_8].values[VAR_13-1U].name == VAR_5)
         VAR_12 = VAR_4[VAR_8].values[VAR_13-1U].value;
   }


   if (VAR_14 > 0)
   {
      char *VAR_15 = ((void*)0);
      long VAR_16 = FUNC_3(VAR_9, &VAR_15, 0);

      if (VAR_15 == VAR_9+VAR_10 && VAR_16 >= VAR_11 && VAR_16 <= VAR_12)
      {
         VAR_7->entry[VAR_8] = VAR_14;
         return (int) VAR_16;
      }
   }

   FUNC_1(VAR_7, VAR_7->errset ? VAR_0 : VAR_3,
         "%s: unknown value setting '%.*s'", VAR_4[VAR_8].name,
         (int) VAR_10, VAR_9);
   FUNC_0();
}
