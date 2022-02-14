
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
typedef scalar_t__ uint32_t ;
struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_bsg_fabric_get_lports_s {scalar_t__ nports; scalar_t__ status; int vf_id; } ;
typedef int bfa_fcs_vf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,scalar_t__*) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (unsigned int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct bfad_s *VAR_4, void *VAR_5,
   unsigned int VAR_6)
{
 struct bfa_bsg_fabric_get_lports_s *VAR_7 =
   (struct bfa_bsg_fabric_get_lports_s *)VAR_5;
 bfa_fcs_vf_t *VAR_8;
 uint32_t VAR_9 = VAR_7->nports;
 unsigned long VAR_10;
 void *VAR_11;

 if (VAR_9 == 0) {
  VAR_7->status = VAR_0;
  goto out;
 }

 if (FUNC_2(VAR_6,
  sizeof(struct bfa_bsg_fabric_get_lports_s),
  sizeof(wwn_t[VAR_7->nports])) != VAR_1) {
  VAR_7->status = VAR_3;
  goto out;
 }

 VAR_11 = (char *)VAR_7 +
   sizeof(struct bfa_bsg_fabric_get_lports_s);

 FUNC_3(&VAR_4->bfad_lock, VAR_10);
 VAR_8 = FUNC_1(&VAR_4->bfa_fcs, VAR_7->vf_id);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(&VAR_4->bfad_lock, VAR_10);
  VAR_7->status = VAR_2;
  goto out;
 }
 FUNC_0(VAR_8, (wwn_t *)VAR_11, &VAR_9);
 FUNC_4(&VAR_4->bfad_lock, VAR_10);

 VAR_7->nports = VAR_9;
 VAR_7->status = VAR_1;
out:
 return 0;
}
