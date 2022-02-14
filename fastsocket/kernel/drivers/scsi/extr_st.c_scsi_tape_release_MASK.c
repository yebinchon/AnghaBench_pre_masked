
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {struct scsi_tape* buffer; struct scsi_tape* reserved_pages; int * device; struct gendisk* disk; } ;
struct kref {int dummy; } ;
struct gendisk {int * private_data; } ;


 int FUNC_0 (struct scsi_tape*) ;
 int FUNC_1 (struct scsi_tape*) ;
 int FUNC_2 (struct gendisk*) ;
 struct scsi_tape* FUNC_3 (struct kref*) ;

__attribute__((used)) static void FUNC_4(struct kref *VAR_0)
{
 struct scsi_tape *VAR_1 = FUNC_3(VAR_0);
 struct gendisk *VAR_2 = VAR_1->disk;

 VAR_1->device = ((void*)0);

 if (VAR_1->buffer) {
  FUNC_1(VAR_1->buffer);
  FUNC_0(VAR_1->buffer->reserved_pages);
  FUNC_0(VAR_1->buffer);
 }

 VAR_2->private_data = ((void*)0);
 FUNC_2(VAR_2);
 FUNC_0(VAR_1);
 return;
}
