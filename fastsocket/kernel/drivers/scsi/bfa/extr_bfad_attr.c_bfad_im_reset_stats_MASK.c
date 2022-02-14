
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct bfad_hal_comp {int comp; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef scalar_t__ bfa_status_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,struct bfad_hal_comp*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct Scsi_Host *VAR_2)
{
 struct bfad_im_port_s *VAR_3 =
   (struct bfad_im_port_s *) VAR_2->hostdata[0];
 struct bfad_s *VAR_4 = VAR_3->bfad;
 struct bfad_hal_comp VAR_5;
 unsigned long VAR_6;
 bfa_status_t VAR_7;

 FUNC_2(&VAR_5.comp);
 FUNC_3(&VAR_4->bfad_lock, VAR_6);
 VAR_7 = FUNC_1(FUNC_0(&VAR_4->bfa), VAR_1,
     &VAR_5);
 FUNC_4(&VAR_4->bfad_lock, VAR_6);

 if (VAR_7 != VAR_0)
  return;

 FUNC_5(&VAR_5.comp);

 return;
}
