
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_req {scalar_t__ fsf_command; struct fsf_qtcb* qtcb; TYPE_3__* adapter; } ;
struct zfcp_dbf {int dummy; } ;
struct TYPE_5__ {scalar_t__ fsf_status; scalar_t__ log_length; } ;
struct TYPE_4__ {scalar_t__ prot_status; } ;
struct fsf_qtcb {TYPE_2__ header; TYPE_1__ prefix; } ;
struct TYPE_6__ {struct zfcp_dbf* dbf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int,struct zfcp_fsf_req*,struct zfcp_dbf*) ;

__attribute__((used)) static inline void FUNC_1(struct zfcp_fsf_req *VAR_5)
{
 struct zfcp_dbf *VAR_6 = VAR_5->adapter->dbf;
 struct fsf_qtcb *VAR_7 = VAR_5->qtcb;

 if ((VAR_7->prefix.prot_status != VAR_2) &&
     (VAR_7->prefix.prot_status != VAR_1)) {
  FUNC_0("perr", 1, VAR_5, VAR_6);

 } else if (VAR_7->header.fsf_status != VAR_0) {
  FUNC_0("ferr", 1, VAR_5, VAR_6);

 } else if ((VAR_5->fsf_command == VAR_4) ||
     (VAR_5->fsf_command == VAR_3)) {
  FUNC_0("open", 4, VAR_5, VAR_6);

 } else if (VAR_7->header.log_length) {
  FUNC_0("qtcb", 5, VAR_5, VAR_6);

 } else {
  FUNC_0("norm", 6, VAR_5, VAR_6);
 }
 }
