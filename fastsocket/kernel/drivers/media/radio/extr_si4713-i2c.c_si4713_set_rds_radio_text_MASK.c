
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int radio_text; } ;
struct si4713_device {int mutex; TYPE_1__ rds_info; int power_state; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct si4713_device*,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct si4713_device *VAR_7, char *VAR_8)
{
 int VAR_9 = 0, VAR_10;
 u16 VAR_11 = 0;
 u8 VAR_12 = 0, VAR_13 = 0;
 s8 VAR_14;

 FUNC_1(&VAR_7->mutex);

 if (!VAR_7->power_state)
  goto copy;

 VAR_9 = FUNC_3(VAR_7, VAR_1, 0, 0, 0, &VAR_14);
 if (VAR_9 < 0)
  goto unlock;

 if (!FUNC_4(VAR_8))
  goto copy;

 do {



  if (VAR_11 < (VAR_6 *
   VAR_5)) {
   for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
    if (!VAR_8[VAR_11 + VAR_10] || VAR_8[VAR_11 + VAR_10] ==
     VAR_3) {
     VAR_8[VAR_11 + VAR_10] = VAR_3;
     VAR_13 = 1;
     break;
    }
   }
  }

  VAR_9 = FUNC_3(VAR_7, VAR_2,
    FUNC_0(VAR_4, VAR_12++),
    FUNC_0(VAR_8[VAR_11], VAR_8[VAR_11 + 1]),
    FUNC_0(VAR_8[VAR_11 + 2], VAR_8[VAR_11 + 3]),
    &VAR_14);
  if (VAR_9 < 0)
   goto unlock;

  VAR_11 += VAR_5;

  if (VAR_13)
   break;
 } while (VAR_14 > 0);

copy:
 FUNC_5(VAR_7->rds_info.radio_text, VAR_8, VAR_0);

unlock:
 FUNC_2(&VAR_7->mutex);
 return VAR_9;
}
