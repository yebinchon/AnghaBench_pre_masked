
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_dh_data {scalar_t__ buf; } ;
struct scsi_device {struct scsi_dh_data* scsi_dh_data; } ;
struct rdac_dh_data {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct rdac_dh_data *FUNC_1(struct scsi_device *VAR_0)
{
 struct scsi_dh_data *VAR_1 = VAR_0->scsi_dh_data;
 FUNC_0(VAR_1 == ((void*)0));
 return ((struct rdac_dh_data *) VAR_1->buf);
}
