
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ host_scribble; } ;
struct gdth_cmndinfo {int dummy; } ;



__attribute__((used)) static inline struct gdth_cmndinfo *FUNC_0(struct scsi_cmnd* VAR_0)
{
 return (struct gdth_cmndinfo *)VAR_0->host_scribble;
}
