
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct drm_connector {int bad_edid_counter; TYPE_1__* dev; int null_edid_counter; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int*,int,int) ;
 scalar_t__ FUNC_2 (int*,int,int) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int,int ) ;
 int* FUNC_7 (int*,int,int ) ;

__attribute__((used)) static u8 *
FUNC_8(struct drm_connector *VAR_4, struct i2c_adapter *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 u8 *VAR_9, *VAR_10;
 bool VAR_11 = !VAR_4->bad_edid_counter || (VAR_3 & VAR_0);

 if ((VAR_9 = FUNC_6(VAR_1, VAR_2)) == ((void*)0))
  return ((void*)0);


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (FUNC_1(VAR_5, VAR_9, 0, VAR_1))
   goto out;
  if (FUNC_2(VAR_9, 0, VAR_11))
   break;
  if (VAR_6 == 0 && FUNC_3(VAR_9, VAR_1)) {
   VAR_4->null_edid_counter++;
   goto carp;
  }
 }
 if (VAR_6 == 4)
  goto carp;


 if (VAR_9[0x7e] == 0)
  return VAR_9;

 VAR_10 = FUNC_7(VAR_9, (VAR_9[0x7e] + 1) * VAR_1, VAR_2);
 if (!VAR_10)
  goto out;
 VAR_9 = VAR_10;

 for (VAR_7 = 1; VAR_7 <= VAR_9[0x7e]; VAR_7++) {
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   if (FUNC_1(VAR_5,
      VAR_9 + (VAR_8 + 1) * VAR_1,
      VAR_7, VAR_1))
    goto out;
   if (FUNC_2(VAR_9 + (VAR_8 + 1) * VAR_1, VAR_7, VAR_11)) {
    VAR_8++;
    break;
   }
  }

  if (VAR_6 == 4 && VAR_11) {
   FUNC_0(VAR_4->dev->dev,
    "%s: Ignoring invalid EDID block %d.\n",
    FUNC_4(VAR_4), VAR_7);

   VAR_4->bad_edid_counter++;
  }
 }

 if (VAR_8 != VAR_9[0x7e]) {
  VAR_9[VAR_1-1] += VAR_9[0x7e] - VAR_8;
  VAR_9[0x7e] = VAR_8;
  VAR_10 = FUNC_7(VAR_9, (VAR_8 + 1) * VAR_1, VAR_2);
  if (!VAR_10)
   goto out;
  VAR_9 = VAR_10;
 }

 return VAR_9;

carp:
 if (VAR_11) {
  FUNC_0(VAR_4->dev->dev, "%s: EDID block %d invalid.\n",
    FUNC_4(VAR_4), VAR_7);
 }
 VAR_4->bad_edid_counter++;

out:
 FUNC_5(VAR_9);
 return ((void*)0);
}
