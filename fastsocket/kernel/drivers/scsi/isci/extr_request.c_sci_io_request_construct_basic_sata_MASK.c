
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {scalar_t__ data_dir; int total_xfer_len; } ;
struct isci_request {int sm; int protocol; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sas_task* FUNC_0 (struct isci_request*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct isci_request*,int ,scalar_t__,int) ;

__attribute__((used)) static enum sci_status FUNC_3(struct isci_request *VAR_4)
{
 enum sci_status VAR_5;
 bool VAR_6 = 0;
 struct sas_task *VAR_7 = FUNC_0(VAR_4);

 VAR_4->protocol = VAR_1;

 VAR_6 = (VAR_7->data_dir == VAR_0) ? 0 : 1;

 VAR_5 = FUNC_2(VAR_4,
      VAR_7->total_xfer_len,
      VAR_7->data_dir,
      VAR_6);

 if (VAR_5 == VAR_3)
  FUNC_1(&VAR_4->sm, VAR_2);

 return VAR_5;
}
