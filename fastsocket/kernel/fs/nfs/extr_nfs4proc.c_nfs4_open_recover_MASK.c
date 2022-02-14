
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_state {scalar_t__ n_rdwr; scalar_t__ n_wronly; scalar_t__ n_rdonly; int seqlock; int open_stateid; int stateid; int flags; } ;
struct nfs4_opendata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nfs4_opendata*,int,struct nfs4_state**) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct nfs4_opendata *VAR_7, struct nfs4_state *VAR_8)
{
 struct nfs4_state *VAR_9;
 int VAR_10;


 FUNC_0(VAR_3, &VAR_8->flags);
 FUNC_4();
 if (VAR_8->n_rdwr != 0) {
  FUNC_0(VAR_5, &VAR_8->flags);
  VAR_10 = FUNC_1(VAR_7, VAR_1|VAR_2, &VAR_9);
  if (VAR_10 != 0)
   return VAR_10;
  if (VAR_9 != VAR_8)
   return -VAR_0;
 }
 if (VAR_8->n_wronly != 0) {
  FUNC_0(VAR_6, &VAR_8->flags);
  VAR_10 = FUNC_1(VAR_7, VAR_2, &VAR_9);
  if (VAR_10 != 0)
   return VAR_10;
  if (VAR_9 != VAR_8)
   return -VAR_0;
 }
 if (VAR_8->n_rdonly != 0) {
  FUNC_0(VAR_4, &VAR_8->flags);
  VAR_10 = FUNC_1(VAR_7, VAR_1, &VAR_9);
  if (VAR_10 != 0)
   return VAR_10;
  if (VAR_9 != VAR_8)
   return -VAR_0;
 }




 if (FUNC_5(VAR_3, &VAR_8->flags) == 0 &&
     !FUNC_3(&VAR_8->stateid, &VAR_8->open_stateid)) {
  FUNC_6(&VAR_8->seqlock);
  if (FUNC_5(VAR_3, &VAR_8->flags) == 0)
   FUNC_2(&VAR_8->stateid, &VAR_8->open_stateid);
  FUNC_7(&VAR_8->seqlock);
 }
 return 0;
}
