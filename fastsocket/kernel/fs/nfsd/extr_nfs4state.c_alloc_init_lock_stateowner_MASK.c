
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_lock {scalar_t__ lk_new_lock_seqid; int lk_new_owner; } ;
struct nfs4_replay {int rp_ibuf; int rp_buf; scalar_t__ rp_buflen; int rp_status; } ;
struct nfs4_stateowner {int so_confirmed; struct nfs4_replay so_replay; scalar_t__ so_seqid; struct nfs4_client* so_client; scalar_t__ so_id; scalar_t__ so_is_open_owner; int so_perstateid; int so_strhash; int so_idhash; scalar_t__ so_time; int so_close_lru; int so_stateids; int so_perclient; } ;
struct nfs4_stateid {int st_lockowners; } ;
struct nfs4_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct nfs4_stateowner* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 unsigned int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static struct nfs4_stateowner *
FUNC_4(unsigned int VAR_4, struct nfs4_client *VAR_5, struct nfs4_stateid *VAR_6, struct nfsd4_lock *VAR_7) {
 struct nfs4_stateowner *VAR_8;
 struct nfs4_replay *VAR_9;
 unsigned int VAR_10;

 if (!(VAR_8 = FUNC_1(&VAR_7->lk_new_owner)))
  return ((void*)0);
 VAR_10 = FUNC_3(VAR_0);
 FUNC_0(&VAR_8->so_idhash);
 FUNC_0(&VAR_8->so_strhash);
 FUNC_0(&VAR_8->so_perclient);
 FUNC_0(&VAR_8->so_stateids);
 FUNC_0(&VAR_8->so_perstateid);
 FUNC_0(&VAR_8->so_close_lru);
 VAR_8->so_time = 0;
 FUNC_2(&VAR_8->so_idhash, &VAR_1[VAR_10]);
 FUNC_2(&VAR_8->so_strhash, &VAR_2[VAR_4]);
 FUNC_2(&VAR_8->so_perstateid, &VAR_6->st_lockowners);
 VAR_8->so_is_open_owner = 0;
 VAR_8->so_id = VAR_0++;
 VAR_8->so_client = VAR_5;


 VAR_8->so_seqid = VAR_7->lk_new_lock_seqid + 1;
 VAR_8->so_confirmed = 1;
 VAR_9 = &VAR_8->so_replay;
 VAR_9->rp_status = VAR_3;
 VAR_9->rp_buflen = 0;
 VAR_9->rp_buf = VAR_9->rp_ibuf;
 return VAR_8;
}
