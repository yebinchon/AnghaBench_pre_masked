
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct pstore_info {int dummy; } ;
struct TYPE_5__ {int section_count; int record_length; int record_id; int flags; int notification_type; int creator_id; int timestamp; int validation_bits; void* error_severity; int signature_end; int revision; int signature; } ;
struct TYPE_4__ {int section_offset; size_t section_length; void* section_severity; int section_type; int flags; scalar_t__ validation_bits; int revision; } ;
struct cper_pstore_record {TYPE_2__ hdr; TYPE_1__ sec_hdr; } ;
typedef enum pstore_type_id { ____Placeholder_pstore_type_id } pstore_type_id ;
typedef enum kmsg_dump_reason { ____Placeholder_kmsg_dump_reason } kmsg_dump_reason ;
struct TYPE_6__ {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int FUNC_0 () ;
 TYPE_3__ VAR_14 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct cper_pstore_record*,int ,int) ;

__attribute__((used)) static int FUNC_5(enum pstore_type_id VAR_15, enum kmsg_dump_reason VAR_16,
         u64 *VAR_17, unsigned int VAR_18, int VAR_19,
         size_t VAR_20, struct pstore_info *VAR_21)
{
 struct cper_pstore_record *VAR_22 = (struct cper_pstore_record *)
     (VAR_14.buf - sizeof(*VAR_22));
 int VAR_23;

 FUNC_4(VAR_22, 0, sizeof(*VAR_22));
 FUNC_3(VAR_22->hdr.signature, VAR_10, VAR_11);
 VAR_22->hdr.revision = VAR_3;
 VAR_22->hdr.signature_end = VAR_9;
 VAR_22->hdr.section_count = 1;
 VAR_22->hdr.error_severity = VAR_8;

 VAR_22->hdr.validation_bits = VAR_12;
 VAR_22->hdr.timestamp = FUNC_2();
 VAR_22->hdr.record_length = sizeof(*VAR_22) + VAR_20;
 VAR_22->hdr.creator_id = VAR_0;
 VAR_22->hdr.notification_type = VAR_2;
 VAR_22->hdr.record_id = FUNC_0();
 VAR_22->hdr.flags = VAR_1;

 VAR_22->sec_hdr.section_offset = sizeof(*VAR_22);
 VAR_22->sec_hdr.section_length = VAR_20;
 VAR_22->sec_hdr.revision = VAR_7;

 VAR_22->sec_hdr.validation_bits = 0;
 VAR_22->sec_hdr.flags = VAR_6;
 switch (VAR_15) {
 case 129:
  VAR_22->sec_hdr.section_type = VAR_4;
  break;
 case 128:
  VAR_22->sec_hdr.section_type = VAR_5;
  break;
 default:
  return -VAR_13;
 }
 VAR_22->sec_hdr.section_severity = VAR_8;

 VAR_23 = FUNC_1(&VAR_22->hdr);
 *VAR_17 = VAR_22->hdr.record_id;

 return VAR_23;
}
