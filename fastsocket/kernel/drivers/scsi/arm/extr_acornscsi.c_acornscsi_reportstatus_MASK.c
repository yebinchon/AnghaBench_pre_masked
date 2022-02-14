
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;


 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static inline void FUNC_1(struct scsi_cmnd **VAR_0,
       struct scsi_cmnd **VAR_1,
       int VAR_2)
{
 struct scsi_cmnd *VAR_3 = *VAR_0;

    if (VAR_3) {
 *VAR_0 = ((void*)0);

 VAR_3->result = VAR_2;
 VAR_3->scsi_done(VAR_3);
    }

    if (VAR_3 == *VAR_1)
 *VAR_1 = ((void*)0);
}
