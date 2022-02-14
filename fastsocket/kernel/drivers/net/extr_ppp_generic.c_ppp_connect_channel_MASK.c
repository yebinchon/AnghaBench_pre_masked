
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ppp_net {int all_ppp_mutex; } ;
struct TYPE_6__ {scalar_t__ hdrlen; int refcnt; } ;
struct ppp {TYPE_3__ file; int n_channels; int channels; TYPE_2__* dev; } ;
struct TYPE_4__ {scalar_t__ hdrlen; } ;
struct channel {int upl; struct ppp* ppp; int clist; TYPE_1__ file; int chan_net; } ;
struct TYPE_5__ {int hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ppp* FUNC_4 (struct ppp_net*,int) ;
 int FUNC_5 (struct ppp*) ;
 struct ppp_net* FUNC_6 (int ) ;
 int FUNC_7 (struct ppp*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct channel *VAR_2, int VAR_3)
{
 struct ppp *VAR_4;
 struct ppp_net *VAR_5;
 int VAR_6 = -VAR_1;
 int VAR_7;

 VAR_5 = FUNC_6(VAR_2->chan_net);

 FUNC_2(&VAR_5->all_ppp_mutex);
 VAR_4 = FUNC_4(VAR_5, VAR_3);
 if (!VAR_4)
  goto out;
 FUNC_8(&VAR_2->upl);
 VAR_6 = -VAR_0;
 if (VAR_2->ppp)
  goto outl;

 FUNC_5(VAR_4);
 if (VAR_2->file.hdrlen > VAR_4->file.hdrlen)
  VAR_4->file.hdrlen = VAR_2->file.hdrlen;
 VAR_7 = VAR_2->file.hdrlen + 2;
 if (VAR_7 > VAR_4->dev->hard_header_len)
  VAR_4->dev->hard_header_len = VAR_7;
 FUNC_1(&VAR_2->clist, &VAR_4->channels);
 ++VAR_4->n_channels;
 VAR_2->ppp = VAR_4;
 FUNC_0(&VAR_4->file.refcnt);
 FUNC_7(VAR_4);
 VAR_6 = 0;

 outl:
 FUNC_9(&VAR_2->upl);
 out:
 FUNC_3(&VAR_5->all_ppp_mutex);
 return VAR_6;
}
