
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int free_mb; int total_mb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

int FUNC_1(int *VAR_7)
{
 int VAR_8;

 *VAR_7 = VAR_5;
 if (VAR_6 == VAR_1)
 {
  if (*VAR_7 < 0 || *VAR_7 >= VAR_3.count)

  {
   return VAR_0;
  }
 }
 else
 {
  if (*VAR_7 >= VAR_3.count)
  {
   *VAR_7 = 0;
  }

  if (!FUNC_0(VAR_4 [*VAR_7].total_mb, VAR_4 [*VAR_7].free_mb, VAR_2))


  {
   for (VAR_8=0; VAR_8<VAR_3.count; VAR_8++)
   {
    if (FUNC_0( VAR_4[VAR_8].total_mb, VAR_4[VAR_8].free_mb, VAR_2))



    {
     *VAR_7 = VAR_8;
     VAR_5 = VAR_8;
     break;
    }
   }

   if (VAR_8 == VAR_3.count)
   {
    return VAR_0;
   }
  }

  VAR_5++;
  if (VAR_5 >= VAR_3.count)
  {
   VAR_5 = 0;
  }
 }

 return 0;
}
