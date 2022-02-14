
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct us_data*,int ,int ,unsigned char*) ;
 scalar_t__ FUNC_1 (struct us_data*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_8)
{
 int VAR_9;
 unsigned char *VAR_10 = VAR_8->iobuf;


 for (VAR_9 = 0xA0; VAR_9 <= 0xB0; VAR_9 += 0x10) {
  if (FUNC_1(VAR_8, VAR_0, VAR_1, VAR_9) !=
    VAR_7)
   return VAR_5;

  if (FUNC_0(VAR_8, VAR_0, VAR_4, VAR_10) !=
    VAR_7)
   return VAR_5;

  if (FUNC_0(VAR_8, VAR_0, VAR_1, VAR_10) !=
    VAR_7)
   return VAR_5;

  if (FUNC_0(VAR_8, VAR_0, VAR_3, VAR_10) !=
    VAR_7)
   return VAR_5;

  if (FUNC_0(VAR_8, VAR_0, VAR_2, VAR_10) !=
    VAR_7)
   return VAR_5;

  if (FUNC_1(VAR_8, VAR_0, VAR_3, 0x55) !=
    VAR_7)
   return VAR_5;

  if (FUNC_1(VAR_8, VAR_0, VAR_2, 0xAA) !=
    VAR_7)
   return VAR_5;

  if (FUNC_0(VAR_8, VAR_0, VAR_3, VAR_10) !=
    VAR_7)
   return VAR_5;

  if (FUNC_0(VAR_8, VAR_0, VAR_3, VAR_10) !=
    VAR_7)
   return VAR_5;
 }

 return VAR_6;
}
