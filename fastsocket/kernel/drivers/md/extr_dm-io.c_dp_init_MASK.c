
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpages {int dummy; } ;
struct TYPE_4__ {int addr; int vma; int bvec; int pl; } ;
struct TYPE_3__ {int type; TYPE_2__ ptr; int offset; } ;
struct dm_io_request {TYPE_1__ mem; } ;






 int VAR_0 ;
 int FUNC_0 (struct dpages*,int ) ;
 int FUNC_1 (struct dpages*,int ) ;
 int FUNC_2 (struct dpages*,int ,int ) ;
 int FUNC_3 (struct dpages*,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_io_request *VAR_1, struct dpages *VAR_2)
{

 switch (VAR_1->mem.type) {
 case 129:
  FUNC_2(VAR_2, VAR_1->mem.ptr.pl, VAR_1->mem.offset);
  break;

 case 131:
  FUNC_0(VAR_2, VAR_1->mem.ptr.bvec);
  break;

 case 128:
  FUNC_3(VAR_2, VAR_1->mem.ptr.vma);
  break;

 case 130:
  FUNC_1(VAR_2, VAR_1->mem.ptr.addr);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
