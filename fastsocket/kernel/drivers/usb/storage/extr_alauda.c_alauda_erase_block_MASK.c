
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct us_data {int recv_bulk_pipe; int send_bulk_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct us_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,unsigned char,...) ;
 int FUNC_5 (struct us_data*,int ,unsigned char*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct us_data *VAR_3, u16 VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[] = {
  VAR_0, VAR_1, FUNC_1(VAR_4),
  FUNC_3(VAR_4), 0, FUNC_2(VAR_4), 0x02, 0, FUNC_0(VAR_3)
 };
 unsigned char VAR_7[2];

 FUNC_4("alauda_erase_block: Erasing PBA %d\n", VAR_4);

 VAR_5 = FUNC_5(VAR_3, VAR_3->send_bulk_pipe,
  VAR_6, 9, ((void*)0));
 if (VAR_5 != VAR_2)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_3, VAR_3->recv_bulk_pipe,
  VAR_7, 2, ((void*)0));
 if (VAR_5 != VAR_2)
  return VAR_5;

 FUNC_4("alauda_erase_block: Erase result: %02X %02X\n",
  VAR_7[0], VAR_7[1]);
 return VAR_5;
}
