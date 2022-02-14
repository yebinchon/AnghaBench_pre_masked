
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mce {int dummy; } ;
struct TYPE_4__ {int section_count; int record_length; int flags; int record_id; int notification_type; int creator_id; scalar_t__ validation_bits; void* error_severity; int signature_end; int revision; int * signature; } ;
struct TYPE_3__ {int section_offset; int section_length; void* section_severity; int section_type; int flags; scalar_t__ validation_bits; int revision; } ;
struct cper_mce_record {TYPE_2__ hdr; int mce; TYPE_1__ sec_hdr; } ;
typedef int rcd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 struct mce* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,struct mce*,int) ;
 int FUNC_3 (struct cper_mce_record*,int ,int) ;

int FUNC_4(struct mce *VAR_11)
{
 struct cper_mce_record VAR_12;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 FUNC_2(VAR_12.hdr.signature, VAR_9, VAR_10);
 VAR_12.hdr.revision = VAR_3;
 VAR_12.hdr.signature_end = VAR_8;
 VAR_12.hdr.section_count = 1;
 VAR_12.hdr.error_severity = VAR_7;

 VAR_12.hdr.validation_bits = 0;
 VAR_12.hdr.record_length = sizeof(VAR_12);
 VAR_12.hdr.creator_id = VAR_0;
 VAR_12.hdr.notification_type = VAR_2;
 VAR_12.hdr.record_id = FUNC_0();
 VAR_12.hdr.flags = VAR_1;

 VAR_12.sec_hdr.section_offset = (void *)&VAR_12.mce - (void *)&VAR_12;
 VAR_12.sec_hdr.section_length = sizeof(VAR_12.mce);
 VAR_12.sec_hdr.revision = VAR_6;

 VAR_12.sec_hdr.validation_bits = 0;
 VAR_12.sec_hdr.flags = VAR_5;
 VAR_12.sec_hdr.section_type = VAR_4;
 VAR_12.sec_hdr.section_severity = VAR_7;

 FUNC_2(&VAR_12.mce, VAR_11, sizeof(*VAR_11));

 return FUNC_1(&VAR_12.hdr);
}
