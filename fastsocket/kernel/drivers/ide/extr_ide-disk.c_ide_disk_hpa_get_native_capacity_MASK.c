
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ capacity64; int id; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static u64 FUNC_2(ide_drive_t *VAR_1, int VAR_2)
{
 u64 VAR_3, VAR_4;

 VAR_3 = VAR_1->capacity64;
 VAR_4 = FUNC_1(VAR_1, VAR_2);

 if (FUNC_0(VAR_1->id, VAR_0)) {




  if (VAR_4 == VAR_3 + 1)
   VAR_4--;
 }

 return VAR_4;
}
