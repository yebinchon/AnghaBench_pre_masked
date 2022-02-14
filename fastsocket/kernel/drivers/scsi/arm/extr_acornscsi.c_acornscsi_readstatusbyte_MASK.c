
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Status; } ;
struct TYPE_9__ {TYPE_1__ SCp; } ;
struct TYPE_10__ {TYPE_2__ scsi; } ;
typedef TYPE_3__ AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int,char*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static
void FUNC_3(AS_Host *VAR_4)
{
    FUNC_0(VAR_4, VAR_2|VAR_1);
    FUNC_1(VAR_4, VAR_0, VAR_0, 1000, "reading status byte");
    VAR_4->scsi.SCp.Status = FUNC_2(VAR_4, VAR_3);
}
