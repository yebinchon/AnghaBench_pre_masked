
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_8__ {size_t mode; char* recon_tmo; TYPE_2__* dev; } ;
typedef TYPE_3__ ppa_struct ;
typedef int off_t ;
struct TYPE_7__ {TYPE_1__* port; } ;
struct TYPE_6__ {char* name; } ;


 char** VAR_0 ;
 char* VAR_1 ;
 TYPE_3__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_2, char *VAR_3, char **VAR_4, off_t VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 ppa_struct *VAR_9 = FUNC_0(VAR_2);

 if (VAR_7)
  return FUNC_1(VAR_9, VAR_3, VAR_6);

 VAR_8 += FUNC_2(VAR_3 + VAR_8, "Version : %s\n", VAR_1);
 VAR_8 +=
     FUNC_2(VAR_3 + VAR_8, "Parport : %s\n",
      VAR_9->dev->port->name);
 VAR_8 +=
     FUNC_2(VAR_3 + VAR_8, "Mode    : %s\n",
      VAR_0[VAR_9->mode]);






 if (VAR_5 > VAR_6)
  return 0;

 *VAR_4 = VAR_3 + VAR_5;
 VAR_8 -= VAR_5;
 if (VAR_8 > VAR_6)
  VAR_8 = VAR_6;
 return VAR_8;
}
