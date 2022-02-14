
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct radeon_bo {int dummy; } ;
struct r100_cs_track {TYPE_2__* textures; } ;
struct TYPE_4__ {unsigned int compress_format; unsigned long cpp; TYPE_1__* cube_info; } ;
struct TYPE_3__ {unsigned int width; unsigned int height; scalar_t__ offset; struct radeon_bo* robj; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned long FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 unsigned long FUNC_3 (struct radeon_bo*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_0,
         struct r100_cs_track *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;
 struct radeon_bo *VAR_6;
 unsigned long VAR_7;
 unsigned VAR_8 = VAR_1->textures[VAR_2].compress_format;

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  VAR_6 = VAR_1->textures[VAR_2].cube_info[VAR_3].robj;
  VAR_4 = VAR_1->textures[VAR_2].cube_info[VAR_3].width;
  VAR_5 = VAR_1->textures[VAR_2].cube_info[VAR_3].height;

  if (VAR_8) {
   VAR_7 = FUNC_2(VAR_8, VAR_4, VAR_5);
  } else
   VAR_7 = VAR_4 * VAR_5;
  VAR_7 *= VAR_1->textures[VAR_2].cpp;

  VAR_7 += VAR_1->textures[VAR_2].cube_info[VAR_3].offset;

  if (VAR_7 > FUNC_3(VAR_6)) {
   FUNC_0("Cube texture offset greater than object size %lu %lu\n",
      VAR_7, FUNC_3(VAR_6));
   FUNC_1(&VAR_1->textures[VAR_2]);
   return -1;
  }
 }
 return 0;
}
