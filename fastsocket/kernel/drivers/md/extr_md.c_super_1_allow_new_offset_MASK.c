
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned long long sector; unsigned long long size; } ;
struct md_rdev {unsigned long long data_offset; int sb_start; TYPE_4__ badblocks; TYPE_2__* mddev; } ;
struct TYPE_7__ {int file_pages; } ;
struct bitmap {TYPE_3__ storage; } ;
struct TYPE_5__ {int offset; int file; } ;
struct TYPE_6__ {scalar_t__ minor_version; TYPE_1__ bitmap_info; struct bitmap* bitmap; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct md_rdev *VAR_1,
    unsigned long long VAR_2)
{

 struct bitmap *VAR_3;
 if (VAR_2 >= VAR_1->data_offset)
  return 1;



 if (VAR_1->mddev->minor_version == 0)
  return 1;







 if (VAR_1->sb_start + (32+4)*2 > VAR_2)
  return 0;
 VAR_3 = VAR_1->mddev->bitmap;
 if (VAR_3 && !VAR_1->mddev->bitmap_info.file &&
     VAR_1->sb_start + VAR_1->mddev->bitmap_info.offset +
     VAR_3->storage.file_pages * (VAR_0>>9) > VAR_2)
  return 0;
 if (VAR_1->badblocks.sector + VAR_1->badblocks.size > VAR_2)
  return 0;

 return 1;
}
