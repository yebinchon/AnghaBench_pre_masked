
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wm8400 {int (* read_dev ) (int ,int,int,int *) ;int * reg_cache; int io_data; } ;
struct TYPE_2__ {scalar_t__ vol; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int ,int,int,int *) ;

__attribute__((used)) static int FUNC_5(struct wm8400 *VAR_1, u8 VAR_2, int VAR_3, u16 *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 FUNC_1(VAR_2 + VAR_3 - 1 > FUNC_0(VAR_1->reg_cache));


 for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_3; VAR_5++)
  if (VAR_0[VAR_5].vol) {
   VAR_6 = VAR_1->read_dev(VAR_1->io_data, VAR_2,
            VAR_3, VAR_4);
   if (VAR_6 != 0)
    return VAR_6;
   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    VAR_4[VAR_5] = FUNC_2(VAR_4[VAR_5]);

   return 0;
  }


 FUNC_3(VAR_4, &VAR_1->reg_cache[VAR_2], VAR_3 * sizeof(u16));

 return 0;
}
