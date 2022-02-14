
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {scalar_t__ chip710; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct Scsi_Host*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct Scsi_Host *VAR_4) {
 const struct NCR_700_Host_Parameters *VAR_5
  = (struct NCR_700_Host_Parameters *)VAR_4->hostdata[0];
 if(VAR_5->chip710) {
  FUNC_0(VAR_3, VAR_4, VAR_0);
  FUNC_1(10);
  FUNC_0(0, VAR_4, VAR_0);
 } else {
  FUNC_0(VAR_2, VAR_4, VAR_1);
  FUNC_1(10);
  FUNC_0(0, VAR_4, VAR_1);
 }
}
