
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct memstick_host {int dummy; } ;
struct jmb38x_ms {int host_cnt; int ** hosts; struct pci_dev* pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (struct jmb38x_ms*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct jmb38x_ms*) ;
 struct jmb38x_ms* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int,int*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,struct jmb38x_ms*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_4,
      const struct pci_device_id *VAR_5)
{
 struct jmb38x_ms *VAR_6;
 int VAR_7 = 0;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_12(VAR_4, FUNC_0(32));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_8(VAR_4);
 if (VAR_8)
  return VAR_8;

 FUNC_14(VAR_4);

 VAR_8 = FUNC_11(VAR_4, VAR_0);
 if (VAR_8) {
  VAR_7 = 1;
  goto err_out;
 }

 FUNC_9(VAR_4, 0xac, &VAR_8);
 FUNC_15(VAR_4, 0xac, VAR_8 | 0x00470000);

 VAR_9 = FUNC_2(VAR_4);
 if (!VAR_9) {
  VAR_8 = -VAR_1;
  VAR_7 = 1;
  goto err_out;
 }

 VAR_6 = FUNC_5(sizeof(struct jmb38x_ms)
       + VAR_9 * sizeof(struct memstick_host *), VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_2;
  goto err_out_int;
 }

 VAR_6->pdev = VAR_4;
 VAR_6->host_cnt = VAR_9;
 FUNC_13(VAR_4, VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_6->host_cnt; ++VAR_9) {
  VAR_6->hosts[VAR_9] = FUNC_1(VAR_6, VAR_9);
  if (!VAR_6->hosts[VAR_9])
   break;

  VAR_8 = FUNC_6(VAR_6->hosts[VAR_9]);

  if (VAR_8) {
   FUNC_3(VAR_6->hosts[VAR_9]);
   VAR_6->hosts[VAR_9] = ((void*)0);
   break;
  }
 }

 if (VAR_9)
  return 0;

 VAR_8 = -VAR_1;

 FUNC_13(VAR_4, ((void*)0));
 FUNC_4(VAR_6);
err_out_int:
 FUNC_10(VAR_4);
err_out:
 if (!VAR_7)
  FUNC_7(VAR_4);
 return VAR_8;
}
