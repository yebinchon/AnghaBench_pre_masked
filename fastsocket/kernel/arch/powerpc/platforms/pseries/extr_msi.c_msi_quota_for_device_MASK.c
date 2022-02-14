
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct msi_counts {int num_devices; int quota; int request; int spare; int over_quota; int requestor; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (struct pci_dev*,int*) ;
 struct device_node* FUNC_1 (struct pci_dev*,int*) ;
 int FUNC_2 (struct msi_counts*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct device_node*,int ,struct msi_counts*) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_2, int VAR_3)
{
 struct device_node *VAR_4;
 struct msi_counts VAR_5;
 int VAR_6;

 FUNC_7("rtas_msi: calc quota for %s, request %d\n", FUNC_6(VAR_2),
    VAR_3);

 VAR_4 = FUNC_1(VAR_2, &VAR_6);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_2, &VAR_6);

 if (!VAR_4) {
  FUNC_8("rtas_msi: couldn't find PE for %s\n", FUNC_6(VAR_2));
  goto out;
 }

 FUNC_7("rtas_msi: found PE %s\n", VAR_4->full_name);

 FUNC_2(&VAR_5, 0, sizeof(struct msi_counts));


 FUNC_9(VAR_4, VAR_0, &VAR_5);

 if (VAR_5.num_devices == 0) {
  FUNC_8("rtas_msi: found 0 devices under PE for %s\n",
   FUNC_6(VAR_2));
  goto out;
 }

 VAR_5.quota = VAR_6 / VAR_5.num_devices;
 if (VAR_3 <= VAR_5.quota)
  goto out;


 VAR_5.requestor = FUNC_5(VAR_2);
 VAR_5.request = VAR_3;
 FUNC_9(VAR_4, VAR_1, &VAR_5);



 VAR_5.spare += VAR_6 % VAR_5.num_devices;


 if (VAR_5.over_quota)
  VAR_5.quota += VAR_5.spare / VAR_5.over_quota;


 VAR_3 = FUNC_3(VAR_5.quota, VAR_3);

 FUNC_7("rtas_msi: request clamped to quota %d\n", VAR_3);
out:
 FUNC_4(VAR_4);

 return VAR_3;
}
