
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ipath_sge {int length; int sge_length; scalar_t__ n; scalar_t__ m; TYPE_3__* mr; scalar_t__ vaddr; } ;
struct ipath_sge_state {scalar_t__ num_sge; struct ipath_sge sge; struct ipath_sge* sg_list; } ;
struct TYPE_6__ {scalar_t__ mapsz; TYPE_2__** map; } ;
struct TYPE_5__ {TYPE_1__* segs; } ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ vaddr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_1(struct ipath_sge_state *VAR_1, u32 VAR_2)
{
 struct ipath_sge *VAR_3 = VAR_1->sg_list;
 struct ipath_sge VAR_4 = VAR_1->sge;
 u8 VAR_5 = VAR_1->num_sge;
 u32 VAR_6 = 1;

 while (VAR_2) {
  u32 VAR_7 = VAR_4.length;

  if (VAR_7 > VAR_2)
   VAR_7 = VAR_2;
  if (VAR_7 > VAR_4.sge_length)
   VAR_7 = VAR_4.sge_length;
  FUNC_0(VAR_7 == 0);
  if (((long) VAR_4.vaddr & (sizeof(u32) - 1)) ||
      (VAR_7 != VAR_2 && (VAR_7 & (sizeof(u32) - 1)))) {
   VAR_6 = 0;
   break;
  }
  VAR_6++;
  VAR_4.vaddr += VAR_7;
  VAR_4.length -= VAR_7;
  VAR_4.sge_length -= VAR_7;
  if (VAR_4.sge_length == 0) {
   if (--VAR_5)
    VAR_4 = *VAR_3++;
  } else if (VAR_4.length == 0 && VAR_4.mr != ((void*)0)) {
   if (++VAR_4.n >= VAR_0) {
    if (++VAR_4.m >= VAR_4.mr->mapsz)
     break;
    VAR_4.n = 0;
   }
   VAR_4.vaddr =
    VAR_4.mr->map[VAR_4.m]->segs[VAR_4.n].vaddr;
   VAR_4.length =
    VAR_4.mr->map[VAR_4.m]->segs[VAR_4.n].length;
  }
  VAR_2 -= VAR_7;
 }
 return VAR_6;
}
