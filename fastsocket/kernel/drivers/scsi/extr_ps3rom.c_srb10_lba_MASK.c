
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct scsi_cmnd *VAR_0)
{
 return VAR_0->cmnd[2] << 24 | VAR_0->cmnd[3] << 16 | VAR_0->cmnd[4] << 8 |
        VAR_0->cmnd[5];
}
