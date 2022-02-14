
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ modules; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,struct bfad_hal_comp*) ;
 scalar_t__ FUNC_1 (int *,int ,struct bfad_hal_comp*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct Scsi_Host *VAR_3)
{
 struct bfad_im_port_s *VAR_4 =
   (struct bfad_im_port_s *) VAR_3->hostdata[0];
 struct bfad_s *VAR_5 = VAR_4->bfad;
 struct bfad_hal_comp VAR_6;
 unsigned long VAR_7;
 uint32_t VAR_8;

 FUNC_2(&VAR_6.comp);
 FUNC_3(&VAR_5->bfad_lock, VAR_7);
 VAR_8 = FUNC_0(&VAR_5->bfa.modules.port,
     VAR_2, &VAR_6);
 FUNC_4(&VAR_5->bfad_lock, VAR_7);

 if (VAR_8 != VAR_0)
  return -VAR_1;

 FUNC_5(&VAR_6.comp);
 if (VAR_6.status != VAR_0)
  return -VAR_1;

 FUNC_3(&VAR_5->bfad_lock, VAR_7);
 VAR_8 = FUNC_1(&VAR_5->bfa.modules.port,
     VAR_2, &VAR_6);
 FUNC_4(&VAR_5->bfad_lock, VAR_7);
 if (VAR_8 != VAR_0)
  return -VAR_1;

 FUNC_5(&VAR_6.comp);
 if (VAR_6.status != VAR_0)
  return -VAR_1;

 return 0;
}
