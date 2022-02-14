
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qib_ctxtdata {size_t rcvegrbufs_perchunk_shift; void** rcvegrbuf; TYPE_1__* dd; scalar_t__ rcvegrbufs_perchunk; } ;
struct TYPE_2__ {size_t const rcvegrbufsize_shift; } ;



__attribute__((used)) static inline void *FUNC_0(const struct qib_ctxtdata *VAR_0, u32 VAR_1)
{
 const u32 VAR_2 = VAR_1 >> VAR_0->rcvegrbufs_perchunk_shift;
 const u32 VAR_3 = VAR_1 & ((u32)VAR_0->rcvegrbufs_perchunk - 1);

 return VAR_0->rcvegrbuf[VAR_2] + (VAR_3 << VAR_0->dd->rcvegrbufsize_shift);
}
