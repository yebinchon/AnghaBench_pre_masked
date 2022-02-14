
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ extra; } ;
struct scsi_cmnd {scalar_t__* cmnd; } ;
struct karma_data {int in_storage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct us_data*) ;
 int FUNC_1 (struct scsi_cmnd*,struct us_data*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_5, struct us_data *VAR_6)
{
 int VAR_7;
 struct karma_data *VAR_8 = (struct karma_data *) VAR_6->extra;

 if (VAR_5->cmnd[0] == VAR_0 && !VAR_8->in_storage) {
  VAR_7 = FUNC_0(VAR_1, VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_8->in_storage = 1;
  return FUNC_1(VAR_5, VAR_6);
 } else if (VAR_5->cmnd[0] == VAR_4) {
  VAR_7 = FUNC_0(VAR_2, VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_8->in_storage = 0;
  return FUNC_0(VAR_3, VAR_6);
 }
 return FUNC_1(VAR_5, VAR_6);
}
