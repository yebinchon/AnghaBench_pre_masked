
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int fid_objno; int fid_generation; } ;
struct TYPE_3__ {int* val; } ;
struct dyld_kernel_image_info {int load_addr; TYPE_2__ fsobjid; TYPE_1__ fsid; int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int,int,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(uint32_t VAR_3,
 struct dyld_kernel_image_info *VAR_4)
{
 FUNC_2(sizeof(VAR_4->uuid) >= 16);


 uint64_t *VAR_5 = (uint64_t *)&(VAR_4->uuid);

 FUNC_1(VAR_2,
  FUNC_0(VAR_0, VAR_1, VAR_3), VAR_5[0],
  VAR_5[1], VAR_4->load_addr,
  (uint64_t)VAR_4->fsid.val[0] | ((uint64_t)VAR_4->fsid.val[1] << 32),
  0);
 FUNC_1(VAR_2,
  FUNC_0(VAR_0, VAR_1, VAR_3 + 1),
  (uint64_t)VAR_4->fsobjid.fid_objno |
  ((uint64_t)VAR_4->fsobjid.fid_generation << 32),
  0, 0, 0, 0);
}
