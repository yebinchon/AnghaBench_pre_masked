
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; int send_bulk_pipe; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (struct us_data*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (struct us_data*,int ,unsigned char*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_2)
{
 unsigned char *VAR_3 = VAR_2->iobuf;

 FUNC_1(VAR_3, 0, 9);
 VAR_3[0] = VAR_0;
 VAR_3[1] = VAR_1;
 VAR_3[8] = FUNC_0(VAR_2);

 return FUNC_2(VAR_2, VAR_2->send_bulk_pipe,
  VAR_3, 9, ((void*)0));
}
