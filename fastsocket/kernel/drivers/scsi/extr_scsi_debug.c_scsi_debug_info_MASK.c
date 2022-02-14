
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char const* VAR_4 ;
 int FUNC_0 (char const*,char*,char*,char*,int,int) ;

__attribute__((used)) static const char * FUNC_1(struct Scsi_Host * VAR_5)
{
 FUNC_0(VAR_4, "scsi_debug, version %s [%s], "
  "dev_size_mb=%d, opts=0x%x", VAR_0,
  VAR_3, VAR_1,
  VAR_2);
 return VAR_4;
}
