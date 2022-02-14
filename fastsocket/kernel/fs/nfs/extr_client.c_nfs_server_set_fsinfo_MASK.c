
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int ra_pages; } ;
struct nfs_server {int rsize; int wsize; int rpages; int wpages; int dtsize; int flags; int client; int time_delta; int maxfilesize; scalar_t__ acdirmax; scalar_t__ acdirmin; scalar_t__ acregmax; scalar_t__ acregmin; int wtmult; TYPE_1__ backing_dev_info; } ;
struct nfs_fsinfo {int rtpref; int wtpref; int rtmax; int wtmax; int dtpref; int time_delta; int maxfilesize; int wtmult; int layouttype; } ;
struct nfs_fh {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct nfs_server*,struct nfs_fh*,int ) ;

__attribute__((used)) static void FUNC_5(struct nfs_server *VAR_6,
      struct nfs_fh *VAR_7,
      struct nfs_fsinfo *VAR_8)
{
 unsigned long VAR_9;


 if (VAR_6->rsize == 0)
  VAR_6->rsize = FUNC_1(VAR_8->rtpref, ((void*)0));
 if (VAR_6->wsize == 0)
  VAR_6->wsize = FUNC_1(VAR_8->wtpref, ((void*)0));

 if (VAR_8->rtmax >= 512 && VAR_6->rsize > VAR_8->rtmax)
  VAR_6->rsize = FUNC_1(VAR_8->rtmax, ((void*)0));
 if (VAR_8->wtmax >= 512 && VAR_6->wsize > VAR_8->wtmax)
  VAR_6->wsize = FUNC_1(VAR_8->wtmax, ((void*)0));

 VAR_9 = FUNC_1(FUNC_2(VAR_6->client), ((void*)0));
 if (VAR_6->rsize > VAR_9)
  VAR_6->rsize = VAR_9;
 if (VAR_6->rsize > VAR_0)
  VAR_6->rsize = VAR_0;
 VAR_6->rpages = (VAR_6->rsize + VAR_5 - 1) >> VAR_4;

 VAR_6->backing_dev_info.name = "nfs";
 VAR_6->backing_dev_info.ra_pages = VAR_6->rpages * VAR_1;

 if (VAR_6->wsize > VAR_9)
  VAR_6->wsize = VAR_9;
 if (VAR_6->wsize > VAR_0)
  VAR_6->wsize = VAR_0;
 VAR_6->wpages = (VAR_6->wsize + VAR_5 - 1) >> VAR_4;
 FUNC_4(VAR_6, VAR_7, VAR_8->layouttype);

 VAR_6->wtmult = FUNC_0(VAR_8->wtmult, ((void*)0));

 VAR_6->dtsize = FUNC_1(VAR_8->dtpref, ((void*)0));
 if (VAR_6->dtsize > VAR_5 * VAR_2)
  VAR_6->dtsize = VAR_5 * VAR_2;
 if (VAR_6->dtsize > VAR_6->rsize)
  VAR_6->dtsize = VAR_6->rsize;

 if (VAR_6->flags & VAR_3) {
  VAR_6->acregmin = VAR_6->acregmax = 0;
  VAR_6->acdirmin = VAR_6->acdirmax = 0;
 }

 VAR_6->maxfilesize = VAR_8->maxfilesize;

 VAR_6->time_delta = VAR_8->time_delta;


 FUNC_3(VAR_6->client, VAR_6->wsize + 100, VAR_6->rsize + 100);
}
