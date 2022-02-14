
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {size_t size; } ;
struct cx18_stream {struct cx18* cx; } ;
struct cx18 {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_3(struct cx18_stream *VAR_1,
       const struct firmware **VAR_2)
{
 struct cx18 *VAR_3 = VAR_1->cx;
 const char *VAR_4 = "dvb-cx18-mpc718-mt352.fw";
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_4, &VAR_3->pci_dev->dev);
 if (VAR_5)
  FUNC_0("Unable to open firmware file %s\n", VAR_4);
 else {
  size_t VAR_6 = (*VAR_2)->size;
  if (VAR_6 < 2 || VAR_6 > 64 || (VAR_6 % 2) != 0) {
   FUNC_0("Firmware %s has a bad size: %lu bytes\n",
     VAR_4, (unsigned long) VAR_6);
   VAR_5 = -VAR_0;
   FUNC_1(*VAR_2);
   *VAR_2 = ((void*)0);
  }
 }

 if (VAR_5) {
  FUNC_0("The MPC718 board variant with the MT352 DVB-T"
     "demodualtor will not work without it\n");
  FUNC_0("Run 'linux/Documentation/dvb/get_dvb_firmware "
     "mpc718' if you need the firmware\n");
 }
 return VAR_5;
}
