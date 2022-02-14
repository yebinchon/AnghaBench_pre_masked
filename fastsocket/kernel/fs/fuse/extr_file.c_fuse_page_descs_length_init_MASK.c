
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_req {TYPE_1__* page_descs; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct fuse_req *VAR_1,
  unsigned VAR_2, unsigned VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++)
  VAR_1->page_descs[VAR_4].length = VAR_0 -
   VAR_1->page_descs[VAR_4].offset;
}
