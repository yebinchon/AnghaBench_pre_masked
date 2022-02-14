
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ type; } ;
struct osst_tape {struct osst_tape* buffer; int header_cache; int drive; struct scsi_device* device; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct osst_tape*) ;
 int FUNC_2 (struct osst_tape*) ;
 struct osst_tape** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct scsi_device* FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_6)
{
 struct scsi_device * VAR_7 = FUNC_5(VAR_6);
 struct osst_tape * VAR_8;
 int VAR_9;

 if ((VAR_7->type != VAR_1) || (VAR_5 <= 0))
  return 0;

 FUNC_7(&VAR_3);
 for(VAR_9=0; VAR_9 < VAR_4; VAR_9++) {
  if((VAR_8 = VAR_2[VAR_9]) && (VAR_8->device == VAR_7)) {
   FUNC_3(FUNC_0(VAR_0, VAR_9));
   FUNC_3(FUNC_0(VAR_0, VAR_9+128));
   VAR_8->device = ((void*)0);
   FUNC_4(VAR_8->drive);
   VAR_2[VAR_9] = ((void*)0);
   VAR_5--;
   FUNC_8(&VAR_3);
   FUNC_6(VAR_8->header_cache);
   if (VAR_8->buffer) {
    FUNC_2(VAR_8->buffer);
    FUNC_1(VAR_8->buffer);
   }
   FUNC_1(VAR_8);
   return 0;
  }
 }
 FUNC_8(&VAR_3);
 return 0;
}
