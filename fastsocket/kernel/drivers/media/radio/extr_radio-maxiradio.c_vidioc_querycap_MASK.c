
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct maxiradio {int pdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct maxiradio* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
       struct v4l2_capability *VAR_5)
{
 struct maxiradio *VAR_6 = FUNC_3(VAR_3);

 FUNC_2(VAR_5->driver, "radio-maxiradio", sizeof(VAR_5->driver));
 FUNC_2(VAR_5->card, "Maxi Radio FM2000 radio", sizeof(VAR_5->card));
 FUNC_1(VAR_5->bus_info, sizeof(VAR_5->bus_info), "PCI:%s", FUNC_0(VAR_6->pdev));
 VAR_5->version = VAR_0;
 VAR_5->capabilities = VAR_2 | VAR_1;
 return 0;
}
