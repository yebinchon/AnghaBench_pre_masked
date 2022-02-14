
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int serial_number; } ;
struct TYPE_2__ {struct scsi_cmnd* sc; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_3 (unsigned long VAR_5)
{
 struct scsi_cmnd *VAR_6;

 while ((VAR_6 = VAR_3[VAR_4].sc) != ((void*)0)) {
  FUNC_0(&VAR_2);
  VAR_3[VAR_4].sc = ((void*)0);
  if (VAR_0)
   FUNC_1("simscsi_interrupt: done with %ld\n", VAR_6->serial_number);
  (*VAR_6->scsi_done)(VAR_6);
  VAR_4 = (VAR_4 + 1) % VAR_1;
 }
}
