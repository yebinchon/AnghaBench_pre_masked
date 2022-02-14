
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_copy_state {unsigned long addr; int req; int fc; scalar_t__ len; scalar_t__ seglen; scalar_t__ mapaddr; scalar_t__ buf; int pg; int write; int nr_segs; TYPE_1__* iov; } ;
struct TYPE_2__ {scalar_t__ iov_base; scalar_t__ iov_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct fuse_copy_state*) ;
 int FUNC_2 (unsigned long,int,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (unsigned long,scalar_t__) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct fuse_copy_state *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_6(VAR_2->fc, VAR_2->req);
 FUNC_1(VAR_2);
 if (!VAR_2->seglen) {
  FUNC_0(!VAR_2->nr_segs);
  VAR_2->seglen = VAR_2->iov[0].iov_len;
  VAR_2->addr = (unsigned long) VAR_2->iov[0].iov_base;
  VAR_2->iov++;
  VAR_2->nr_segs--;
 }
 VAR_4 = FUNC_2(VAR_2->addr, 1, VAR_2->write, &VAR_2->pg);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_0(VAR_4 != 1);
 VAR_3 = VAR_2->addr % VAR_1;
 VAR_2->mapaddr = FUNC_3(VAR_2->pg, VAR_0);
 VAR_2->buf = VAR_2->mapaddr + VAR_3;
 VAR_2->len = FUNC_5(VAR_1 - VAR_3, VAR_2->seglen);
 VAR_2->seglen -= VAR_2->len;
 VAR_2->addr += VAR_2->len;

 return FUNC_4(VAR_2->fc, VAR_2->req);
}
