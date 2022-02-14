
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_fh {struct zoran* zr; } ;
struct zoran {int pci_dev; } ;
struct v4l2_capability {int capabilities; int version; int bus_info; int driver; int card; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (struct zoran*) ;
 int FUNC_2 (struct v4l2_capability*,int ,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,char*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_7, void *VAR_8, struct v4l2_capability *VAR_9)
{
 struct zoran_fh *VAR_10 = VAR_8;
 struct zoran *VAR_11 = VAR_10->zr;

 FUNC_2(VAR_9, 0, sizeof(*VAR_9));
 FUNC_5(VAR_9->card, FUNC_1(VAR_11), sizeof(VAR_9->card)-1);
 FUNC_5(VAR_9->driver, "zoran", sizeof(VAR_9->driver)-1);
 FUNC_4(VAR_9->bus_info, sizeof(VAR_9->bus_info), "PCI:%s",
   FUNC_3(VAR_11->pci_dev));
 VAR_9->version = FUNC_0(VAR_0, VAR_1,
      VAR_2);
 VAR_9->capabilities = VAR_3 | VAR_4 |
       VAR_5 | VAR_6;
 return 0;
}
