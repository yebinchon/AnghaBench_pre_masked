
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* data_out_integrity_check_offset; } ;
struct TYPE_3__ {void* data_out_integrity_check_offset; } ;
struct osd_security_parameters {TYPE_2__ v2; TYPE_1__ v1; } ;
typedef void* osd_cdb_offset ;



__attribute__((used)) static inline void FUNC_0(bool VAR_0,
 struct osd_security_parameters *VAR_1, osd_cdb_offset VAR_2)
{
 if (VAR_0)
  VAR_1->v1.data_out_integrity_check_offset = VAR_2;
 else
  VAR_1->v2.data_out_integrity_check_offset = VAR_2;
}
