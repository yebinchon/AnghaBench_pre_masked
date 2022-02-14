
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nents; int sgl; } ;
struct scsi_data_buffer {int length; TYPE_1__ table; } ;
struct request {int q; int * buffer; int nr_phys_segments; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,struct request*,int ) ;
 int FUNC_3 (struct scsi_data_buffer*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct request *VAR_2, struct scsi_data_buffer *VAR_3,
        gfp_t VAR_4)
{
 int VAR_5;




 if (FUNC_4(FUNC_3(VAR_3, VAR_2->nr_phys_segments,
     VAR_4))) {
  return VAR_0;
 }

 VAR_2->buffer = ((void*)0);





 VAR_5 = FUNC_2(VAR_2->q, VAR_2, VAR_3->table.sgl);
 FUNC_0(VAR_5 > VAR_3->table.nents);
 VAR_3->table.nents = VAR_5;
 VAR_3->length = FUNC_1(VAR_2);
 return VAR_1;
}
