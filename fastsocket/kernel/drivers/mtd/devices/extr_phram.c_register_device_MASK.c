
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; unsigned long size; int writesize; int priv; int erasesize; int type; int owner; int write; int read; int unpoint; int point; int erase; int flags; } ;
struct phram_mtd_list {TYPE_1__ mtd; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct phram_mtd_list*) ;
 struct phram_mtd_list* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char *VAR_14, unsigned long VAR_15, unsigned long VAR_16)
{
 struct phram_mtd_list *VAR_17;
 int VAR_18 = -VAR_2;

 VAR_17 = FUNC_4(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  goto out0;

 VAR_18 = -VAR_1;
 VAR_17->mtd.priv = FUNC_1(VAR_15, VAR_16);
 if (!VAR_17->mtd.priv) {
  FUNC_6("ioremap failed\n");
  goto out1;
 }


 VAR_17->mtd.name = VAR_14;
 VAR_17->mtd.size = VAR_16;
 VAR_17->mtd.flags = VAR_4;
        VAR_17->mtd.erase = VAR_8;
 VAR_17->mtd.point = VAR_10;
 VAR_17->mtd.unpoint = VAR_12;
 VAR_17->mtd.read = VAR_11;
 VAR_17->mtd.write = VAR_13;
 VAR_17->mtd.owner = VAR_7;
 VAR_17->mtd.type = VAR_5;
 VAR_17->mtd.erasesize = VAR_6;
 VAR_17->mtd.writesize = 1;

 VAR_18 = -VAR_0;
 if (FUNC_0(&VAR_17->mtd)) {
  FUNC_6("Failed to register new device\n");
  goto out2;
 }

 FUNC_5(&VAR_17->list, &VAR_9);
 return 0;

out2:
 FUNC_2(VAR_17->mtd.priv);
out1:
 FUNC_3(VAR_17);
out0:
 return VAR_18;
}
