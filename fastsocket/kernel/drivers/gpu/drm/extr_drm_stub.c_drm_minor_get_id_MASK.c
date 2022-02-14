
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int struct_mutex; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,int,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0, VAR_12 = 63;

 if (VAR_8 == VAR_0) {
                VAR_11 += 64;
                VAR_12 = VAR_11 + 127;
        } else if (VAR_8 == VAR_1) {
                VAR_11 += 128;
                VAR_12 = VAR_11 + 255;
        }

again:
 if (FUNC_2(&VAR_6, VAR_5) == 0) {
  FUNC_0("Out of memory expanding drawable idr\n");
  return -VAR_4;
 }
 FUNC_4(&VAR_7->struct_mutex);
 VAR_10 = FUNC_1(&VAR_6, ((void*)0),
    VAR_11, &VAR_9);
 FUNC_5(&VAR_7->struct_mutex);
 if (VAR_10 == -VAR_2)
  goto again;
 else if (VAR_10)
  return VAR_10;

 if (VAR_9 >= VAR_12) {
  FUNC_3(&VAR_6, VAR_9);
  return -VAR_3;
 }
 return VAR_9;
}
