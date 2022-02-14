
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicfas408_priv {char const* qinfo; } ;
struct Scsi_Host {int dummy; } ;


 struct qlogicfas408_priv* FUNC_0 (struct Scsi_Host*) ;

const char *FUNC_1(struct Scsi_Host *VAR_0)
{
 struct qlogicfas408_priv *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->qinfo;
}
