
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buf {int dummy; } ;
struct TYPE_2__ {scalar_t__ mz_size; int mz_max; char* mz_name; void* mz_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* FUNC_0 (int,int,int ,char*) ;
 int FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_4[VAR_5].mz_size != 0; VAR_5++) {
  VAR_4[VAR_5].mz_zone =
    FUNC_0(VAR_4[VAR_5].mz_size,
     VAR_4[VAR_5].mz_max,
     VAR_1,
     VAR_4[VAR_5].mz_name);
  FUNC_1(VAR_4[VAR_5].mz_zone, VAR_2, VAR_0);
 }
 VAR_3 = FUNC_0(sizeof(struct buf), 32, VAR_1, "buf headers");
 FUNC_1(VAR_3, VAR_2, VAR_0);
}
