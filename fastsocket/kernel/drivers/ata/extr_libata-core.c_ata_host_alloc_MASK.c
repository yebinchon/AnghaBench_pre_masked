
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_port {int port_no; } ;
struct ata_host {int n_ports; struct ata_port** ports; struct device* dev; int eh_mutex; int lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ata_port* FUNC_1 (struct ata_host*) ;
 int FUNC_2 (struct device*,struct ata_host*) ;
 int FUNC_3 (struct device*,struct ata_host*) ;
 struct ata_host* FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (struct device*,int *,int ) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct ata_host *FUNC_10(struct device *VAR_2, int VAR_3)
{
 struct ata_host *VAR_4;
 size_t VAR_5;
 int VAR_6;

 FUNC_0("ENTER\n");

 if (!FUNC_5(VAR_2, ((void*)0), VAR_0))
  return ((void*)0);


 VAR_5 = sizeof(struct ata_host) + (VAR_3 + 1) * sizeof(void *);

 VAR_4 = FUNC_4(VAR_1, VAR_5, VAR_0);
 if (!VAR_4)
  goto err_out;

 FUNC_3(VAR_2, VAR_4);
 FUNC_2(VAR_2, VAR_4);

 FUNC_9(&VAR_4->lock);
 FUNC_8(&VAR_4->eh_mutex);
 VAR_4->dev = VAR_2;
 VAR_4->n_ports = VAR_3;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct ata_port *VAR_7;

  VAR_7 = FUNC_1(VAR_4);
  if (!VAR_7)
   goto err_out;

  VAR_7->port_no = VAR_6;
  VAR_4->ports[VAR_6] = VAR_7;
 }

 FUNC_7(VAR_2, ((void*)0));
 return VAR_4;

 err_out:
 FUNC_6(VAR_2, ((void*)0));
 return ((void*)0);
}
