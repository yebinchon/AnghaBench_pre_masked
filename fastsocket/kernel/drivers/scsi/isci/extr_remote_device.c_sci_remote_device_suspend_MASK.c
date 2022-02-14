
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int rnc; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
typedef enum sci_remote_node_suspension_reasons { ____Placeholder_sci_remote_node_suspension_reasons } sci_remote_node_suspension_reasons ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;

enum sci_status FUNC_1(struct isci_remote_device *VAR_1,
       enum sci_remote_node_suspension_reasons VAR_2)
{
 return FUNC_0(&VAR_1->rnc, VAR_2,
            VAR_0);
}
