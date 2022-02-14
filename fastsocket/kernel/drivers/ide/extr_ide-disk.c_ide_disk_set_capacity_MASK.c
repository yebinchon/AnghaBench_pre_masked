
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u16 ;
struct TYPE_5__ {int dev_flags; scalar_t__ capacity64; int * id; int probed_capacity; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static u64 FUNC_5(ide_drive_t *VAR_2, u64 VAR_3)
{
 u64 VAR_4 = FUNC_4(VAR_3, VAR_2->probed_capacity);
 u16 *VAR_5 = VAR_2->id;
 int VAR_6 = FUNC_1(VAR_5);

 if ((VAR_2->dev_flags & VAR_0) == 0 ||
     FUNC_0(VAR_5) == 0)
  goto out;





 VAR_3 = FUNC_2(VAR_2, VAR_6);
 if (VAR_3 == 0)
  goto out;

 VAR_4 = FUNC_3(VAR_2, VAR_4, VAR_6);
 if (VAR_4) {

  VAR_2->dev_flags |= VAR_1;
  return VAR_4;
 }
out:
 return VAR_2->capacity64;
}
