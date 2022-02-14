
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ io_port; } ;


 char FUNC_0 (scalar_t__) ;

__attribute__((used)) static __inline__ char FUNC_1(struct Scsi_Host *VAR_0, int VAR_1)
{
  return FUNC_0(VAR_0->io_port + (VAR_1<<4));
}
