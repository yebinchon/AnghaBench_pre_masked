
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {scalar_t__ base; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(__u8 VAR_1, struct Scsi_Host *VAR_2, __u32 VAR_3)
{
 const struct NCR_700_Host_Parameters *VAR_4
  = (struct NCR_700_Host_Parameters *)VAR_2->hostdata[0];

 FUNC_0(VAR_1, VAR_4->base + (VAR_3^VAR_0));
}
