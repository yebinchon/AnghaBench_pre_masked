
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int master; scalar_t__ magic; } ;
struct drm_device {int dummy; } ;
struct drm_auth {scalar_t__ magic; } ;
typedef scalar_t__ drm_magic_t ;
typedef int DEFINE_SPINLOCK ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,struct drm_file*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_0, void *VAR_1, struct drm_file *VAR_2)
{
 static drm_magic_t VAR_3 = 0;
 static DEFINE_SPINLOCK(VAR_4);
 struct drm_auth *VAR_5 = VAR_1;


 if (VAR_2->magic) {
  VAR_5->magic = VAR_2->magic;
 } else {
  do {
   FUNC_3(&VAR_4);
   if (!VAR_3)
    ++VAR_3;
   VAR_5->magic = VAR_3++;
   FUNC_4(&VAR_4);
  } while (FUNC_2(VAR_2->master, VAR_5->magic));
  VAR_2->magic = VAR_5->magic;
  FUNC_1(VAR_2->master, VAR_2, VAR_5->magic);
 }

 FUNC_0("%u\n", VAR_5->magic);

 return 0;
}
