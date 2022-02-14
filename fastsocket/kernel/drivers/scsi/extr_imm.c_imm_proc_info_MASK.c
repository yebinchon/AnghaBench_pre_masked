
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
typedef int off_t ;
struct TYPE_8__ {size_t mode; TYPE_2__* dev; } ;
typedef TYPE_3__ imm_struct ;
struct TYPE_7__ {TYPE_1__* port; } ;
struct TYPE_6__ {char* name; } ;


 char** VAR_0 ;
 char* VAR_1 ;
 TYPE_3__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_2, char *VAR_3, char **VAR_4,
   off_t VAR_5, int VAR_6, int VAR_7)
{
 imm_struct *VAR_8 = FUNC_0(VAR_2);
 int VAR_9 = 0;

 if (VAR_7)
  return FUNC_1(VAR_8, VAR_3, VAR_6);

 VAR_9 += FUNC_2(VAR_3 + VAR_9, "Version : %s\n", VAR_1);
 VAR_9 +=
     FUNC_2(VAR_3 + VAR_9, "Parport : %s\n",
      VAR_8->dev->port->name);
 VAR_9 +=
     FUNC_2(VAR_3 + VAR_9, "Mode    : %s\n",
      VAR_0[VAR_8->mode]);


 if (VAR_5 > VAR_9)
  return 0;

 *VAR_4 = VAR_3 + VAR_5;
 VAR_9 -= VAR_5;
 if (VAR_9 > VAR_6)
  VAR_9 = VAR_6;
 return VAR_9;
}
