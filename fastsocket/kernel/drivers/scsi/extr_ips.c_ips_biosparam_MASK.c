
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_7__ {TYPE_2__* enq; int active; } ;
typedef TYPE_3__ ips_ha_t ;
struct TYPE_6__ {int ucMiscFlag; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int FUNC_0 (int,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_5, struct block_device *VAR_6,
    sector_t VAR_7, int VAR_8[])
{
 ips_ha_t *VAR_9 = (ips_ha_t *) VAR_5->host->hostdata;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_1("ips_biosparam", 1);

 if (!VAR_9)

  return (0);

 if (!VAR_9->active)
  return (0);

 if (!FUNC_2(VAR_9, VAR_2))

  return (0);

 if ((VAR_7 > 0x400000) && ((VAR_9->enq->ucMiscFlag & 0x8) == 0)) {
  VAR_10 = VAR_3;
  VAR_11 = VAR_4;
 } else {
  VAR_10 = VAR_0;
  VAR_11 = VAR_1;
 }

 VAR_12 = (unsigned long) VAR_7 / (VAR_10 * VAR_11);

 FUNC_0(2, "Geometry: heads: %d, sectors: %d, cylinders: %d",
    VAR_10, VAR_11, VAR_12);

 VAR_8[0] = VAR_10;
 VAR_8[1] = VAR_11;
 VAR_8[2] = VAR_12;

 return (0);
}
