
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_cmnd {int dummy; } ;
struct fw_dif_context {int* ref_tag_mask; int* app_tag_mask; void* app_tag; void* ref_tag; } ;
typedef int srb_t ;


 struct scsi_cmnd* FUNC_0 (int *) ;




 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static inline void
FUNC_6(srb_t *VAR_0, struct fw_dif_context *VAR_1,
    unsigned int VAR_2)
{
 struct scsi_cmnd *VAR_3 = FUNC_0(VAR_0);

 switch (FUNC_5(VAR_3)) {
 case 131:




  VAR_1->ref_tag = FUNC_2((uint32_t)
      (0xffffffff & FUNC_4(VAR_3)));

  if (!FUNC_3(VAR_0))
   break;

  VAR_1->ref_tag_mask[0] = 0xff;
  VAR_1->ref_tag_mask[1] = 0xff;
  VAR_1->ref_tag_mask[2] = 0xff;
  VAR_1->ref_tag_mask[3] = 0xff;
  break;





 case 129:
  VAR_1->app_tag = FUNC_1(0);
  VAR_1->app_tag_mask[0] = 0x0;
  VAR_1->app_tag_mask[1] = 0x0;

  VAR_1->ref_tag = FUNC_2((uint32_t)
      (0xffffffff & FUNC_4(VAR_3)));

  if (!FUNC_3(VAR_0))
   break;


  VAR_1->ref_tag_mask[0] = 0xff;
  VAR_1->ref_tag_mask[1] = 0xff;
  VAR_1->ref_tag_mask[2] = 0xff;
  VAR_1->ref_tag_mask[3] = 0xff;
  break;


 case 128:
  VAR_1->ref_tag_mask[0] = VAR_1->ref_tag_mask[1] =
   VAR_1->ref_tag_mask[2] = VAR_1->ref_tag_mask[3] =
        0x00;
  break;





 case 130:
  VAR_1->ref_tag = FUNC_2((uint32_t)
      (0xffffffff & FUNC_4(VAR_3)));
  VAR_1->app_tag = FUNC_1(0);
  VAR_1->app_tag_mask[0] = 0x0;
  VAR_1->app_tag_mask[1] = 0x0;

  if (!FUNC_3(VAR_0))
   break;


  VAR_1->ref_tag_mask[0] = 0xff;
  VAR_1->ref_tag_mask[1] = 0xff;
  VAR_1->ref_tag_mask[2] = 0xff;
  VAR_1->ref_tag_mask[3] = 0xff;
  break;
 }
}
