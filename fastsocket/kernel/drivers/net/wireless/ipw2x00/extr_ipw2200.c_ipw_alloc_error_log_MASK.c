
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipw_priv {int config; int status; } ;
struct ipw_fw_error {int elem_len; int log_len; struct ipw_error_elem* elem; struct ipw_event* log; scalar_t__ payload; int config; int status; int jiffies; } ;
struct ipw_event {int dummy; } ;
struct ipw_error_elem {int dummy; } ;
typedef int base ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct ipw_priv*,int,struct ipw_event*) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*,int ) ;
 int FUNC_4 (struct ipw_priv*,int,int *,int) ;
 int FUNC_5 (struct ipw_priv*,int) ;
 int VAR_2 ;
 struct ipw_fw_error* FUNC_6 (int,int ) ;

__attribute__((used)) static struct ipw_fw_error *FUNC_7(struct ipw_priv *VAR_3)
{
 struct ipw_fw_error *VAR_4;
 u32 VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6 = FUNC_3(VAR_3, VAR_1);
 u32 VAR_7 = FUNC_5(VAR_3, VAR_6);

 VAR_4 = FUNC_6(sizeof(*VAR_4) +
   sizeof(*VAR_4->elem) * VAR_7 +
   sizeof(*VAR_4->log) * VAR_5, VAR_0);
 if (!VAR_4) {
  FUNC_0("Memory allocation for firmware error log "
     "failed.\n");
  return ((void*)0);
 }
 VAR_4->jiffies = VAR_2;
 VAR_4->status = VAR_3->status;
 VAR_4->config = VAR_3->config;
 VAR_4->elem_len = VAR_7;
 VAR_4->log_len = VAR_5;
 VAR_4->elem = (struct ipw_error_elem *)VAR_4->payload;
 VAR_4->log = (struct ipw_event *)(VAR_4->elem + VAR_7);

 FUNC_1(VAR_3, VAR_5, VAR_4->log);

 if (VAR_7)
  FUNC_4(VAR_3, VAR_6 + sizeof(VAR_6), (u8 *) VAR_4->elem,
      sizeof(*VAR_4->elem) * VAR_7);

 return VAR_4;
}
