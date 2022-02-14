
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct Scsi_Host {int io_port; int irq; } ;
typedef scalar_t__ off_t ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_2, char *VAR_3,
        char **VAR_4, off_t VAR_5, int VAR_6, int VAR_7)
{
 static u8 VAR_8[512];
 int VAR_9 = 0;
 int VAR_10 = 0;
 off_t VAR_11 = 0;
 off_t VAR_12 = 0;

 if (VAR_7)
  return -VAR_1;
 if (VAR_5 == 0)
  FUNC_0(VAR_8, 0, sizeof(VAR_8));
 VAR_9 += FUNC_1(VAR_0, "ACARD AEC-671X Driver Version: 2.6+ac\n");
 VAR_10 += VAR_9;
 VAR_12 = VAR_11 + VAR_10;
 VAR_9 = 0;

 VAR_9 += FUNC_1(VAR_0, "\n");
 VAR_9 += FUNC_1(VAR_0, "Adapter Configuration:\n");
 VAR_9 += FUNC_1(VAR_0, "               Base IO: %#.4lx\n", VAR_2->io_port);
 VAR_9 += FUNC_1(VAR_0, "                   IRQ: %d\n", VAR_2->irq);
 VAR_10 += VAR_9;
 VAR_12 = VAR_11 + VAR_10;

 *VAR_4 = VAR_3 + (VAR_5 - VAR_11);
 VAR_10 -= (VAR_5 - VAR_11);
 if (VAR_10 > VAR_6) {
  VAR_10 = VAR_6;
 }
 return (VAR_10);
}
