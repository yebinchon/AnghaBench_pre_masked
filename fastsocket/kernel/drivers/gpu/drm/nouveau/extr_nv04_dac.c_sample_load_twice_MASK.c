
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_timer {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_timer* FUNC_1 (struct nouveau_device*) ;
 int FUNC_2 (struct nouveau_timer*,int,int ,int,int) ;
 int FUNC_3 (struct nouveau_device*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_4, bool VAR_5[2])
{
 struct nouveau_device *VAR_6 = FUNC_0(VAR_4);
 struct nouveau_timer *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  bool VAR_9, VAR_10, VAR_11;
  int VAR_12 = 0;
  if (!FUNC_2(VAR_7, 10000000,
        VAR_3,
        0x00000001, 0x00000000))
   return -VAR_0;
  if (!FUNC_2(VAR_7, 10000000,
        VAR_3,
        0x00000001, 0x00000001))
   return -VAR_0;
  if (!FUNC_2(VAR_7, 10000000,
        VAR_3,
        0x00000001, 0x00000000))
   return -VAR_0;

  FUNC_4(100);

  VAR_9 = FUNC_3(VAR_6, VAR_2) & 0x10;


  do {
   FUNC_4(100);
   VAR_10 = FUNC_3(VAR_6, VAR_2) & 0x10;
   if (VAR_9 != VAR_10) {
    VAR_11 =
     FUNC_3(VAR_6, VAR_2) & 0x10;
    if (VAR_10 == VAR_11) {


     VAR_9 = VAR_10;

     VAR_10 = !VAR_9;
    }
   }
  } while ((VAR_9 != VAR_10) && ++VAR_12 < VAR_1);

  if (VAR_12 == VAR_1)

   VAR_5[VAR_8] = 0;
  else
   VAR_5[VAR_8] = VAR_9;
 }

 return 0;
}
