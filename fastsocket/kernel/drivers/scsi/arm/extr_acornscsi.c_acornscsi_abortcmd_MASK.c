
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int msgs; int phase; } ;
struct TYPE_6__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static
void FUNC_3(AS_Host *VAR_5, unsigned char VAR_6)
{
    VAR_5->scsi.phase = VAR_3;
    FUNC_2(VAR_5, VAR_4, VAR_2);

    FUNC_1(&VAR_5->scsi.msgs);





 FUNC_0(&VAR_5->scsi.msgs, 1, VAR_0);
}
