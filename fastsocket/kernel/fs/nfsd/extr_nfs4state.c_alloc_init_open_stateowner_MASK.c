
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {int op_seqid; int op_owner; } ;
struct nfs4_replay {int rp_ibuf; int rp_buf; scalar_t__ rp_buflen; int rp_status; } ;
struct nfs4_stateowner {int so_is_open_owner; struct nfs4_replay so_replay; scalar_t__ so_confirmed; int so_seqid; struct nfs4_client* so_client; scalar_t__ so_id; int so_perclient; int so_strhash; int so_idhash; scalar_t__ so_time; int so_close_lru; int so_perstateid; int so_stateids; } ;
struct nfs4_client {int cl_openowners; } ;


 int FUNC_0 (int *) ;
 struct nfs4_stateowner* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 unsigned int FUNC_3 (int ) ;
 int * VAR_3 ;

__attribute__((used)) static struct nfs4_stateowner *
FUNC_4(unsigned int VAR_4, struct nfs4_client *VAR_5, struct nfsd4_open *VAR_6) {
 struct nfs4_stateowner *VAR_7;
 struct nfs4_replay *VAR_8;
 unsigned int VAR_9;

 if (!(VAR_7 = FUNC_1(&VAR_6->op_owner)))
  return ((void*)0);
 VAR_9 = FUNC_3(VAR_0);
 FUNC_0(&VAR_7->so_idhash);
 FUNC_0(&VAR_7->so_strhash);
 FUNC_0(&VAR_7->so_perclient);
 FUNC_0(&VAR_7->so_stateids);
 FUNC_0(&VAR_7->so_perstateid);
 FUNC_0(&VAR_7->so_close_lru);
 VAR_7->so_time = 0;
 FUNC_2(&VAR_7->so_idhash, &VAR_2[VAR_9]);
 FUNC_2(&VAR_7->so_strhash, &VAR_3[VAR_4]);
 FUNC_2(&VAR_7->so_perclient, &VAR_5->cl_openowners);
 VAR_7->so_is_open_owner = 1;
 VAR_7->so_id = VAR_0++;
 VAR_7->so_client = VAR_5;
 VAR_7->so_seqid = VAR_6->op_seqid;
 VAR_7->so_confirmed = 0;
 VAR_8 = &VAR_7->so_replay;
 VAR_8->rp_status = VAR_1;
 VAR_8->rp_buflen = 0;
 VAR_8->rp_buf = VAR_8->rp_ibuf;
 return VAR_7;
}
