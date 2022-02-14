
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int,int,int *) ;
 int FUNC_3 (struct gspca_dev*,int,int,int,int,int ,int *) ;
 int FUNC_4 (struct gspca_dev*,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_1)
{
 u8 VAR_2;

 FUNC_2(VAR_1, 0xc0, 2, 0x0000, 0x0004, 1, &VAR_2);
 FUNC_2(VAR_1, 0xc0, 2, 0x0000, 0x0004, 1, &VAR_2);

 FUNC_4(VAR_1, VAR_0,
   FUNC_0(VAR_0));

 FUNC_3(VAR_1, 0x40, 1, 0x7a00, 0x8030, 0, ((void*)0));
 FUNC_2(VAR_1, 0xc0, 2, 0x7a00, 0x8030, 1, &VAR_2);

 FUNC_1(VAR_1);

 FUNC_5(61);


 FUNC_3(VAR_1, 0x40, 1, 0x0001, 0x0000, 0, ((void*)0));

 return 0;
}
