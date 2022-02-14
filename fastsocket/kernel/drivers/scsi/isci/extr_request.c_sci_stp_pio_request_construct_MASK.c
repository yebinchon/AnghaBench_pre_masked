
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int index; int set; scalar_t__ offset; } ;
struct isci_stp_request {TYPE_2__ sgl; scalar_t__ status; } ;
struct TYPE_3__ {struct isci_stp_request req; } ;
struct isci_request {TYPE_1__ stp; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isci_request*) ;
 int FUNC_1 (struct isci_request*) ;

__attribute__((used)) static enum sci_status FUNC_2(struct isci_request *VAR_2,
         bool VAR_3)
{
 struct isci_stp_request *VAR_4 = &VAR_2->stp.req;

 FUNC_1(VAR_2);

 VAR_4->status = 0;
 VAR_4->sgl.offset = 0;
 VAR_4->sgl.set = VAR_1;

 if (VAR_3) {
  FUNC_0(VAR_2);
  VAR_4->sgl.index = 0;
 } else {

  VAR_4->sgl.index = -1;
 }

 return VAR_0;
}
