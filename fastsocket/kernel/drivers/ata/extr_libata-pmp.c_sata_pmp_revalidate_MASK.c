
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_port {scalar_t__ sector_buf; } ;
struct ata_link {struct ata_port* ap; } ;
struct ata_device {int gscr; struct ata_link* link; } ;
typedef int gscr ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,int ,char*,int) ;
 int FUNC_4 (struct ata_link*,int *,int ) ;
 int FUNC_5 (struct ata_link*,int *,int ) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (struct ata_device*,int ) ;
 int FUNC_8 (struct ata_device*,int *) ;
 int FUNC_9 (struct ata_device*,int *) ;

__attribute__((used)) static int FUNC_10(struct ata_device *VAR_5, unsigned int VAR_6)
{
 struct ata_link *VAR_7 = VAR_5->link;
 struct ata_port *VAR_8 = VAR_7->ap;
 u32 *VAR_9 = (void *)VAR_8->sector_buf;
 int VAR_10;

 FUNC_0("ENTER\n");

 FUNC_4(VAR_7, ((void*)0), VAR_1);

 if (!FUNC_2(VAR_5)) {
  VAR_10 = -VAR_2;
  goto fail;
 }


 if (FUNC_1(VAR_6) && VAR_6 != VAR_0) {
  VAR_10 = -VAR_2;
  goto fail;
 }


 VAR_10 = FUNC_8(VAR_5, VAR_9);
 if (VAR_10)
  goto fail;


 if (!FUNC_9(VAR_5, VAR_9)) {
  VAR_10 = -VAR_2;
  goto fail;
 }

 FUNC_6(VAR_5->gscr, VAR_9, sizeof(VAR_9[0]) * VAR_4);

 VAR_10 = FUNC_7(VAR_5, 0);
 if (VAR_10)
  goto fail;

 FUNC_5(VAR_7, ((void*)0), VAR_1);

 FUNC_0("EXIT, rc=0\n");
 return 0;

 fail:
 FUNC_3(VAR_5, VAR_3,
         "PMP revalidation failed (errno=%d)\n", VAR_10);
 FUNC_0("EXIT, rc=%d\n", VAR_10);
 return VAR_10;
}
