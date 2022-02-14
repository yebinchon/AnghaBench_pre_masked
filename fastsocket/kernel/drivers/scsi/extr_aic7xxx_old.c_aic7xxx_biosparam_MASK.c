
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct block_device {int dummy; } ;
struct aic7xxx_host {int flags; } ;
typedef int sector_t ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (struct block_device*) ;
 int FUNC_2 (unsigned char*,int,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_3(struct scsi_device *VAR_1, struct block_device *VAR_2,
  sector_t VAR_3, int VAR_4[])
{
  sector_t VAR_5, VAR_6, VAR_7;
  int VAR_8;
  struct aic7xxx_host *VAR_9;
  unsigned char *VAR_10;

  VAR_9 = (struct aic7xxx_host *) VAR_1->host->hostdata;
  VAR_10 = FUNC_1(VAR_2);

  if ( VAR_10 )
  {
    VAR_8 = FUNC_2(VAR_10, VAR_3, &VAR_4[2], &VAR_4[0], &VAR_4[1]);
    FUNC_0(VAR_10);
    if ( VAR_8 != -1 )
      return(VAR_8);
  }

  VAR_5 = 64;
  VAR_6 = 32;
  VAR_7 = VAR_3 >> 11;

  if ((VAR_9->flags & VAR_0) && (VAR_7 > 1024))
  {
    VAR_5 = 255;
    VAR_6 = 63;
    VAR_7 = VAR_3 >> 14;
    if(VAR_3 > (65535 * VAR_5 * VAR_6))
      VAR_7 = 65535;
    else
      VAR_7 = ((unsigned int)VAR_3) / (unsigned int)(VAR_5 * VAR_6);
  }

  VAR_4[0] = (int)VAR_5;
  VAR_4[1] = (int)VAR_6;
  VAR_4[2] = (int)VAR_7;

  return (0);
}
