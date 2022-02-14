
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct us_data {int send_bulk_pipe; scalar_t__ extra; } ;
struct alauda_info {int wr_ep; } ;
struct TYPE_2__ {int pagesize; int blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct us_data*) ;
 int FUNC_1 (struct us_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct us_data*) ;
 int FUNC_7 (struct us_data*,int ,unsigned char*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct us_data *VAR_3, u16 VAR_4, unsigned char *VAR_5)
{
 int VAR_6;
 struct alauda_info *VAR_7 = (struct alauda_info *) VAR_3->extra;
 unsigned char VAR_8[] = {
  VAR_0, VAR_1, FUNC_2(VAR_4),
  FUNC_4(VAR_4), 0, FUNC_3(VAR_4), 32, 0, FUNC_1(VAR_3)
 };

 FUNC_5("alauda_write_block: pba %d\n", VAR_4);

 VAR_6 = FUNC_7(VAR_3, VAR_3->send_bulk_pipe,
  VAR_8, 9, ((void*)0));
 if (VAR_6 != VAR_2)
  return VAR_6;

 VAR_6 = FUNC_7(VAR_3, VAR_7->wr_ep, VAR_5,
  (FUNC_0(VAR_3).pagesize + 64) * FUNC_0(VAR_3).blocksize,
  ((void*)0));
 if (VAR_6 != VAR_2)
  return VAR_6;

 return FUNC_6(VAR_3);
}
