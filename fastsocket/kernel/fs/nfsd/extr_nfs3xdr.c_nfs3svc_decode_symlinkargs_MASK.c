
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int page_len; int * pages; struct kvec* head; } ;
struct svc_rqst {TYPE_1__ rq_arg; int rq_resused; int * rq_respages; } ;
struct nfsd3_symlinkargs {char* tname; unsigned int tlen; int attrs; int flen; int fname; int ffh; } ;
struct kvec {int iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 unsigned int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;

int
FUNC_5(struct svc_rqst *VAR_2, __be32 *VAR_3,
     struct nfsd3_symlinkargs *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 char *VAR_7, *VAR_8;
 struct kvec *VAR_9;

 if (!(VAR_3 = FUNC_0(VAR_3, &VAR_4->ffh)) ||
     !(VAR_3 = FUNC_1(VAR_3, &VAR_4->fname, &VAR_4->flen))
  )
  return 0;
 VAR_3 = FUNC_2(VAR_3, &VAR_4->attrs);






 VAR_5 = FUNC_3(*VAR_3++);
 if (VAR_5 == 0 || VAR_5 > VAR_0 || VAR_5 >= VAR_1)
  return 0;
 VAR_4->tname = VAR_8 =
  FUNC_4(VAR_2->rq_respages[VAR_2->rq_resused++]);
 VAR_4->tlen = VAR_5;

 VAR_7 = (char*)VAR_3;
 VAR_9 = &VAR_2->rq_arg.head[0];
 VAR_6 = VAR_9->iov_len - (VAR_7 - (char*)VAR_9->iov_base);
 while (VAR_5 && VAR_6 && *VAR_7) {
  *VAR_8++ = *VAR_7++;
  VAR_5--;
  VAR_6--;
 }

 if (VAR_5 && !VAR_6 && VAR_2->rq_arg.page_len) {
  VAR_6 = VAR_2->rq_arg.page_len;
  if (VAR_6 > VAR_1)
   VAR_6 = VAR_1;
  VAR_7 = FUNC_4(VAR_2->rq_arg.pages[0]);
 }
 while (VAR_5 && VAR_6 && *VAR_7) {
  *VAR_8++ = *VAR_7++;
  VAR_5--;
  VAR_6--;
 }
 *VAR_8 = '\0';
 if (VAR_5)
  return 0;

 return 1;
}
