
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct scsi_cmnd *VAR_3, bool VAR_4,
         unsigned long *VAR_5)
{
 if (VAR_4)
  FUNC_2(FUNC_1(VAR_3), FUNC_0(VAR_3),
        VAR_1, VAR_0);
 FUNC_3(&VAR_2, *VAR_5);
}
