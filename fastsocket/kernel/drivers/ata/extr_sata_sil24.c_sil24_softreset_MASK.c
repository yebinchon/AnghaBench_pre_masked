
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int dummy; } ;
struct ata_port {int dummy; } ;
struct ata_link {int device; struct ata_port* ap; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct ata_taskfile*) ;
 int FUNC_2 (struct ata_link*,int ,char*,char const*) ;
 int FUNC_3 (int ,struct ata_taskfile*) ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ata_link*) ;
 int FUNC_6 (struct ata_port*,int,struct ata_taskfile*,int ,int ,unsigned long) ;
 scalar_t__ FUNC_7 (struct ata_port*) ;
 int FUNC_8 (struct ata_port*,int ,struct ata_taskfile*) ;
 scalar_t__ FUNC_9 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct ata_link *VAR_5, unsigned int *VAR_6,
      unsigned long VAR_7)
{
 struct ata_port *VAR_8 = VAR_5->ap;
 int VAR_9 = FUNC_5(VAR_5);
 unsigned long VAR_10 = 0;
 struct ata_taskfile VAR_11;
 const char *VAR_12;
 int VAR_13;

 FUNC_0("ENTER\n");


 if (FUNC_7(VAR_8)) {
  VAR_12 = "port not ready";
  goto err;
 }


 if (FUNC_9(VAR_7, VAR_4))
  VAR_10 = FUNC_4(VAR_7 - VAR_4);

 FUNC_3(VAR_5->device, &VAR_11);
 VAR_13 = FUNC_6(VAR_8, VAR_9, &VAR_11, 0, VAR_3,
       VAR_10);
 if (VAR_13 == -VAR_0) {
  VAR_12 = "timeout";
  goto err;
 } else if (VAR_13) {
  VAR_12 = "SRST command error";
  goto err;
 }

 FUNC_8(VAR_8, 0, &VAR_11);
 *VAR_6 = FUNC_1(&VAR_11);

 FUNC_0("EXIT, class=%u\n", *VAR_6);
 return 0;

 err:
 FUNC_2(VAR_5, VAR_2, "softreset failed (%s)\n", VAR_12);
 return -VAR_1;
}
