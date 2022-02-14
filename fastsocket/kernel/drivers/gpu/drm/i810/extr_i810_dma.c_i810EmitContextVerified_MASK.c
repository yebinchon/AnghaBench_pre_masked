
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * dev_private; } ;
typedef int drm_i810_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int volatile) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_6,
        volatile unsigned int *VAR_7)
{
 drm_i810_private_t *VAR_8 = VAR_6->dev_private;
 int VAR_9, VAR_10 = 0;
 unsigned int VAR_11;
 VAR_5;

 FUNC_1(VAR_4);

 FUNC_2(VAR_0);
 FUNC_2(VAR_7[VAR_2]);

 FUNC_2(VAR_1);
 FUNC_2(VAR_7[VAR_3]);

 for (VAR_9 = 4; VAR_9 < VAR_4; VAR_9++) {
  VAR_11 = VAR_7[VAR_9];

  if ((VAR_11 & (7 << 29)) == (3 << 29) &&
      (VAR_11 & (0x1f << 24)) < (0x1d << 24)) {
   FUNC_2(VAR_11);
   VAR_10++;
  } else
   FUNC_3("constext state dropped!!!\n");
 }

 if (VAR_10 & 1)
  FUNC_2(0);

 FUNC_0();
}
