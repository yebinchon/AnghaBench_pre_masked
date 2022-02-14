
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_request {int dummy; } ;
struct isci_remote_device {int dummy; } ;
struct isci_port {int dummy; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int FUNC_0 (struct isci_port*,struct isci_remote_device*,struct isci_request*) ;
 int FUNC_1 (struct isci_remote_device*) ;
 int FUNC_2 (struct isci_request*) ;

__attribute__((used)) static enum sci_status FUNC_3(struct isci_port *VAR_1,
       struct isci_remote_device *VAR_2,
       struct isci_request *VAR_3)
{
 enum sci_status VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 != VAR_0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 != VAR_0)
  return VAR_4;

 FUNC_1(VAR_2);
 return VAR_4;
}
