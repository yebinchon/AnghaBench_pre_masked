
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct pstore_info {int dummy; } ;
struct TYPE_5__ {int validation_bits; int timestamp; int creator_id; } ;
struct TYPE_4__ {int section_type; } ;
struct cper_pstore_record {TYPE_2__ hdr; TYPE_1__ sec_hdr; int data; } ;
typedef int ssize_t ;
typedef enum pstore_type_id { ____Placeholder_pstore_type_id } pstore_type_id ;
struct TYPE_6__ {int bufsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *,scalar_t__*) ;
 TYPE_3__ VAR_15 ;
 int FUNC_1 (scalar_t__,TYPE_2__*,size_t) ;
 int FUNC_2 (struct cper_pstore_record*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(u64 *VAR_17, enum pstore_type_id *VAR_18, int *VAR_19,
      struct timespec *VAR_20, char **VAR_21,
      struct pstore_info *VAR_22)
{
 int VAR_23;
 ssize_t VAR_24 = 0;
 u64 VAR_25;
 struct cper_pstore_record *VAR_26;
 size_t VAR_27 = sizeof(*VAR_26) + VAR_15.bufsize;

 if (VAR_14)
  return -VAR_7;

 VAR_26 = FUNC_3(VAR_27, VAR_10);
 if (!VAR_26) {
  VAR_23 = -VAR_9;
  goto out;
 }
skip:
 VAR_23 = FUNC_0(&VAR_16, &VAR_25);
 if (VAR_23)
  goto out;


 if (VAR_25 == VAR_0) {
  VAR_23 = -VAR_5;
  goto out;
 }

 VAR_24 = FUNC_1(VAR_25, &VAR_26->hdr, VAR_27);

 if (VAR_24 == -VAR_8)
  goto skip;
 else if (VAR_24 < sizeof(*VAR_26)) {
  VAR_23 = -VAR_6;
  goto out;
 }
 if (FUNC_5(VAR_26->hdr.creator_id, VAR_1) != 0)
  goto skip;

 *VAR_21 = FUNC_3(VAR_24, VAR_10);
 if (*VAR_21 == ((void*)0)) {
  VAR_23 = -VAR_9;
  goto out;
 }
 FUNC_4(*VAR_21, VAR_26->data, VAR_24 - sizeof(*VAR_26));
 *VAR_17 = VAR_25;
 if (FUNC_5(VAR_26->sec_hdr.section_type,
   VAR_2) == 0)
  *VAR_18 = VAR_11;
 else if (FUNC_5(VAR_26->sec_hdr.section_type,
        VAR_3) == 0)
  *VAR_18 = VAR_12;
 else
  *VAR_18 = VAR_13;

 if (VAR_26->hdr.validation_bits & VAR_4)
  VAR_20->tv_sec = VAR_26->hdr.timestamp;
 else
  VAR_20->tv_sec = 0;
 VAR_20->tv_nsec = 0;

out:
 FUNC_2(VAR_26);
 return (VAR_23 < 0) ? VAR_23 : (VAR_24 - sizeof(*VAR_26));
}
